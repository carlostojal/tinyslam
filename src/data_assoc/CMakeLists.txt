cmake_minimum_required(VERSION 3.31)
project(tinyslam_data_assoc)

set(CMAKE_CXX_STANDARD 17)

add_library(tinyslam_data_assoc STATIC PointMatch.cpp)
target_link_libraries(tinyslam_data_assoc PRIVATE tinyslam_types)
