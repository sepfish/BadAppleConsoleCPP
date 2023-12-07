

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

    //creates audio thread that plays the song and waits for the video thread to stop before stopping
    auto audio = [](AudioPlayer a) {
        std::unique_lock<std::mutex> lock(mutex);
        a.playSong();
        condv.wait(lock, []{return flag;});
        a.stopPlaying = true;
    };

    const char *videoFilePath = argv[2];
    VideoProcessor processor(videoFilePath, argv[3]);
    std::cout << "video processor was able to get a video file path" << std::endl;

    //lines should be uncommented when running for the first time
    //processor.writeFramesToFolder();
    //std::cout << "video processor was able to write to file paths" << std::endl;

    processor.processFrames(10);
    std::cout << "processed all frames" << std::endl;

    //creates "video" thread that prints each frame included in the VideoProcessor
    auto video = [](VideoProcessor processor) {
        for (std::string &s: processor.framesAsAscii) {
            std::cout << s;
            //optimally, time between frames should be 16.6 ms
            //std::this_thread::sleep_for(std::chrono::milliseconds(1));
            system("cls");
        }
        flag = true;
        condv.notify_one();
    };

    //start both threads
    std::thread audioThread(audio, a);
    std::thread videoThread(video, processor);

    //wait for the video thread to finish
    videoThread.join();

    //tell the audio thread that it needs to end
    {
        std::unique_lock<std::mutex> lock(mutex);
        flag = true;
        condv.notify_one();
    }

    //wait for the audio thread to finish
    audioThread.join();

    return 0;
}
