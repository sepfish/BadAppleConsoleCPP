cmake_minimum_required(VERSION 3.9)
project(BadAppleConsoleCPP)

set(CMAKE_CXX_STANDARD 11)



include_directories(${OpenCV_INCLUDE_DIRS})
set(CMAKE_CXX_STANDARD 11)
#set(ENV{OPENCV_DIR})

#set(OPENCV_DIR "/Users/raymondtsai/Desktop/OpenCV/opencv")

message(STATUS "OpenCV_DIR set")

#find_library(OpenCV)
find_package(OpenCV REQUIRED)


# If the package has been found, several variables will
# be set, you can find the full list with descriptions
# in the OpenCVConfig.cmake file.
# Print some message showing some of them
message(STATUS "OpenCV library status:")
message(STATUS "    config: ${OpenCV_DIR}")
message(STATUS "    version: ${OpenCV_VERSION}")
message(STATUS "    libraries: ${OpenCV_LIBS}")
message(STATUS "    include path: ${OpenCV_INCLUDE_DIRS}")

add_executable(BadAppleConsoleCPP main.cpp)

target_link_libraries(BadAppleConsoleCPP ${OpenCV_LIBS})