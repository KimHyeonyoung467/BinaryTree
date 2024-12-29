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

int GetData(TreeNode* ND) // 노드에 데이터를 저장하고, 저장된 데이터 반환 
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

TreeNode* GetSubLeftTree(TreeNode* ND)  // 서브 트리 주소값 반환 
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
	if (ND == NULL) // BT가 NULL 이면 재귀 탈출 
		return;

	
	InorderTravalSal(ND->left, action);  // 1단계 왼쪽 서브 트리의 순회
	action(ND->Data);					 // 2단계 루트 노드의 방문 
	InorderTravalSal(ND->Right, action); // 3단계 오른쪽 서브 트리의 순회 
}

void InorderTravalSal(TreeNode* ND, VisitFuncPTR action)
{
	if (ND == NULL) return;

	action(ND->Data);				 // 전위 순회이므로 루트 노드 먼저 방문 
	PreorderTraverse(ND->left, action);
	PreorderTraverse(ND->Right, action);
}

void PstorderTraverse(TreeNode* ND, VisitFuncPTR action)
{
	if (ND == NULL) return;

	PreorderTraverse(ND->left, action);
	PreorderTraverse(ND->Right, action);
	action(ND->Data);	  // 후위 순회이므로 루트 노드 마지막에 방문 
}
