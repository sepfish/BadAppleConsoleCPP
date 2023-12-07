

#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include "lib/include/AudioPlayer.h"
#include "lib/include/VideoProcessor.h"

std::mutex mutex;
std::condition_variable condv;

bool flag = false;

int main(int argc, char **argv) {
    AudioPlayer a(argv[1]);

    auto audio = [](AudioPlayer a) {
        std::unique_lock<std::mutex> lock(mutex);
        a.playSong();
        condv.wait(lock, []{return flag;});
        a.stopPlaying = true;
    };

    const char *videoFilePath = argv[2];

    std::cout << "the main is running" << std::endl;

    VideoProcessor processor(videoFilePath, "C:/Users/trsky/Desktop/FRAMES");

    std::cout << "video processor was able to get a video file path" << std::endl;

    //processor.writeFramesToFolder();

    std::cout << "video processor was able to write to file paths" << std::endl;

    processor.processFrames(10);

    std::cout << "processed all frames" << std::endl;

    auto video = [](VideoProcessor processor) {
        for (std::string &s: processor.framesAsAscii) {
            std::cout << s;
            //theoretically time between frames should be 16.6 ms
            //std::this_thread::sleep_for(std::chrono::milliseconds(2));
            system("cls");
        }
        flag = true;
        condv.notify_one();
    };

    std::thread audioThread(audio, a);
    std::thread videoThread(video, processor);

    videoThread.join();

    {
        std::unique_lock<std::mutex> lock(mutex);
        flag = true;
        condv.notify_one();
    }

    audioThread.join();


    //std::this_thread::sleep_for(std::chrono::milliseconds(10000));


    return 0;
}
