#cmake_minimum_required(VERSION 3.9)
#project(BadAppleConsoleCPP)

#set(CMAKE_CXX_STANDARD 11)
#set(ENV)
#set(OpenCV_DIR "C:\\Users\\trsky\\Downloads\\opencv\\build\\x64\\vc16\\lib")

#include_directories(${OpenCV_INCLUDE_DIRS})
#set(CMAKE_CXX_STANDARD 11)
#set(ENV{OPENCV_DIR})

#message(STATUS "OpenCV_DIR set")

#find_library(OpenCV)
#find_package(OpenCV REQUIRED)

# If the package has been found, several variables will
# be set, you can find the full list with descriptions
# in the OpenCVConfig.cmake file.
# Print some message showing some of them
#message(STATUS "OpenCV library status:")
#message(STATUS "    config: ${OpenCV_DIR}")
#message(STATUS "    version: ${OpenCV_VERSION}")
#message(STATUS "    libraries: ${OpenCV_LIBS}")
#message(STATUS "    include path: ${OpenCV_INCLUDE_DIRS}")


#target_link_libraries(${CMAKE_PROJECT_NAME} ${OpenCV_LIBS})

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
        )

set(OpenCV_LIBS opencv_core opencv_imgproc opencv_highgui opencv_imgcodecs)

target_link_libraries(BadAppleConsoleCPP ${OpenCV_LIBS})