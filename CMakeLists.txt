cmake_minimum_required(VERSION 3.20)

project(tinyslam VERSION 1.0 LANGUAGES CXX)

find_package(Eigen3 REQUIRED)

add_subdirectory(src)

