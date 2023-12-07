

#include <iostream>
#include <thread>
#include "lib/include/VideoProcessor.h"
#include <ncurses.h>

int main(int argc, char** argv) {
    initscr();


    //AudioPlayer a(argv[1]);

    //auto audio = [](AudioPlayer a) {
    //a.playSong();
    //};

    //std::thread audioThread(audio, a);



    const char* videoFilePath = argv[1];

    move(0, 0);
    printw("the main is running");

    VideoProcessor processor(videoFilePath,
                             "/Users/raymondtsai/Documents/CS3520/CLionProjects/BadAppleConsoleCPP/FRAMES");

    move(0, 1);
    printw("video processor was able to get a video file path");

    //processor.writeFramesToFolder();

    move(0, 2);
    printw("video processor was able to write to file paths");

    processor.processFrames(18);

    move(0, 3);
    printw("processed all frames\n");

    /*
    system("open -a Terminal");
    const char* exePath = "/Users/raymondtsai/Documents/CS3520/CLionProjects/BadAppleConsoleCPP/cmake-build-debug/BadAppleConsoleCPP";
    // Command-line arguments
    const char* arguments = "/Users/raymondtsai/Documents/CS3520/CLionProjects/BadAppleConsoleCPP/badapple.mp4"; // Replace with your actual arguments

    // Construct the command
    const char* commandFormat = "%s %s";
    char command[256]; // Adjust the buffer size as needed
    snprintf(command, sizeof(command), commandFormat, exePath, arguments);

    // Run the command
    int result = system(command);*/


    WINDOW * win = newwin(processor.frameHeight, processor.frameWidth, 0, 0);

    for (std::vector<std::string> &s: processor.framesAsAscii) {
        //for every line in the frame, print to window
        for (int row = 0; row < processor.frameHeight; row++) {
            mvwprintw(win, row, 0, s.at(row).c_str());
            wrefresh(win);
        }


        std::this_thread::sleep_for(std::chrono::milliseconds(50));
    }


    //std::this_thread::sleep_for(std::chrono::milliseconds(10000));
    //a.stopPlaying = true;

    return 0;
}
