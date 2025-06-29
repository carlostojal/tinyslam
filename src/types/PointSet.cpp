//
// Created by carlostojal on 6/28/25.
//

#include "PointSet.h"

using namespace tinyslam::types;

template class PointSet<Point2D>;

template<class PointT>
PointSet<PointT>::PointSet() noexcept {
}

template<class PointT>
void PointSet<PointT>::addPoint(std::unique_ptr<PointT> point) noexcept {
    this->points_.insert(std::move(point));
}

template<class PointT>
void PointSet<PointT>::clear() noexcept {
    this->points_.clear();
}

template<class PointT>
const std::set<std::unique_ptr<PointT> > &PointSet<PointT>::getPoints() const noexcept {
    return this->points_;
}
