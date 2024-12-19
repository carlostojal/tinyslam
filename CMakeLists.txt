cmake_minimum_required(VERSION 3.20)

project(tinyslam)

include_directories(include)
add_executable(tinyslam src/main.cpp src/geometry/Pose2D.cpp src/geometry/Position2D.cpp src/graphslam/Node.cpp src/graphslam/Landmark.cpp src/graphslam/LandmarkManager.cpp)
