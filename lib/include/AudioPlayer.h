//
// Created by trsky on 12/2/2023.
//

#ifndef BADAPPLECONSOLECPP_AUDIOPLAYER_H
#define BADAPPLECONSOLECPP_AUDIOPLAYER_H


class AudioPlayer {
public:
    AudioPlayer(char* fileName);
    int playSong();
private:
    char* audioFile;
};


#endif //BADAPPLECONSOLECPP_AUDIOPLAYER_H
