//
// Created by carlostojal on 6/17/25.
//

#include "PointMatch.h"

#include <stdexcept>

using namespace tinyslam::data_assoc;

PointMatch::PointMatch(const types::Point2D &first) noexcept : match_ {first, nullptr} {

}

const tinyslam::types::Point2D &PointMatch::getPoint() const noexcept{
    return this->match_.first;
}

bool PointMatch::getMatch(types::Point2D &out) const noexcept {
    bool is_set = false;

    if (this->match_.second == nullptr) {
        is_set = false;
    } else {
        is_set = true;
        out = *(this->match_.second);
    }

    return is_set;
}

void PointMatch::setMatch(const types::Point2D &point) noexcept {
    this->match_.second = &point;
}
