#pragma once

#include <memory>
#include <vector>
#include <stdexcept>

namespace tinyslam::dsa {

	/**
	 * @class Node
	 * @brief Represents a tree node with N children.
	 */
	template <typename DataT>
	class Node {
		private:
			/// Vector of children.
			std::vector<std::unique_ptr<Node>> children;

			/// Node content.
			DataT data;

			/// Allowed number of children.
			unsigned char n_children;

		public:
			/**
			 * @brief Node constructor.
			 *
			 * @param n_children Number of children.
			 */
			Node(unsigned char n_children);

			/**
			 * @brief Children getter.
			 *
			 * @return Children vector.
			 */
			std::vector<std::unique_ptr<Node>> getChildren() const;

			/**
			 * @brief Get child at index.
			 *
			 * @return Reference to children instance.
			 */
			std::unique_ptr<Node>& getChild(unsigned char index) const;

			/**
			 * @brief Data getter.
			 * 
			 * @return Mode data.
			 */
			DataT getData() const;

			/**
			 * @brief Add a child node.
			 *
			 * @param child Child instance pointer.
			 */
			void addChild(std::unique_ptr<Node> child);

			/**
			 * @brief Remove a child at index.
			 *
			 * @param index Index to remove the child from.
			 */
			void removeChild(unsigned char index);

			/**
			 * @brief Set a child by index.
			 * 
			 * @param index Index to set.
			 * @param child Child instance pointer.
			 */
			void setChild(unsigned char index, std::unique_ptr<Node> child);

			/**
			 * @brief Clear a node. Removes and frees all children.
			 */
			void clear();
	};
}