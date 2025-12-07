cmake_minimum_required(VERSION 3.26)
project(Cmake VERSION 1.0 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Cmake src/main.cpp src/Student.cpp)

target_include_directories(Cmake PRIVATE include)

enable_testing()
