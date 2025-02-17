
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
#include <set>
#include <unordered_map>

#include <tinyslam/common/LandmarkManager.hpp>
#include <tinyslam/common/Measurement.hpp>

namespace tinyslam::data_association {

	/**
	 * @class DataAssociation
	 *
	 * @brief Abstract data association problem.
	 */
	class DataAssociation {

		private:
			/// Reference to landmark manager instance pointer.
			std::shared_ptr<common::LandmarkManager> landmarks = nullptr;

		public:
			/**
			 * @brief Data association constructor.
			 *
			 * @param landmarks Reference to landmark map instance pointer.
			 */
			DataAssociation(std::shared_ptr<common::LandmarkManager> landmarks);

			/**
			 * @brief Data association destructor.
			 */
			~DataAssociation();

			/**
			 * @brief Data association logic.
			 *
			 * @param measurements Set of measurements made.
			 *
			 * @return Map of measurement identifiers to landmark identifiers.
			 */
			virtual std::unordered_map<unsigned int,unsigned int> associate(std::set<common::Measurement> measurements);
			
	};
}
