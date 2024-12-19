#include <tinyslam/graphslam/Landmark.hpp>

using namespace tinyslam::graphslam;

Landmark::Landmark(const geometry::Position2D& position) : position(position) {

}

unsigned long Landmark::getID() const {
    return this->id;
}

tinyslam::geometry::Position2D Landmark::getPosition() const {
    return this->position;
}

void Landmark::setID(unsigned long id) {
    this->id = id;
}
