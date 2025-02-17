
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
#include <unordered_map>

#include <tinyslam/common/Landmark.hpp>

namespace tinyslam::common {

	/**
	 * @class LandmarkManager
	 *
	 * @brief Manages a landmark collection.
	 */
	class LandmarkManager {

		private:
			/// Last registered landmark identifier.
			unsigned int last_id = 0;

			/// Map of landmarks indexed by its identifier.
			std::unordered_map<unsigned int, std::shared_ptr<Landmark>> landmarks_by_id;

		public:
			/**
			 * @brief Landmark manager constructor.
			 */
			LandmarkManager();

			/**
			 * @brief Retrieve a landmark by ID.
			 *
			 * @param id Identifier to retrieve.
			 *
			 * @return Reference to landmark instance pointer.
			 */
			std::shared_ptr<Landmark>& getByID(unsigned int id);

			/**
			 * @brief Register a new landmark. Its identifier is set.
			 *
			 * @param new_landmark Reference to the new landmark instance pointer.
			 */
			void insert(std::shared_ptr<Landmark> new_landmark);
	};
}
