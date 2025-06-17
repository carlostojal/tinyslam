//
// Created by carlostojal on 6/17/25.
//

#ifndef POSE2D_H
#define POSE2D_H

#include <Eigen/Dense>


namespace tinyslam::types {
    /**
     * @class Pose2D
     * @brief Represents a pose in 2-dimensional space, composed by its coordinates and heading.
     */
    class Pose2D {
    public:
        /// Constructor.
        Pose2D() noexcept;

        /**
         * @brief Constructor from coordinates. Zero heading is assumed.
         *
         * @param x "x" coordinate value.
         * @param y "y" coordinate value.
         */
        Pose2D(float x, float y) noexcept;

        /**
         * @brief Constructor from coordinates and heading.
         *
         * @param x "x" coordinate value.
         * @param y "y" coordinate value.
         * @param theta Heading value.
         */
        Pose2D(float x, float y, float theta) noexcept;

    private:
        /// Vector values.
        Eigen::Vector3f value_;
    };
} // types
// tinyslam

#endif //POSE2D_H
