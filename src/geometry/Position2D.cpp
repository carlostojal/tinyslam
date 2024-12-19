#include <cmath>
#include <tinyslam/geometry/Position2D.hpp>

using namespace tinyslam::geometry;

Position2D::Position2D(float x, float y) {

    this->x = x;
    this->y = y;
}

float Position2D::getX() const {

    return this->x;
}

float Position2D::getY() const {

    return this->y;
}

float Position2D::getEuclideanDist(Position2D other) const {

    return std::sqrtf(std::powf(this->x - other.x, 2) + std::powf(this->y - other.y, 2));
}
