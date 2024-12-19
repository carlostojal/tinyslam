#pragma once

#include "Position2D.hpp"
#include <tinyslam/geometry/Position2D.hpp>

namespace tinyslam::geometry {

    /*
	 * \brief Robot pose in 2-dimensional space (2D coordinates and heading).
	 */
    class Pose2D : Position2D {

        private:
            /* \brief Heading/yaw angle in radians. */
            float theta;

        public:
            /* \brief Pose2D class constructor. */
            Pose2D(float x, float y, float theta);

            /* \brief "theta" getter. */
            float getTheta() const;

    };
}
