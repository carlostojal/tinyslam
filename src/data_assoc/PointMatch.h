//
// Created by carlostojal on 6/17/25.
//

#ifndef POINTMATCH_H
#define POINTMATCH_H

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
         * @param first First point.
         * @param second Second point.
         */
        PointMatch(const types::Point2D &point) noexcept;

        /**
         * @brief Get the reference point.
         *
         * @return Constant reference to the first point.
         */
        const types::Point2D &getPoint() const noexcept;

        /**
         * @brief Get the matching point.
         *
         * @param out Matching point.
         * @return "True" if the match was set, "false" otherwise.
         */
        bool getMatch(types::Point2D& out) const noexcept;

        /**
         * @brief Set the matching point.
         *
         * @param point
         */
        void setMatch(const types::Point2D &point) noexcept;

    private:
        std::pair<const types::Point2D &, const types::Point2D *> match_;
    };
}


#endif //POINTMATCH_H
