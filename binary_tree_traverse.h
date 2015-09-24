#include "public_struct.h"

class BinaryTree
{
public:
	BinaryTree();
	~BinaryTree();
	BNode* InstructBinaryTree();
	void ShowBinaryTree(BTree *btree);
	void PreOrderTraverse(BTree* bt);
	void InOrderTraverse(BTree* bt);
	void PostOrderTraverse(BTree* bt);

private:
	BTree *binarytree;
	bool IsRootNode;
	int count;
};