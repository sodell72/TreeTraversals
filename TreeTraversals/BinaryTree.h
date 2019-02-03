#pragma once
#include "Node.h"
#include <iostream>
#include <queue>

class BinaryTree {


private:
	
	Node* root;
	void addTraverse(int, Node *, bool added = false);
	void inOrderTraversalHelper(Node* root);
	void postOrderTraversalHelper(Node* root);
	void preOrderTraversalHelper(Node* root);
	Node* breadthFirstSearchHelper(Node* root, int);


public:

	BinaryTree(Node*);
	
	void add(int);

	
	void inOrderTraversal();
	void postOrderTraversal();
	void preOrderTraversal();
	Node* breadthFirstSearch(int);


};