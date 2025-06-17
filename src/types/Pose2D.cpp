//
// Created by carlostojal on 6/17/25.
//

#include "Pose2D.h"

using namespace tinyslam::types;

Pose2D::Pose2D() noexcept {
    Pose2D(0.0f, 0.0f);
}

Pose2D::Pose2D(float x, float y) noexcept {
    Pose2D(x, y, 0.0f);
}

Pose2D::Pose2D(float x, float y, float theta) noexcept {
    this->value_ = Eigen::Vector3f(x, y, theta);
}
