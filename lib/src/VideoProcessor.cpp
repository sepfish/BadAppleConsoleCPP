//
// Created by Raymond Tsai on 12/2/23.
//

#include "../include/VideoProcessor.h"
#include <filesystem>

VideoProcessor::VideoProcessor(const char *videoFilePath, const char* framesPath) {
    this->videoFilePath = videoFilePath;
    this->framesPath = framesPath;
    this->asciiCharacterList = " `.-':_,^=;><+!rc*/z?sLTv)J7(|Fi{C}fI31tlu[neoZ5Yxjya]2ESwqkP6h9d4VpOGbUAKXHm8RD#$Bg0MNWQ%&@";
    this->asciiBrightnessList = {0, 0.0751, 0.0829, 0.0848, 0.1227, 0.1403, 0.1559, 0.185, 0.2183, 0.2417, 0.2571,
                                 0.2852, 0.2902, 0.2919, 0.3099, 0.3192, 0.3232, 0.3294, 0.3384, 0.3609, 0.3619, 0.3667,
                                 0.3737, 0.3747, 0.3838, 0.3921, 0.396, 0.3984, 0.3993, 0.4075, 0.4091, 0.4101, 0.42,
                                 0.423, 0.4247, 0.4274, 0.4293, 0.4328, 0.4382, 0.4385, 0.442, 0.4473, 0.4477, 0.4503,
                                 0.4562, 0.458, 0.461, 0.4638, 0.4667, 0.4686, 0.4693, 0.4703, 0.4833, 0.4881, 0.4944,
                                 0.4953, 0.4992, 0.5509, 0.5567, 0.5569, 0.5591, 0.5602, 0.5602, 0.565, 0.5776, 0.5777,
                                 0.5818, 0.587, 0.5972, 0.5999, 0.6043, 0.6049, 0.6093, 0.6099, 0.6465, 0.6561, 0.6595,
                                 0.6631, 0.6714, 0.6759, 0.6809, 0.6816, 0.6925, 0.7039, 0.7086, 0.7235, 0.7302, 0.7332,
                                 0.7602, 0.7834, 0.8037, 0.9999};

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
        //std::cout << framesPath << std::endl;
        std::string fileNameAsString = std::string(framesPath) + "/frame-%04d.bmp";
        //std::cout << fileNameAsString << std::endl;
        snprintf(fileName, sizeof(fileName), fileNameAsString.c_str(), frameNumber);



        cv::imwrite(fileName, frame);

        frameNumber++;
    }

    cap.release();
}


void VideoProcessor::processFrames(int downsampleRate) {
    namespace fs = std::filesystem;

    std::vector<fs::directory_entry> entries;

    // Collect directory entries into a vector
    for (const auto& entry : fs::directory_iterator(framesPath)) {
        entries.push_back(entry);
    }

    // Sort the entries based on filenames
    std::sort(entries.begin(), entries.end(), [](const fs::directory_entry& a, const fs::directory_entry& b) {
        return a.path().filename() < b.path().filename();
    });

    for (const auto& entry : entries) {
        processFrame(entry.path().string().data(), downsampleRate);
    }
}

void VideoProcessor::processFrame(const char* dir, int downsampleRate) {
    namespace fs = std::filesystem;

    //set the readImage to a cv::Mat
    cv::Mat readImage = cv::imread(dir);

    std::vector<std::vector<double>> pixelBrightnessMap(readImage.rows);

    std::string stringToBuild;

    for (int i = 0; i < pixelBrightnessMap.size(); i++) {
        pixelBrightnessMap.at(i) = std::vector<double>(readImage.cols);
    }

    //analyze each pixel by brightness
    for (int row = 0; row < readImage.rows; row += downsampleRate) {
        for (int col = 0; col < readImage.cols; col += downsampleRate) {
            cv::Vec3b bgrPixel = readImage.at<cv::Vec3b>(row, col);
            int red = bgrPixel[2];
            int green = bgrPixel[1];
            int blue = bgrPixel[0];
            double brightness = 0.299 * red + 0.587 * green + 0.114 * blue;

            double minimumDiff = 1;
            int indexOfMin = 0;
            for (int i = 0; i < this->asciiBrightnessList.size(); i++) {
                double diff = brightness - this->asciiBrightnessList[i];
                if (diff < minimumDiff) {
                    indexOfMin = i;
                    minimumDiff = diff;
                }
            }

            //std::cout << "Ascii brightness list length: " << this->asciiBrightnessList.size() << std::endl;
            //std::cout << "Ascii character list length: " << strlen(this->asciiCharacterList) << std::endl;

            //std::cout << this->asciiCharacterList[indexOfMin] << std::endl;
            stringToBuild += " ";
            stringToBuild += this->asciiCharacterList[indexOfMin];
            //stringToBuild += " ";
            pixelBrightnessMap[row][col] = brightness;

        }
        stringToBuild += "\n";
    }

    //std::cout << stringToBuild << std::endl;

    this->framesAsAscii.push_back(stringToBuild);

    //write the

    /*
    for (int row = 0; row < readImage.rows; row++) {
        for (int col = 0; col < readImage.cols; col++) {
            printf(" %5.2f ", pixelBrightnessMap[row][col]);
        }
        std::cout << std::endl;
    }*/


}


