#include <iostream>
#include "lib/include/AudioPlayer.h"


int main(int argc, char** argv) {
    AudioPlayer a(argv[1]);
    a.playSong();

    return 0;
}
