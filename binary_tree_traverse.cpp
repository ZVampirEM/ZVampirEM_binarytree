#include "binary_tree_traverse.h"
#include <iostream>

BinaryTree::BinaryTree()
{
	IsRootNode = true;
	binarytree = NULL;
	count = 0;
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
		std::cout << "�ý��" << tmpNode->Data << "�Ƿ������������(y or n)" << std::endl;
		std::cin >> Input;
		if (Input == 'y')
		{
			count += 1;
			tmpNode->lchild = InstructBinaryTree();
		}
		else
		{
			tmpNode->lchild = NULL;

		}
		std::cout << "�ý��" << tmpNode->Data << "�Ƿ������������(y or n)" << std::endl;
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

void BinaryTree::ShowBinaryTree(BTree *btree)
{    
	if (btree == NULL)
	{
		std::cout << "��Ҫ�������Ϊ��" << std::endl;
		return;
	}

	else
	{
		
	}
}   