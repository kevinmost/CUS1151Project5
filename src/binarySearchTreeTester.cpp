#include <iostream>
#include "binarySearchTree.h"
using namespace std;

int main() {
	bSearchTreeType<int> TreeRoot;
	int uInput;

	cout << "Now adding to tree (-999 to quit): " << endl;
	cin >> uInput;
	while (uInput != -999){
		TreeRoot.insert(uInput);
		cout << "Now adding to tree (-999 to quit): " << endl;
		cin >> uInput;
	}

	cout << "Tree in-order:" << endl;
	TreeRoot.inorderTraversal(); 
	cout << endl;
	cout << "Nodes: " << TreeRoot.treeNodeCount() << endl; 
	cout << "Leaves: " << TreeRoot.treeLeavesCount() << endl; 

	cout << "Now deleting from tree (-999 to quit): " << endl;
	cin >> uInput;
	while (uInput != -999){
		TreeRoot.deleteNode(uInput);
		cout << "Now deleting from tree (-999 to quit): " << endl;
		cin >> uInput;
	}

	cout << "Now searching tree (-999 to quit): " << endl;
	cin >> uInput;
	while (uInput != -999){
		cout << uInput << " is " << TreeRoot.search(uInput) ? "not " << " in this tree" << endl;
		cout << "Now searching tree (-999 to quit): " << endl;
		cin >> uInput;
	}

	cout << "Tree in-order:" << endl;
	TreeRoot.inorderTraversal();
	cin.get(); 
}