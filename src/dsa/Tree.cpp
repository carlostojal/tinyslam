#include <tinyslam/dsa/Tree.hpp>

using namespace tinyslam::dsa;

template <typename DataT>
Node<DataT>::Node(unsigned char n_children) {
	if(n_children > 0) {

		this->n_children = n_children;

		// reallocate the vector
		this->children.reserve(n_children);
	} else {
		throw std::invalid_argument("Number of children must be more than 0.");
	}
}

template <typename DataT>
std::vector<std::unique_ptr<Node<DataT>>> Node<DataT>::getChildren() const {
	return this->children;
}

template <typename DataT>
std::unique_ptr<Node<DataT>>& Node<DataT>::getChild(unsigned char index) const {
	return std::ref(this->children[index]);
}

template <typename DataT>
DataT Node<DataT>::getData() const {
	return this->data;
}

template <typename DataT>
void Node<DataT>::addChild(std::unique_ptr<Node> child) {
	this->children.push_back(child);
}

template <typename DataT>
void Node<DataT>::removeChild(unsigned char index) {
	this->children.erase(index);
}

template <typename DataT>
void Node<DataT>::setChild(unsigned char index, std::unique_ptr<Node> child) {
	this->children[index] = child;
}

template <typename DataT>
void Node<DataT>::clear() {
	this->children.clear();
}
