

#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/videoio.hpp>
#include "lib/include/AudioPlayer.h"


int main(int argc, char** argv) {
    AudioPlayer a(argv[1]);
    a.playSong();

    cv::VideoCapture cap(argv[2]);
    return 0;
}
