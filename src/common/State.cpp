
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

#include <tinyslam/common/State.hpp>

using namespace tinyslam::common;

template <typename RobotStateT, typename MapStateT>
State<RobotStateT,MapStateT>::State(RobotStateT robot_state, MapStateT map_state) {
	this->robot_state = robot_state;
	this->map_state = map_state;
}

template <typename RobotStateT, typename MapStateT>
RobotStateT State<RobotStateT,MapStateT>::getRobotState() const {
	return this->robot_state;
}

template <typename RobotStateT, typename MapStateT>
MapStateT State<RobotStateT,MapStateT>::getMapState() const {
	return this->map_state;
}

template <typename RobotStateT, typename MapStateT>
void State<RobotStateT,MapStateT>::setRobotState(RobotStateT robot_state) {
	this->robot_state = robot_state;
}

template <typename RobotStateT, typename MapStateT>
void State<RobotStateT,MapStateT>::setMapState(MapStateT map_state) {
	this->map_state = map_state;
}

