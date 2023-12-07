//
// Created by Raymond Tsai on 12/2/23.
//

#ifndef BADAPPLECONSOLECPP_VIDEOPROCESSOR_H
#define BADAPPLECONSOLECPP_VIDEOPROCESSOR_H

#include <iostream>
#include <opencv2/opencv.hpp>

class VideoProcessor {

//NOTE: WRITEFRAMESTOFOLDER MUST BE CALLED BEFORE PROCESSFRAME TO WORK PROPERLY
public:
    //stores each frame as a multi-line string of ascii art
    //std::vector<std::string> framesAsAscii;

    int frameWidth;
    int frameHeight;

    //list of frames, where each frame is a list of strings, each string representing a row of the ASCII frame
    std::vector<std::vector<std::string>> framesAsAscii;


    //constructor
    explicit VideoProcessor(const char* videoFilePath, const char* framesPath);

    //takes each frame and saves as png file in the framesDirectory
    void writeFramesToFolder();

    void processFrames(int downsampleRate);



private:
    const char* videoFilePath;
    const char* framesPath;
    const char* asciiCharacterList;
    std::vector<double> asciiBrightnessList;

    //processes each frame and stores it as a String, puts it in the vector
    //  1. analyzes each pixel by brightness
    //  2. corresponds each brightness value to the nearest ASCII character
    //  3. generates a multi-line String for the frame
    //  4. stores the String in a vector.
    void processFrame(const char* dir, int downsampleRate);

};


#endif //BADAPPLECONSOLECPP_VIDEOPROCESSOR_H
