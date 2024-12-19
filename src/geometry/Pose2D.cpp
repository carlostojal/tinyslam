#include <tinyslam/geometry/Pose2D.hpp>

using namespace tinyslam::geometry;

Pose2D::Pose2D(float x, float y, float theta) : Position2D(x, y) {

    this->x = x;
    this->y = y;
    this->theta = theta;
}

float Pose2D::getTheta() const {

    return this->theta;
}
