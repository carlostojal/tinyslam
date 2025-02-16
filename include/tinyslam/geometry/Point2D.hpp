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

namespace tinyslam::geometry {

	/**
	 * @class Point2D
	 *
	 * @brief Represents a point in 2D space.
	 */
	class Point2D {

		private:
			/// "x" coordinate value (meters).
			float x;

			/// "y" coordinate value (meters).
			float y;

			/// Heading/yaw angle value (radians).
			float theta;

		public:
			/**
			 * @brief Point constructor. Receives coordinates and heading.
			 *
			 * @param x "x" coordinate value.
			 * @param y "y" coordinate value.
			 * @param theta Heading/yaw angle value.
			 */
			Point2D(float x, float y, float theta);

			/**
			 * @brief "x" getter.
			 *
			 * @return "x" value.
			 */
			float getX() const;

			/**
			 * @brief "y" getter.
			 *
			 * @return "y" value.
			 */
			float getY() const;

			/**
			 * @brief "theta" getter.
			 *
			 * @return "theta" value.
			 */
			float getTheta() const;

			/**
			 * @brief "x" setter.
			 *
			 * @param x New "x" value.
			 */
			void setX(float x);

			/**
			 * @brief "y" setter.
			 *
			 * @param y New "y" value.
			 */
			void setY(float y);

			/**
			 * @brief "theta" setter.
			 *
			 * @param theta New "theta" value.
			 */
			void setTheta(float theta);
	}
};











