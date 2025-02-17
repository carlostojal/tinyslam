
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

#include <tinyslam/pipeline/Pipeline.hpp>

using namespace tinyslam::pipeline;

template <typename RobotStateT, typename MapStateT>
Pipeline<RobotStateT,MapStateT>::Pipeline(std::unique_ptr<PipelineStage<RobotStateT,MapStateT>> first) {
	this->first = first;
}

template <typename RobotStateT, typename MapStateT>
void Pipeline<RobotStateT,MapStateT>::addStage(std::unique_ptr<PipelineStage<RobotStateT,MapStateT>> next) {

	if(this->first != nullptr) {
		// find the last stage
		std::unique_ptr<PipelineStage<RobotStateT,MapStateT>>& iter = nullptr;
		for(iter = std::ref(this->first); iter != nullptr; iter = iter->getNext());

		// set the next
		iter->setNext(std::move(next));

	} else {
		;
	}
}

template <typename RobotStateT, typename MapStateT>
std::unique_ptr<tinyslam::common::State<RobotStateT,MapStateT>> Pipeline<RobotStateT,MapStateT>::execute(std::unique_ptr<common::State<RobotStateT,MapStateT>> init_state) {

	std::unique_ptr<common::State<RobotStateT,MapStateT>> curr_state = init_state;

	if(this->first != nullptr) {
		// iterate the stages
		std::unique_ptr<PipelineStage<RobotStateT,MapStateT>>& iter = nullptr;
		for(iter = std::ref(this->first); iter != nullptr; iter = iter->getNext()) {
			// execute next stage
			curr_state = iter->execute(std::move(curr_state));
		}

	} else {
		;
	}

		
}

