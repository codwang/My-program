#ifndef _BINTREE_H_
#define _BINTREE_H_
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
#pragma warning(disable:4996)
typedef char BTDataType;

typedef struct BinaryTreeNode
{
	BTDataType _data;
	struct BinaryTreeNode* _left;
	struct BinaryTreeNode* _right;
}BTNode;
typedef  BTNode* LinkQueueElemType;  //��ʽ����
typedef struct LinkQueueNode  //�ڵ�����
{
	LinkQueueElemType data;
	struct LinkQueueNode* link;

}LinkQueueNode;
typedef  struct LinkQueue
{
	LinkQueueNode* head;//��ͷָ��
	LinkQueueNode* tail;//��βָ��
} LinkQueue;

void LinkQueueInit(LinkQueue* pq);
void LinkQueueEn(LinkQueue* pq, LinkQueueElemType x);//���
void LinkQueueDe(LinkQueue* pq, LinkQueueElemType x);//����
void LinkQueueShow(LinkQueue* pq);
LinkQueueElemType LinkQueueFront(LinkQueue* pq);
int LinkQueueSize(LinkQueue* pq);
bool LinkQueueEmpty(LinkQueue* pq);
void LinkQueueDestory(LinkQueue* pq);
//================================================
void LinkQueueInit(LinkQueue* pq)    //��ʼ��
{

	pq->head = pq->tail = NULL;
}
bool LinkQueueEmpty(LinkQueue* pq) //�п�
{
	assert(pq != NULL);
	return pq->head == NULL;
}
void LinkQueueEn(LinkQueue* pq, LinkQueueElemType x) //���
{
	assert(pq != NULL);
	LinkQueueNode* s = (LinkQueueNode*)malloc(sizeof(LinkQueueNode));
	assert(s != NULL);
	s->data = x;
	s->link = NULL;
	if (pq->head == NULL)
	{
		pq->head = pq->tail = s;
	}
	else {
		pq->tail->link = s;
		pq->tail = s;
	}
}
void LinkQueueShow(LinkQueue* pq)
{
	assert(pq != NULL);
	LinkQueueNode* p = pq->head;
	while (p != NULL)
	{
		printf("%c ", p->data);
		p = p->link;
	}
	printf("\n");
}
void LinkQueueDe(LinkQueue* pq) //����
{
	assert(pq != NULL);
	if (pq->head != NULL)
	{
		LinkQueueNode* p = pq->head;
		if (pq->head == pq->tail)
		{
			pq->head = pq->tail = NULL;
		}
		else {
			pq->head = p->link;

		}
		free(p);
	}

}
LinkQueueElemType LinkQueueFront(LinkQueue* pq) //ȡ��ͷ
{
	assert(pq != NULL);
	assert(pq->head != NULL);
	return pq->head->data;// ��β return pq->tail->data;
}
int LinkQueueSize(LinkQueue* pq) //���г���
{
	assert(pq != NULL);
	int size = 0;
	LinkQueueNode* p = pq->head;
	while (p != NULL)
	{
		size++;
		p = p->link;
	}
	return size;
}
void LinkQueueDestory(LinkQueue* pq)
{
	assert(pq != NULL);
	LinkQueueNode* p = pq->head;
	while (p != NULL)
	{
		pq->head = p->link;
		free(p);
		p = pq->head;
	}
}
//================================================
//typedef char BTDataType;
//
//typedef struct BinaryTreeNode
//{
//	BTDataType _data;
//	struct BinaryTreeNode* _left;
//	struct BinaryTreeNode* _right;
//}BTNode;
void BinaryInit(BTNode** root);
// ͨ��ǰ�����������"ABD##E#H##CF##G##"����������
void BinaryTreeCreate(BTNode* root);
//BTNode* BinaryTreeCreate(BTDataType* a, int n, int* pi);
// ����������
void BinaryTreeDestory(BTNode** root);
// �������ڵ����
int BinaryTreeSize(BTNode* root);
// ������Ҷ�ӽڵ����
int BinaryTreeLeafSize(BTNode* root);
// ��������k��ڵ����
int BinaryTreeLevelKSize(BTNode* root, int k);
// ����������ֵΪx�Ľڵ�
BTNode* BinaryTreeFind(BTNode* root, BTDataType x);
// ������ǰ����� 
void BinaryTreePrevOrder(BTNode* root);
// �������������
void BinaryTreeInOrder(BTNode* root);
// �������������
void BinaryTreePostOrder(BTNode* root);
// �������
void BinaryTreeLevelOrder(BTNode* root);
// �ж϶������Ƿ�����ȫ������
//int BinaryTreeComplete(BTNode* root);
//==========================================================
void BinaryInit(BTNode** root)
{
	*root = NULL;
}
// ͨ��ǰ�����������"ABD##E#H##CF##G##"����������
//ABC##DE##F##G#H##
//void BinaryTreeCreate(BTNode** t)
//{
//	
//	
//		assert(t != NULL);
//		BTDataType item;
//		scanf("%c", &item);
//		if (item == '#')
//		{
//			*t = NULL;
//		}
//		else {
//			*t = (BTNode*)malloc(sizeof(BTNode));
//			assert(*t != NULL);
//			(*t)->_data = item;
//			BinaryTreeCreate(&(*t)->_left);
//			BinaryTreeCreate(&(*t)->_right);
//		}
//	
//	/*assert(root != NULL);
//	char item;
//	scanf("%c", &item);
//	if (item == '#')
//	{
//		*root = NULL;
//	}
//	else {
//		*root = (BTNode*)malloc(sizeof(BTNode));
//		assert(*root != NULL);
//		(*root)->_data = item;
//		BinaryTreeCreate(&(*root)->_left);
//		BinaryTreeCreate(&(*root)->_right);
//	}*/
//}
BTNode* BinaryTreeCreate(const char* a,int n,int* pi)
{

	assert(a != NULL);
	if (a[*pi] == '\0' || a[*pi] == '#')
	{
		return NULL;
	}
	else {
		BTNode* t = (BTNode*)malloc(sizeof(BTNode));
		assert(t != NULL);
		t->_data = a[*pi];
		(*pi)++;
		t->_left = BinaryTreeCreate(a,n, pi);
		(*pi)++;
		t->_right = BinaryTreeCreate(a,n, pi);
		return t;
	}
}
// ����������
void BinaryTreeDestory(BTNode** root)
{

}
// �������ڵ����
int BinaryTreeSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	return BinaryTreeSize(root->_left) + BinaryTreeSize(root->_right) + 1;
}
// ������Ҷ�ӽڵ����
int BinaryTreeLeafSize(BTNode* root)
{
	if (root == NULL || root->_left == NULL && root->_right == NULL)
	{
		return 0;
	}
	return BinaryTreeLeafSize(root->_left) + BinaryTreeLeafSize(root->_right)+1;
}
// ��������k��ڵ����
int BinaryTreeLevelKSize(BTNode* root, int k)
{
	if (root != NULL)
	{
		if (k == 1)
		{
			return 1;
		}
		LinkQueue Q;
		LinkQueueInit(&Q);
		LinkQueueEn(&Q, root);
		int i = 0;
		while (!LinkQueueEmpty(&Q))
		{
			BTNode* p = LinkQueueFront(&Q);
			LinkQueueDe(&Q);
			//printf("%c ", p->_data);
			while (k>1)
			{
				if (p->_left == NULL)
				{
					LinkQueueEn(&Q,NULL);
				}
				if (p->_left != NULL)
				{
					LinkQueueEn(&Q, p->_left);
					i++;
				}
				if (p->_right != NULL)
				{
					LinkQueueEn(&Q, p->_right);
					i++;
				}
				k--;
				
			}
			return i;
		}
		LinkQueueDestory(&Q);
	}
}
// ����������ֵΪx�Ľڵ�
BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
{
	if (root == NULL|| root->_data == x)
	{
		return root;
	}
	BTNode* p = BinaryTreeFind(root->_left, x);
	if (p != NULL)
	{
		return p;
	}
	return BinaryTreeFind(root->_right, x);
}
// ������ǰ����� 
void BinaryTreePrevOrder(BTNode* root)
{
	if (root != NULL)
	{
		printf("%c ", root->_data);
		BinaryTreePrevOrder(root->_left);
		BinaryTreePrevOrder(root->_right);
	}
}
// �������������
void BinaryTreeInOrder(BTNode* root)
{
	if (root != NULL)
	{
		BinaryTreeInOrder(root->_left);   //�ȷ�����������Ȼ�����Ȼ��������
		printf("%c ", root->_data);
		BinaryTreeInOrder(root->_right);
	}
}
// �������������
void BinaryTreePostOrder(BTNode* root)
{
	if (root != NULL)
	{
		BinaryTreePostOrder(root->_left);
		BinaryTreePostOrder(root->_right);
		printf("%c ", root->_data);
	}
}
// �������
void BinaryTreeLevelOrder(BTNode* root)
{
	if (root != NULL)
	{
		LinkQueue Q;
		LinkQueueInit(&Q);
		LinkQueueEn(&Q, root);
		while (!LinkQueueEmpty(&Q))
		{
			BTNode* p = LinkQueueFront(&Q);
			LinkQueueDe(&Q);
			printf("%c ", p->_data);
			
			if (p->_left != NULL)
			{
				LinkQueueEn(&Q, p->_left);
			}
			if (p->_right != NULL)
			{
				LinkQueueEn(&Q, p->_right);
			}
		}
		LinkQueueDestory(&Q);
	}
}
// �ж϶������Ƿ�����ȫ������
//int BinaryTreeComplete(BTNode* root)
//{
//	LinkQueue Q;
//	LinkQueueInit(&Q);
//	while (root != NULL)
//	{
//		LinkQueueEn(&Q, root);
//	}
//}
void  BinaryTreeComplete(BTNode* root)
{
	LinkQueue Q;
	LinkQueueInit(&Q);
	LinkQueueEn(&Q, root);//!LinkQueueEmpty(&Q)
	//while (root!=NULL)
	//{
	//	BTNode* p = LinkQueueFront(&Q);
	//	//LinkQueueDe(&Q);
	//	//printf("%c ", p->_data);
	//	if (p->_left != NULL)
	//	{
	//		LinkQueueEn(&Q, p->_left);
	//	}
	//	if (p->_right != NULL)
	//	{
	//		LinkQueueEn(&Q, p->_right);
	//	}
	//}
	LinkQueueShow(&Q);
}

#endif
