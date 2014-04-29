CC=g++
BIN=binarySearchTreeTester

binarySearchTreeTester: src/binarySearchTreeTester.cpp src/binarySearchTree.h src/binaryTree.h
	$(CC) -o $(BIN).o src/binarySearchTreeTester.cpp src/binarySearchTree.h src/binaryTree.h -I.
clean: 
	rm -f *.exe *.o *.stackdump *~
backup: 
	test -d || mkdir backups
	cp *.cpp backups
	cp *.h backups
