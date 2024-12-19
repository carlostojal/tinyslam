#include <memory>
#include <tinyslam/graphslam/Measurement.hpp>

using namespace tinyslam::graphslam;

Measurement::Measurement(std::shared_ptr<Landmark> landmark) {
    this->landmark = landmark;
}

std::shared_ptr<Landmark> Measurement::getLandmark() const {
    return this->landmark;
}
