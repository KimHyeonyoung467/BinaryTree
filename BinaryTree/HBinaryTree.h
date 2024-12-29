#include <iostream>
using namespace std;



typedef struct _TreeNode
{
	int Data;
	struct _TreeNode* left;
	struct _TreeNode* Right;
} TreeNode;



	typedef void (*VisitFuncPTR)(int Data);
	


	TreeNode* MakeNode();
	void SetData(TreeNode* ND,int data); // ��忡 �����͸� ���� 
	int GetData(TreeNode* ND); // ��忡 �����͸� �����ϰ�, ����� ������ ��ȯ 
	

	TreeNode* SetSubTree(TreeNode* ND); // ���� Ʈ�� �ּҰ� ��ȯ 
	TreeNode* GetSubLeftTree(TreeNode* ND); // ���� Ʈ�� �ּҰ� ��ȯ 
	TreeNode* GetSubRightTree(TreeNode* ND); // ���� Ʈ�� �ּҰ� ��ȯ 

	void MakeSubTree(TreeNode* main, TreeNode* sub); // ���� Ʈ�� ���� 



	void PreorderTraverse(TreeNode* ND,VisitFuncPTR action);
	void InorderTravalSal(TreeNode* ND,VisitFuncPTR action);
	void PstorderTraverse(TreeNode* ND,VisitFuncPTR action);


