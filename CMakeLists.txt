cmake_minimum_required(VERSION 3.31)
project(tinyslam)

set(CMAKE_CXX_STANDARD 17)

option(WITH_TESTS "Build unit tests" OFF)

add_subdirectory(src)

add_executable(tinyslam_dummy hello_world.cpp)

if(WITH_TESTS)
    add_subdirectory(tests)
endif()
