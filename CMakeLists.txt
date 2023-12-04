cmake_minimum_required(VERSION 3.9)
project(BadAppleConsoleCPP)

set(CMAKE_CXX_STANDARD 11)

include(CheckCCompilerFlag)

set(CMAKE_SYSTEM_PROCESSOR arm64)

message(${CMAKE_SYSTEM_PROCESSOR})

#set(CMAKE_REQUIRED_LINK_OPTIONS "-arch;x86_64")
check_c_compiler_flag("-arch x86_64" x86_64Supported)
message("x86_64Supported=${x86_64Supported}")

set(CMAKE_REQUIRED_LINK_OPTIONS "-arch;arm64")
check_c_compiler_flag("-arch arm64" arm64Supported)
message("arm64Supported=${arm64Supported}")



include_directories(${OpenCV_INCLUDE_DIRS})
#set(ENV{OPENCV_DIR})


#set(OpenCV_DIR "C:\\Users\\trsky\\Downloads\\opencv\\build\\x64\\vc16\\lib")

message(STATUS "OpenCV_DIR set")

set(CMAKE_PREFIX_PATH "/opt/homebrew" ${CMAKE_PREFIX_PATH})

message(${CMAKE_PREFIX_PATH})


set(CMAKE_MODULE_PATH "/opt/homebrew")

message("CMAKE_MODULE_PATH: ${CMAKE_MODULE_PATH}")


#find_library(OpenCV)
find_package(OpenCV REQUIRED) # PATHS "/Users/raymondtsai/Desktop/OpenCV/build/" NO_DEFAULT_PATH)

#find_package(PNG 1.6.40 REQUIRED)
#include_directories(${PNG_INCLUDE_DIRS})




# If the package has been found, several variables will
# be set, you can find the full list with descriptions
# in the OpenCVConfig.cmake file.
# Print some message showing some of them
message(STATUS "OpenCV library status:")
message(STATUS "    config: ${OpenCV_DIR}")
message(STATUS "    version: ${OpenCV_VERSION}")
message(STATUS "    libraries: ${OpenCV_LIBS}")
message(STATUS "    include path: ${OpenCV_INCLUDE_DIRS}")

add_executable(BadAppleConsoleCPP
        main.cpp
        lib/video/VideoProcessor.h
        lib/video/VideoProcessor.cpp)
target_include_directories(BadAppleConsoleCPP PRIVATE "opt/homebrew/lib")
target_link_libraries(BadAppleConsoleCPP ${OpenCV_LIBS})

