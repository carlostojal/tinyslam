#include <memory>
#include <tinyslam/graphslam/LandmarkManager.hpp>
#include <unordered_map>

using namespace tinyslam::graphslam;

LandmarkManager::LandmarkManager() {
    this->last_used_id = 0;
    this->landmark_map = std::unordered_map<unsigned long, std::shared_ptr<Landmark>>();
}

unsigned long LandmarkManager::getNextID() const {
    return this->last_used_id+1;
}

std::shared_ptr<Landmark> LandmarkManager::registerLandmark(Landmark& new_landmark) {
    new_landmark.setID(++(this->last_used_id));
    std::shared_ptr<Landmark> landmark_ptr = std::make_shared<Landmark>(new_landmark);
    this->landmark_map[new_landmark.getID()] = landmark_ptr;
    return landmark_ptr;
}

std::shared_ptr<Landmark> LandmarkManager::getByID(unsigned long id) const {
    return this->landmark_map.at(id);
}
