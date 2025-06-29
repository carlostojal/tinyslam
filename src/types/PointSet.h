//
// Created by carlostojal on 6/28/25.
//

#ifndef POINTSET_H
#define POINTSET_H

#include <memory>
#include <set>

#include "Point2D.h"

namespace tinyslam::types {
    /**
     * @class PointSet
     * @brief Set of points of a given type.
     *
     * @tparam PointT Type of point/pose.
     */
    template<class PointT>
    class PointSet {
    public:
        /// Constructor.
        PointSet() noexcept;

        /**
         * @brief Add a point to the set.
         * @param point Point to add.
         */
        void addPoint(std::unique_ptr<PointT> point) noexcept;

        /**
         * @brief Clear all points in the set.
         */
        void clear() noexcept;

        /**
         * @brief Get a reference to the point set.
         * @return Constant reference to the point set.
         */
        const std::set<std::unique_ptr<PointT> > &getPoints() const noexcept;

    private:
        /// Set of points.
        std::set<std::unique_ptr<PointT> > points_;
    };
}

#endif //POINTSET_H
