#include <iostream>
#include "binarySearchTree.h"

using namespace std;

int main() {
	bSearchTreeType<int> TreeRoot = new binarySearchTreeType<int>();
	int[] treeFill = {1, 2, 3, 4, 5, 6, 7 ,8 ,9, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	for(int i = 0; i < 18; i++){
		TreeRoot.insert(treeFill[i]);
	}
	cout << TreeRoot.nodeCount() << endl;
	cout << TreeRoot.leavesCount();

}