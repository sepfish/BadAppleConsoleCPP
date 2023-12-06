

#include <iostream>
#include <thread>
#include "lib/include/AudioPlayer.h"
#include "lib/include/VideoProcessor.h"

int main(int argc, char** argv) {
    //AudioPlayer a(argv[1]);

    //auto audio = [](AudioPlayer a) {
        //a.playSong();
    //};

    //std::thread audioThread(audio, a);


    const char* videoFilePath = argv[2];

    std::cout << "the main is running" << std::endl;

    VideoProcessor processor(videoFilePath, "C:/Users/trsky/Desktop/FRAMES");

    std::cout << "video processor was able to get a video file path" << std::endl;

    //processor.writeFramesToFolder();

    std::cout << "video processor was able to write to file paths" << std::endl;

    processor.processFrames(10);

    std::cout << "processed all frames" << std::endl;


    for (std::string &s: processor.framesAsAscii) {
        std::cout << s;
        std::this_thread::sleep_for(std::chrono::milliseconds(8));
        system("cls");
    }


    //std::this_thread::sleep_for(std::chrono::milliseconds(10000));
    //a.stopPlaying = true;

    return 0;
}
