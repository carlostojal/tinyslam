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

namespace tinyslam::common {

	/**
	 * @class State
	 *
	 * @brief Represents the robot and map state at a given time step.
	 */
	template <typename RobotStateT, typename MapStateT>
	class State {

		private:
			/// Robot state.
			RobotStateT robot_state;

			/// Map state.
			MapStateT map_state;

		public:
			
			/**
			 * @brief State constructor.
			 *
			 * @param robot_state Robot state.
			 * @param map_state Map state.
			 */
			State(RobotStateT robot_state, MapStateT map_state);

			/**
			 * @brief Robot state getter.
			 *
			 * @return Robot state.
			 */
			RobotStateT getRobotState() const;

			/**
			 * @brief Map state getter.
			 *
			 * @return Map state.
			 */
			MapStateT getMapState() const;

			/**
			 * @brief Robot state setter.
			 *
			 * @param robot_state Robot state to set.
			 */
			void setRobotState(RobotStateT robot_state);
			
			/**
			 * @brief Map state setter.
			 *
			 * @param map_state Map state to set.
			 */
			void setMapState(MapStateT map_state);

	};
}
