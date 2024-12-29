#include "HBinaryTree.h"

TreeNode* MakeNode()
{
	TreeNode* Node = new TreeNode();
	Node->left = NULL;
	Node->Right = NULL;
	return Node;
}

void SetData(TreeNode* ND,int data)
{
	ND->Data = data;
}

int GetData(TreeNode* ND) // ��忡 �����͸� �����ϰ�, ����� ������ ��ȯ 
{
	return ND->Data;
}


TreeNode* SetSubTree(TreeNode* ND)
{
	if (ND->Data != NULL)
	{
		return ND->Right;
	}
	else
	{
		return ND->left;
	}
}

TreeNode* GetSubRightTree(TreeNode* ND)
{
	return ND->Right;
}

TreeNode* GetSubLeftTree(TreeNode* ND)  // ���� Ʈ�� �ּҰ� ��ȯ 
{
	return ND->left;
}

void MakeSubTree(TreeNode* main, TreeNode* sub)
{
	if (main->left != NULL)
	{
		delete (main->left);
		main->left = sub;
	}
	if (main->Right != NULL)
	{
		delete (main->Right);
		main->Right = sub;
	}

	
}

void PreorderTraverse(TreeNode* ND, VisitFuncPTR action)
{
	if (ND == NULL) // BT�� NULL �̸� ��� Ż�� 
		return;

	
	InorderTravalSal(ND->left, action);  // 1�ܰ� ���� ���� Ʈ���� ��ȸ
	action(ND->Data);					 // 2�ܰ� ��Ʈ ����� �湮 
	InorderTravalSal(ND->Right, action); // 3�ܰ� ������ ���� Ʈ���� ��ȸ 
}

void InorderTravalSal(TreeNode* ND, VisitFuncPTR action)
{
	if (ND == NULL) return;

	action(ND->Data);				 // ���� ��ȸ�̹Ƿ� ��Ʈ ��� ���� �湮 
	PreorderTraverse(ND->left, action);
	PreorderTraverse(ND->Right, action);
}

void PstorderTraverse(TreeNode* ND, VisitFuncPTR action)
{
	if (ND == NULL) return;

	PreorderTraverse(ND->left, action);
	PreorderTraverse(ND->Right, action);
	action(ND->Data);	  // ���� ��ȸ�̹Ƿ� ��Ʈ ��� �������� �湮 
}
