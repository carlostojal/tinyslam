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

#include <memory>

#include <tinyslam/common/State.hpp>

namespace tinyslam::pipeline {

	/**
	 * @class PipelineStage
	 *
	 * @brief Represents a pipeline stage / unit of execution.
	 */
	template <typename RobotStateT, typename MapStateT>
	class PipelineStage {

		private:
			/// Pointer to state. State ownership is passed from stage to stage.
			std::unique_ptr<common::State<RobotStateT,MapStateT>> state;

			/// Pointer to next pipeline stage.
			std::unique_ptr<PipelineStage> next;

		public:
			/**
			 * @brief Pipeline stage constructor.
			 */
			PipelineStage();

			/**
			 * @brief Main stage logic. Receives a state, modifies it and returns.
			 *
			 * @param state Input state.
			 *
			 * @return Output state.
			 */
			virtual std::unique_ptr<common::State<RobotStateT,MapStateT>> execute(std::unique_ptr<common::State<RobotStateT,MapStateT>> state);

			/**
			 * @brief Next stage getter.
			 *
			 * @return Reference to the next stage.
			 */
			std::unique_ptr<PipelineStage<RobotStateT,MapStateT>>& getNext() const;

			/**
			 * @brief Next stage setter.
			 *
			 * @param next Pointer to the next stage.
			 */
			void setNext(std::unique_ptr<PipelineStage> next);

	};
}
