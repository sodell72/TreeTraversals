#include <iostream>
#include "Node.h"
#include "BinaryTree.h"

using namespace std;


int main(int argc, char* argv[]) {

	Node head(50);
	BinaryTree myTree(&head);
	cout << "testing only head" << endl;
	myTree.inOrderTraversal();
	cout << endl;

	myTree.add(1);
	myTree.add(2);
	myTree.add(77);
	myTree.add(200);
	myTree.add(77);
	myTree.add(50);
	myTree.add(1);
	myTree.add(2);
	myTree.add(2);
	myTree.add(-17);

	cout << "generic random tree inOrderTraversal" << endl;
	myTree.inOrderTraversal();
	cout << endl;
	cout << "generic random tree preOrderTraversal" << endl;
	myTree.preOrderTraversal();
	cout << endl;
	cout << "generic random tree postOrderTraversal" << endl;
	myTree.postOrderTraversal();
	cout << endl;

	Node head2(50);
	Node head3(50);
	Node head4(50);
	BinaryTree leftUnbalancedTree(&head2);
	BinaryTree rightUnbalancedTree(&head3);
	BinaryTree symmetricalTree(&head4);

	leftUnbalancedTree.add(49);
	leftUnbalancedTree.add(48);
	leftUnbalancedTree.add(47);
	leftUnbalancedTree.add(46);
	leftUnbalancedTree.add(45);
	leftUnbalancedTree.add(44);
	leftUnbalancedTree.add(43);
	leftUnbalancedTree.add(42);
	leftUnbalancedTree.add(41);
	cout << "leftUnbalancedTree inOrder: " << endl;
	leftUnbalancedTree.inOrderTraversal();
	cout << endl;
	cout << "leftUnbalancedTree preOrder: " << endl;
	leftUnbalancedTree.preOrderTraversal();
	cout << endl;
	cout << "leftUnbalancedTree postOrder: " << endl;
	leftUnbalancedTree.postOrderTraversal();
	cout << endl;

	rightUnbalancedTree.add(51);
	rightUnbalancedTree.add(52);
	rightUnbalancedTree.add(53);
	rightUnbalancedTree.add(54);
	rightUnbalancedTree.add(55);
	rightUnbalancedTree.add(56);
	rightUnbalancedTree.add(57);
	rightUnbalancedTree.add(58);
	rightUnbalancedTree.add(59);

	cout << "rightUnbalancedTree inOrder: " << endl;
	rightUnbalancedTree.inOrderTraversal();
	cout << endl;
	cout << "rightUnbalancedTree preOrder: " << endl;
	rightUnbalancedTree.preOrderTraversal();
	cout << endl;
	cout << "rightUnbalancedTree postOrder: " << endl;
	rightUnbalancedTree.postOrderTraversal();
	cout << endl;

	symmetricalTree.add(40);
	symmetricalTree.add(60);
	symmetricalTree.add(30);
	symmetricalTree.add(45);
	symmetricalTree.add(70);
	symmetricalTree.add(55);
	symmetricalTree.add(35);
	symmetricalTree.add(52);
	symmetricalTree.add(80);
	symmetricalTree.add(20);

	cout << "symmetricalTree inOrder: " << endl;
	symmetricalTree.inOrderTraversal();
	cout << endl;
	cout << "symmetricalTree preOrder: " << endl;
	symmetricalTree.preOrderTraversal();
	cout << endl;
	cout << "symmetricalTree postOrder: " << endl;
	symmetricalTree.postOrderTraversal();
	cout << endl;

	cout << "breadth first search result for root" << endl;
	cout << myTree.breadthFirstSearch(50)->getData() << endl;
	cout << "breadth first search result for leaf" << endl;
	cout << myTree.breadthFirstSearch(-17)->getData() << endl;
	cout << "breadth first search result for value in middle" << endl;
	cout << myTree.breadthFirstSearch(1)->getData() << endl;
	cout << "breadth first search result for largest value" << endl;
	cout << myTree.breadthFirstSearch(200)->getData() << endl;
	cout << "breadth first search result for non-existant value will show as a nullptr" << endl;
	cout << (myTree.breadthFirstSearch(222) == nullptr) << endl;

	cin.get();
}