# BadAppleConsoleCPP
Bad Apple but it's Displayed in Terminal

# Overview
Bad Apple is a music video that is commonly used in image processing projects. This project processes each frame,
analyzing the pixels for brightness, and displaying them as ASCII art in the terminal while playing the audio of the
music video.

*Currently, the visuals and audio are not synced due to limitations in the development environment.

# External Libraries Used
OpenCV - Image Processing Library -  https://opencv.org
MiniAudio - Audio Playback Library - https://miniaud.io

# How to Build/Execute
Create a build according to the CMakeLists.txt file. If running on a MacOS arm64 system (M1), put these arguments
into the CMake settings (CLion -> Settings -> Build, Execution, Deployment -> CMake):

-DCMAKE_OSX_ARCHITECTURES=arm64 -DWITH_QT=OFF -DWITH_OPENGL=OFF -DFORCE_VTK=OFF -DWITH_TBB=OFF -DWITH_GDAL=OFF 
-DWITH_XINE=OFF -DBUILD_EXAMPLES=OFF -DBUILD_ZLIB=OFF -DBUILD_TESTS=OFF 
-DCMAKE_LIBRARY_PATH="/path/to/opencv/library"

To run the program, create a run configuration of the main method in the main.cpp file.

The run configuration takes in three arguments:
- Argument 1: the path of the audio file (as a .mp3 or .wav file).
- Argument 2: the path to the video file of Bad Apple (as a .mp4 file)
- Argument 3: the path to the directory where the frames will be written to.

Alternatively, you can run an executable file from your computer's respective Terminal.
Navigate to the path of the executable file under the cmake-build-debug folder, and type BadAppleConsoleCPP.exe, 
followed by the two command arguments to run.

