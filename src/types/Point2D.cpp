//
// Created by carlostojal on 6/17/25.
//

#include "Point2D.h"

using namespace tinyslam::types;

Point2D::Point2D(const Point2D &other) noexcept {
    this->value_ = other.asVector();
}

Point2D::Point2D(float x, float y) noexcept {
    this->value_ = Eigen::Vector2f(x, y);
}

const Eigen::Vector2f &Point2D::asVector() const noexcept {
    return this->value_;
}
