//
// Created by carlostojal on 6/17/25.
//

#include "PointMatch.h"

#include <stdexcept>

using namespace tinyslam;
using namespace tinyslam::data_assoc;

PointMatch::PointMatch(const types::Point2D &first, const std::shared_ptr<types::Point2D> second) noexcept :
match_ {first, second} {

}

const types::Point2D &PointMatch::getPoint() const noexcept{
    return this->match_.first;
}

const std::shared_ptr<types::Point2D> PointMatch::getMatch() const noexcept {
    return match_.second;
}

void PointMatch::setMatch(std::shared_ptr<types::Point2D> point) noexcept {
    this->match_.second = point;
}
