#include "BinaryTree.h"


BinaryTree::BinaryTree(Node* root) {
	this->root = root;
}

void BinaryTree::add(int data) {
	if (this->root == nullptr) {
		this->root = new Node(data);
		return;
	}

	this->addTraverse(data, this->root);

	//Node* currentNode = this->root;
	//while (currentNode != nullptr) {
	//	if (node->getData() == currentNode->getData()) {
	//		
	//	}
	//	if (node->getData() > currentNode->getData()) {

	//	}
	//	if (node->getData() < currentNode->getData()) {

	//	}
	//}

}

void BinaryTree::addTraverse(int data, Node* currentRoot, bool added) {

	if (added == false) {
		if (currentRoot == nullptr) {
			return;
		}

		if (data <= currentRoot->getData()) {
			if (currentRoot->left != nullptr) {
				addTraverse(data, currentRoot->left);
			} else {
				currentRoot->left = new Node(data);
				return;
			}
		}

		if (data > currentRoot->getData()) {
			if (currentRoot->right != nullptr) {
				addTraverse(data, currentRoot->right);
			} else {
				currentRoot->right = new Node(data);
				return;
			}
		}
	}

}


void BinaryTree::inOrderTraversal() {
	this->inOrderTraversalHelper(this->root);
}

void BinaryTree::postOrderTraversal() {
	this->postOrderTraversalHelper(this->root);
}

void BinaryTree::preOrderTraversal() {
	this->preOrderTraversalHelper(this->root);
}

void BinaryTree::inOrderTraversalHelper(Node* root) {
	if (root == nullptr) return;
	inOrderTraversalHelper(root->left);
	std::cout << root->getData() << std::endl;
	inOrderTraversalHelper(root->right);
}

void BinaryTree::postOrderTraversalHelper(Node * root) {
	if (root == nullptr) return;
	postOrderTraversalHelper(root->left);
	postOrderTraversalHelper(root->right);
	std::cout << root->getData() << std::endl;
}

void BinaryTree::preOrderTraversalHelper(Node * root) {
	if (root == nullptr) return;
	std::cout << root->getData() << std::endl;
	preOrderTraversalHelper(root->left);
	preOrderTraversalHelper(root->right);
}


Node* BinaryTree::breadthFirstSearch(int value) {
	return this->breadthFirstSearchHelper(this->root, value);
}

Node* BinaryTree::breadthFirstSearchHelper(Node* root, int value) {
	if (root == nullptr) return nullptr;
	std::queue<Node*> searchQueue;
	searchQueue.emplace(root);
	while (!searchQueue.empty()) {
		Node* currentNode = searchQueue.front();
		if (currentNode->getData() == value) return currentNode;
		searchQueue.pop();
		if (currentNode->getLeft() != nullptr) {
			searchQueue.push(currentNode->getLeft());
		}
		if (currentNode->getRight() != nullptr) {
			searchQueue.push(currentNode->getRight());
		}
	}
	return nullptr;
}