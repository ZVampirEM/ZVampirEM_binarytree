#include "public_struct.h"

class BinaryTree
{
	BinaryTree();
	~BinaryTree();
	BNode* InstructBinaryTree();
	void ShowBinaryTree();
	void PreOrderTraverse(BTree* bt);
	void InOrderTraverse(BTree* bt);
	void PostOrderTraverse(BTree* bt);

private:
	BTree *binarytree;
	bool IsRootNode;
};