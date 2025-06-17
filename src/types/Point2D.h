//
// Created by carlostojal on 6/17/25.
//

#ifndef POINT2D_H
#define POINT2D_H
#include <Eigen/src/Core/Matrix.h>


namespace tinyslam::types {
    /**
     * @class Point2D
     * @brief Represents a point in 2-dimensional space.
     */
    class Point2D {
    public:
        /// Constructor.
        Point2D() = default;

        /// Copy constructor.
        Point2D(const Point2D &other) noexcept;

        /**
         * @brief Construct from coordinates.
         *
         * @param x "x" axis value.
         * @param y "y" axis value.
         */
        Point2D(float x, float y) noexcept;

        /**
         * @brief Vector constant getter.
         *
         * @return Constant reference to vector.
         */
        [[nodiscard]] const Eigen::Vector2f &asVector() const;

    private:
        /// Vector values.
        Eigen::Vector2f value_;
    };
} // types
// tinyslam

#endif //POINT2D_H
