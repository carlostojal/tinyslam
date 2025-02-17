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

#include <tinyslam/pipeline/PipelineStage.hpp>
#include <tinyslam/common/State.hpp>

namespace tinyslam::pipeline {

	/**
	 * @class Pipeline
	 *
	 * @brief Represents a SLAM pipeline.
	 */
	template <typename RobotStateT, typename MapStateT>
	class Pipeline {

		private:
			/// Pointer to the first pipeline stage.
			std::unique_ptr<PipelineStage<RobotStateT,MapStateT>> first;

		public:
			/**
			 * @brief Construct a pipeline.
			 *
			 * @param first Pointer to the first stage.
			 */
			Pipeline(std::unique_ptr<PipelineStage<RobotStateT,MapStateT>> first);

			/**
			 * @brief Append a stage to the pipeline.
			 *
			 * @param next New stage to append.
			 */
			void addStage(std::unique_ptr<PipelineStage<RobotStateT,MapStateT>> next);

			/**
			 * @brief Execute the pipeline.
			 *
			 * @param init_state Initial state.
			 *
			 * @return Final state.
			 */
			std::unique_ptr<common::State<RobotStateT,MapStateT>> execute(std::unique_ptr<common::State<RobotStateT,MapStateT>> init_state);

	};
}


