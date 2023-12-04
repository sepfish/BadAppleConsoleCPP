//
// Created by Raymond Tsai on 12/2/23.
//

#include "VideoProcessor.h"

VideoProcessor::VideoProcessor(const char *videoFilePath) {
    this->videoFilePath = videoFilePath;
}

void VideoProcessor::writeFramesToFolder() {

    std::cout << videoFilePath << std::endl;

    cv::VideoCapture cap(videoFilePath);

    if (!cap.isOpened()) {
        std::cerr << "Error: could not find video file." << std::endl;
        return;
    }

    int frameNumber = 0;
    cv::Mat frame;

    while(cap.read(frame)) {
        char fileName[256];
        snprintf(fileName, sizeof(fileName),
         "/Users/raymondtsai/Documents/CS3520/CLionProjects/BadAppleConsoleCPP/FRAMES/frame-%04d.bmp", frameNumber);

        cv::namedWindow("image", cv::WINDOW_AUTOSIZE);
        cv::imshow("image", frame);
        cv::waitKey(10);

        cv::imwrite(fileName, frame);

        frameNumber++;
    }

    cap.release();
}

void VideoProcessor::processFrames() {

}

void VideoProcessor::processFrame() {

    //analyze each pixel by brightness

}


