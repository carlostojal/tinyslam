cmake_minimum_required(VERSION 3.31)
project(tinyslam_types)

set(CMAKE_CXX_STANDARD 17)

find_package(Eigen3 REQUIRED)

add_library(tinyslam_types STATIC Point2D.cpp Pose2D.cpp)
target_include_directories(tinyslam_types PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(tinyslam_types PUBLIC Eigen3::Eigen)
