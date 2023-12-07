

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

    processor.writeFramesToFolder();

    move(0, 2);
    printw("video processor was able to write to file paths");

    //processor.processFrames(10);

    WINDOW * win = newwin(100, 100, 0, 0);

    move(0, 3);
    printw("processed all frames\n");

    system("open -a Terminal");
    const char* exePath = "/Users/raymondtsai/Documents/CS3520/CLionProjects/BadAppleConsoleCPP/cmake-build-debug/BadAppleConsoleCPP";
    // Command-line arguments
    const char* arguments = "/Users/raymondtsai/Documents/CS3520/CLionProjects/BadAppleConsoleCPP/badapple.mp4"; // Replace with your actual arguments

    // Construct the command
    const char* commandFormat = "%s %s";
    char command[256]; // Adjust the buffer size as needed
    snprintf(command, sizeof(command), commandFormat, exePath, arguments);

    // Run the command
    int result = system(command);


    /*
    for (std::string &s: processor.framesAsAscii) {
        for (int i = 0; i < processor.frameHeight; i++) {
            mvwprintw(win, 0, 0, s.c_str());
            //TODO - change the representation of a frame from a std::string to a list of strings per line
            //that way we can access each character and print it at the right position in the window
            //  there is no easy way to print multi-line strings in ncurses
        }

        wrefresh(win);
        std::this_thread::sleep_for(std::chrono::milliseconds(8));
        //wrefresh(win)
        move(0, 0);
    }*/


    //std::this_thread::sleep_for(std::chrono::milliseconds(10000));
    //a.stopPlaying = true;

    return 0;
}