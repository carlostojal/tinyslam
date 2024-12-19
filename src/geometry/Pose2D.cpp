#include <tinyslam/geometry/Pose2D.hpp>

using namespace tinyslam::geometry;

Pose2D::Pose2D(float x, float y, float theta) {

    this->x = x;
    this->y = y;
    this->theta = theta;
}

float Pose2D::getTheta() const {

    return self->theta;
}
