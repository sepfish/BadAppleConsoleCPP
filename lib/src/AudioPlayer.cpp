//
// Created by trsky on 12/2/2023.
//

#define MINIAUDIO_IMPLEMENTATION
#include <iostream>
#include "../audio/miniaudio.h"
#include "../include/AudioPlayer.h"

AudioPlayer::AudioPlayer(char *fileName) {
    audioFile = fileName;
    stopPlaying = false;
}

//From the miniaudio github starter code.
void data_callback(ma_device* pDevice, void* pOutput, const void* pInput, ma_uint32 frameCount) {
    ma_decoder* pDecoder = (ma_decoder*)pDevice->pUserData;
    if (pDecoder == NULL) {
        return;
    }
    ma_decoder_read_pcm_frames(pDecoder, pOutput, frameCount, NULL);
    (void)pInput;
}

int AudioPlayer::playSong() {
    //Also from the miniaudio github starter code.
    ma_result result;
    ma_device_config deviceConfig;
    ma_device device;
    ma_decoder decoder;

    result = ma_decoder_init_file(audioFile, NULL, &decoder);
    if (result != MA_SUCCESS) {
        return -2;
    }

    deviceConfig = ma_device_config_init(ma_device_type_playback);
    deviceConfig.playback.format   = decoder.outputFormat;
    deviceConfig.playback.channels = decoder.outputChannels;
    deviceConfig.sampleRate        = decoder.outputSampleRate;
    deviceConfig.dataCallback      = data_callback;
    deviceConfig.pUserData         = &decoder;

    if (ma_device_init(NULL, &deviceConfig, &device) != MA_SUCCESS) {
        printf("Failed to open playback device.\n");
        ma_decoder_uninit(&decoder);
        return -3;
    }

    if (ma_device_start(&device) != MA_SUCCESS) {
        printf("Failed to start playback device.\n");
        ma_device_uninit(&device);
        ma_decoder_uninit(&decoder);
        return -4;
    }

    //printf("Press Enter to quit...");
    //getchar();

    if (stopPlaying) {
        ma_device_uninit(&device);
        ma_decoder_uninit(&decoder);
    }

    return 0;
}

AudioPlayer::~AudioPlayer() {

}


