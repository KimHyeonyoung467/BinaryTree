#include <iostream>
#include "HBinaryTree.h"

using namespace std;



void ShowIntData(int Data);

int main()
{

	TreeNode* ndA = MakeNode();
	TreeNode* ndB = MakeNode();
	TreeNode* ndC = MakeNode();

	// 노드에 데이터를 저장 후 저장된 데이터 반환 

	SetData(ndA, 10);
	SetData(ndB, 20);
	SetData(ndC, 30);

	// 트리의 서브 트리 연결 
	MakeSubTree(ndA, ndB);
	MakeSubTree(ndB, ndC);
	
	// 노드 A의 왼쪽 자식 노드 데이터 출력 
	cout << GetData(GetSubLeftTree(ndA)) << endl;

	// 노드 A의 오른쪽 자식 노드 데이터 출력 
	cout << GetData(GetSubRightTree(ndA)) << endl;



	InorderTravalSal(ndA, ShowIntData);
	cout << endl;
	PreorderTraverse(ndA, ShowIntData);
	cout << endl;
	PstorderTraverse(ndA, ShowIntData);
	return 0;
}
