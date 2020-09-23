//#include"bintree.h"
//#include<string.h>
//#include<windows.h>
//int main()
//{
//	BTNode *bt;
//	BinaryInit(&bt);
//	const char *a = "ABD##E#H##CF##G##";
//	int n = strlen(a);
//	int pi = 0;ABCDDC##B##
	
	//BinaryTreeCreate(&bt);
	//bt=BinaryTreeCreate(a,n, &pi);
	//printf("节点数:%d\n",BinaryTreeSize(bt));
	//printf("叶子节点数:%d\n",BinaryTreeLeafSize(bt));
	//BinaryTreePrevOrder(bt);
	//printf("\n");
	//BinaryTreeInOrder(bt);
	//printf("\n");
	//BinaryTreePostOrder(bt);
	//printf("\n");
	//BinaryTreeLevelOrder(bt);
	//BinaryTreeComplete(bt);
	//int size = BinaryTreeLevelKSize(bt,4);
	//printf("%d\n", size);
//	system("pause");
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
#pragma warning (disable:4996)
typedef char BTDataType;

typedef struct BinaryTreeNode
{
	BTDataType _data;
	struct BinaryTreeNode* _left;
	struct BinaryTreeNode* _right;
}BTNode;
void BinaryInit(BTNode** t)
{
	*t = NULL;
}
BTNode* BinaryTreeCreate(char* a, int* pi)
{


	if (a[*pi] == '\0' || a[*pi] == '#')
	{
		return NULL;
	}
	else {
		BTNode* t = (BTNode*)malloc(sizeof(BTNode));
		t->_data = a[*pi];
		(*pi)++;
		t->_left = BinaryTreeCreate(a, pi);
		(*pi)++;
		t->_right = BinaryTreeCreate(a, pi);
		return t;
	}
}
//中序
void LRV(BTNode* t)//中序
{
	if (t != NULL)
	{
		LRV(t->_left);
		printf("%c ", t->_data);
		LRV(t->_right);
	}
}
//先序
void LVR(BTNode* t)
{
	if (t != NULL)
	{
		printf("%c ", t->_data);
		LVR(t->_left);
		LVR(t->_right);
	}
}
//后序
void VLR(BTNode* t)
{
	if (t != NULL)
	{
		VLR(t->_left);
		VLR(t->_right);
		printf("%c ", t->_data);
	}
}
//BTNode* BinaryTreeCreate()
//{
//	char item;
//	scanf("%c", &item);
//	if (item == '#')
//	{
//		return NULL;
//	}
//	else {
//		BTNode* t = (BTNode*)malloc(sizeof(BTNode));
//		t->_data = item;
//		t->_left = BinaryTreeCreate();
//		t->_right = BinaryTreeCreate();
//		return t;
//	}
//	
//}
//int main()
//{
//	BTNode* bt;
//	BinaryInit(&bt);
//	//char a[100];
//	//char item;
//	//int size = 0;
//	//while (scanf("%c", &item) && item != '&')
//	//{
//	//	a[size++] = item;
//	//}
//	/*for (int i = 0; i < size; i++)
//	{
//		printf("%c ", a[i]);
//	}*/
//	bt = BinaryTreeCreate();
//	/*int pi = 0;
//	bt = BinaryTreeCreate(a, &pi);*/
//	printf("\n");
//	LRV(bt);
//	printf("\n");
//	LVR(bt);
//	printf("\n");
//	VLR(bt);
//	return 0;
//
//}