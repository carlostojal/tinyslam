//
// Created by carlostojal on 6/17/25.
//

#ifndef POINTMATCH_H
#define POINTMATCH_H

#include <memory>
#include <utility>

#include "Point2D.h"

namespace tinyslam::data_assoc {
    /**
     * @class PointMatch
     * @brief Represents a match between two points.
     */
    class PointMatch {
    public:
        /// Constructor.
        PointMatch();

        /**
         * @brief Constructor from match.
         *
         * @param first Reference point.
         * @param second Match point.
         */
        PointMatch(const types::Point2D &first, std::shared_ptr<types::Point2D> second) noexcept;

        /**
         * @brief Get the reference point.
         *
         * @return Constant reference to the first point.
         */
        const types::Point2D &getPoint() const noexcept;

        /**
         * @brief Get the matching point.
         *
         * @return Pointer to the matching point.
         */
        const std::shared_ptr<types::Point2D> getMatch() const noexcept;

        /**
         * @brief Set the matching point.
         *
         * @param point Matching point to set.
         */
        void setMatch(std::shared_ptr<types::Point2D> point) noexcept;

    private:
        /// Pair for corresponding a point to a match.
        std::pair<const types::Point2D &, std::shared_ptr<types::Point2D>> match_;
    };
}


#endif //POINTMATCH_H
