#include "Node.h"

Node::Node(int data) {
	this->left = nullptr;
	this->right = nullptr;
	this->data = data;
}

int Node::getData() {
	return this->data;
}

Node* Node::getLeft() {
	return this->left;
}
Node* Node::getRight() {
	return this->right;
}