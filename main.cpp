#include <iostream>

#define MINIAUDIO_IMPLEMENTATION
#include "lib/audio/miniaudio.h"

#include "lib/video/VideoProcessor.h"

void data_callback(ma_device* pDevice, void* pOutput, const void* pInput, ma_uint32 frameCount)
{
    ma_decoder* pDecoder = (ma_decoder*)pDevice->pUserData;
    if (pDecoder == NULL) {
        return;
    }

    ma_decoder_read_pcm_frames(pDecoder, pOutput, frameCount, NULL);

    (void)pInput;
}

int main(int argc, char** argv)
{
    const char* videoFilePath = argv[1];

    std::cout << "the main is running" << std::endl;

    VideoProcessor processor(videoFilePath, "/Users/raymondtsai/Documents/CS3520/CLionProjects/BadAppleConsoleCPP/FRAMES");

    std::cout << "video processor was able to get a video file path" << std::endl;

    processor.writeFramesToFolder();

    std::cout << "video processor was able to write to file paths" << std::endl;

    processor.processFrames(10);

    std::cout << "processed all frames" << std::endl;
}
