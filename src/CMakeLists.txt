cmake_minimum_required(VERSION 3.31)
project(tinyslam_core)

set(CMAKE_CXX_STANDARD 17)

find_package(Eigen3 REQUIRED)

add_subdirectory(data_assoc)
add_subdirectory(filtering)
