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
	std::cout << "��������������Ԫ�ص���������(����q�˳�):" << std::endl;
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
		std::cout << "�ý���Ƿ������������(y or n)" << std::endl;
		std::cin >> Input;
		if (Input == 'y')
		{
			tmpNode->lchild = InstructBinaryTree();
		}
		else
		{
			tmpNode->lchild = NULL;

		}
		std::cout << "�ý���Ƿ������������(y or n)" << std::endl;
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