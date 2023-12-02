cmake_minimum_required(VERSION 3.26)
project(BadAppleConsoleCPP)

set(CMAKE_CXX_STANDARD 17)



add_executable(BadAppleConsoleCPP main.cpp)
target_include_directories(${CMAKE_PROJECT_NAME} PRIVATE lib/audio)

