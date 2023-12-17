

#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include "lib/include/AudioPlayer.h"
#include "lib/include/VideoProcessor.h"
#include <ncurses.h>
#include <chrono>

std::mutex mutex;
std::condition_variable condv;

bool flag = false;

int main(int argc, char** argv) {
    initscr();

    const char* videoFilePath = argv[2];

    move(0, 0);
    printw("the main is running");

    VideoProcessor processor(videoFilePath,
                             argv[3]);

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

    AudioPlayer a(argv[1]);

    //creates audio thread that plays the song and waits for the video thread to stop before stopping
    auto audio = [](AudioPlayer a) {
        std::unique_lock<std::mutex> lock(mutex);
        a.playSong();
        condv.wait(lock, []{return flag;});
        a.stopPlaying = true;
    };

    auto video = [](VideoProcessor processor) {
        WINDOW * win = newwin(processor.frameHeight, processor.frameWidth, 0, 0);
        const int frameRate = 20;  // Set your desired frame rate
        auto frameDuration = std::chrono::microseconds(1000000 / frameRate);

        const char* elapsedAsChar = "";

        for (auto frame = processor.framesAsAscii.begin(); frame <= processor.framesAsAscii.end(); ++frame) {

            auto start = std::chrono::high_resolution_clock::now();

            mvwprintw(win, processor.frameHeight + 2, 0, elapsedAsChar);
            wrefresh(win);

            //for every line in the frame, print to window
            for (int row = 0; row < processor.frameHeight; row++) {
                mvwprintw(win, row, 0, frame->at(row).c_str());
                wrefresh(win);
            }

            auto end = std::chrono::high_resolution_clock::now();
            auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
            elapsedAsChar = std::to_string(elapsed.count()).c_str();

            // Introduce a delay to achieve the desired frame rate

            constexpr std::chrono::duration<double> MinSleepDuration(0);
            while (std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::high_resolution_clock::now() - start) < frameDuration) {
                std::this_thread::sleep_for(MinSleepDuration);
            }

            /*
            while (elapsed < frameDuration - std::chrono::microseconds(20000)) {
                end = std::chrono::high_resolution_clock::now();
                elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
            }*/

            /*
            if (elapsed < frameDuration) {
                std::this_thread::sleep_for(frameDuration - elapsed);
            }*/

            //++frame; //skips every frame (run at 10 fps every 2 frames, video is around 20 fps)
            //++frame;
        }

        //FROM CHATGPT
        /*
         const int frameRate = 10;  // Set your desired frame rate

        // Calculate the duration of each frame
        auto frameDuration = std::chrono::milliseconds(1000 / frameRate);

        while (true) {
            auto start = std::chrono::high_resolution_clock::now();

            // Clear the terminal (platform-dependent)
            // For Windows, you can use system("cls"); for Linux/macOS, use system("clear");
            // Note: This is a simple example; a more sophisticated solution might be needed.
            system("clear");

            // Display your ASCII art
            displayAsciiArt();

            auto end = std::chrono::high_resolution_clock::now();
            auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

            // Introduce a delay to achieve the desired frame rate
            if (elapsed < frameDuration) {
                std::this_thread::sleep_for(frameDuration - elapsed);
            }
        }*/
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
