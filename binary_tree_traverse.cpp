#include "binary_tree_traverse.h"
#include <iostream>

BinaryTree::BinaryTree()
{
	IsRootNode = true;
	binarytree = NULL;
}

BinaryTree::~BinaryTree()
{
}

BNode* BinaryTree::InstructBinaryTree()
{
	char Input;
	BNode* tmpNode = new (BNode);
	std::cout << "请输入二叉树结点元素的数据内容(输入q退出):" << std::endl;
	std::cin >> Input;
	if (Input == 'q')
	{
		return NULL;
	}
	else
	{
		if (IsRootNode == true)
		{
			binarytree = (BTree*)tmpNode;
			IsRootNode = false;
		}
		tmpNode->Data = Input;
		std::cout << "该结点是否具有左子树？(y or n)" << std::endl;
		std::cin >> Input;
		if (Input == 'y')
		{
			tmpNode->lchild = InstructBinaryTree();
		}
		else
		{
			tmpNode->lchild = NULL;

		}
		std::cout << "该结点是否具有右子树？(y or n)" << std::endl;
		std::cin >> Input;
		if (Input == 'y')
		{
			tmpNode->rchild = InstructBinaryTree();
		}
		else
		{
			tmpNode->rchild = NULL;
		}
	}
	return tmpNode;
}