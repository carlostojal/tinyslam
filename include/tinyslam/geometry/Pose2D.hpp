#pragma once

/*
MIT License

Copyright (c) 2025 Carlos Cabaço Tojal

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#include <tinyslam/geometry/Point2D.hpp>

namespace tinyslam::geometry {

	/**
	 * @class Pose2D
	 *
	 * @brief Represents a pose in 2D space.
	 */
	class Pose2D : public Point2D {

		private:
			/// Heading/yaw angle value (radians).
			float theta;

		public:
			/**
			 * @brief Pose constructor. Receives coordinates and heading.
			 *
			 * @param x "x" coordinate value.
			 * @param y "y" coordinate value.
			 * @param theta Heading/yaw angle value.
			 */
			Point2D(float x, float y, float theta);

			/**
			 * @brief "theta" getter.
			 *
			 * @return "theta" value.
			 */
			float getTheta() const;

			/**
			 * @brief "theta" setter.
			 *
			 * @param theta New "theta" value.
			 */
			void setTheta(float theta);
	};
}











