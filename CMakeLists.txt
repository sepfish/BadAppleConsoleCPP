cmake_minimum_required(VERSION 3.23)
project(BadAppleConsoleCPP)

set(CMAKE_CXX_STANDARD 23) # <<-- If you wanna change the language standard
set(ENV{OPENCV_DIR} "C:\\tools\\opencv\\build") # <<-- And yes do not forget to change the path !
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(${CMAKE_PROJECT_NAME} main.cpp
        lib/src/AudioPlayer.cpp
        lib/include/AudioPlayer.h
        lib/include/VideoProcessor.h
        lib/src/VideoProcessor.cpp
)

set(OpenCV_LIBS opencv_core opencv_imgproc opencv_highgui opencv_imgcodecs)

target_link_libraries(BadAppleConsoleCPP ${OpenCV_LIBS})