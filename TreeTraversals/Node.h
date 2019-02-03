#pragma once
#include <vector>

class Node {


private:
	int data;

public:

	Node* left;
	Node* right;
	Node(int);

	int getData();
	Node* getLeft();
	Node* getRight();

};