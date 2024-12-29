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
	void SetData(TreeNode* ND,int data); // 노드에 데이터를 저장 
	int GetData(TreeNode* ND); // 노드에 데이터를 저장하고, 저장된 데이터 반환 
	

	TreeNode* SetSubTree(TreeNode* ND); // 서브 트리 주소값 반환 
	TreeNode* GetSubLeftTree(TreeNode* ND); // 서브 트리 주소값 반환 
	TreeNode* GetSubRightTree(TreeNode* ND); // 서브 트리 주소값 반환 

	void MakeSubTree(TreeNode* main, TreeNode* sub); // 서브 트리 연결 



	void PreorderTraverse(TreeNode* ND,VisitFuncPTR action);
	void InorderTravalSal(TreeNode* ND,VisitFuncPTR action);
	void PstorderTraverse(TreeNode* ND,VisitFuncPTR action);


