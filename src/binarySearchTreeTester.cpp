#include <iostream>
#include "binarySearchTree.h"
using namespace std;

int main() {
	bSearchTreeType<int> TreeRoot;
	int uInput;

	cout << "Please enter a number to add to a tree (-999 to quit): " << endl;
	cin >> uInput;
	while (uInput != -999){
		TreeRoot.insert(uInput);
		cout << "Please enter a number to add to a tree (-999 to quit): " << endl;
		cin >> uInput;
	}

	cout << "In-order traversal of the tree:" << endl;
	TreeRoot.inorderTraversal(); 
	cout << endl;
	cout << "Number of nodes: " << TreeRoot.treeNodeCount() << endl; 
	cout << "Number of leaves: " << TreeRoot.treeLeavesCount() << endl; 

	cout << "Please enter a number to delete from a tree (-999 to quit): " << endl;
	cin >> uInput;
	while (uInput != -999){
		TreeRoot.deleteNode(uInput);
		cout << "Please enter a number to delete from a tree (-999 to quit): " << endl;
		cin >> uInput;
	}

	cout << "Please enter a number to delete from a tree (-999 to quit): " << endl;
	cin >> uInput;
	while (uInput != -999){
		TreeRoot.search(uInput);
		cout << "Please enter a number to delete from a tree (-999 to quit): " << endl;
		cin >> uInput;
	}

	cout << "In-order traversal of the tree:" << endl;
	TreeRoot.inorderTraversal();
	cin.get(); 
}