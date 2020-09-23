#ifndef _BINTREE_H_
#define _BINTREE_H_
#include"common.h"
//#define ElemType char
//==============================================================
struct BinTreeNode;
typedef BinTreeNode* LinkQueueElemType;  //链式队列
typedef struct LinkQueueNode  //节点类型
{
	LinkQueueElemType data;
	struct LinkQueueNode* link;

}LinkQueueNode;
typedef  struct LinkQueue
{
	LinkQueueNode* head;//队头指针
	LinkQueueNode* tail;//队尾指针
} LinkQueue;

void LinkQueueInit(LinkQueue* pq);
void LinkQueueEn(LinkQueue* pq, LinkQueueElemType x);//入队
void LinkQueueDe(LinkQueue* pq, LinkQueueElemType x);//出队
void LinkQueueShow(LinkQueue* pq);
LinkQueueElemType LinkQueueFront(LinkQueue* pq);
int LinkQueueSize(LinkQueue* pq);
bool LinkQueueEmpty(LinkQueue* pq);
void LinkQueueDestory(LinkQueue* pq);
//======================================================================
void LinkQueueInit(LinkQueue* pq)    //初始化
{

	pq->head = pq->tail = NULL;
}
bool LinkQueueEmpty(LinkQueue* pq) //判空
{
	assert(pq != NULL);
	return pq->head == NULL;
}
void LinkQueueEn(LinkQueue* pq, LinkQueueElemType x) //入队
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
		printf("%d ", p->data);
		p = p->link;
	}
	printf("\n");
}
void LinkQueueDe(LinkQueue* pq) //出队
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
LinkQueueElemType LinkQueueFront(LinkQueue* pq) //取队头
{
	assert(pq != NULL);
	assert(pq->head != NULL);
	return pq->head->data;// 队尾 return pq->tail->data;
}
int LinkQueueSize(LinkQueue* pq) //队列长度
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
//==========================================================================
typedef BinTreeNode* LinkStackElemType;
typedef struct LinkStackNode
{
	LinkStackElemType data;
	struct LinkStackNode* link;
}LinkStackNode;

typedef LinkStackNode* LinkStack;
void LinkStackInit(LinkStack* pst);
void LinkStackPush(LinkStack* pst, LinkStackElemType x);
void LinkStackPop(LinkStack* pst);
LinkStackElemType LinkStackTop(LinkStack* pst);
void LinkStackShow(LinkStack* pst);
int LinkStackSize(LinkStack* pst);
void LinkStackDestory(LinkStack* pst);
bool LinkStackEmpty(LinkStack* pst);
//==========================================
void LinkStackInit(LinkStack* pst)
{
	assert(pst != NULL);
	*pst = NULL;
}
bool LinkStackEmpty(LinkStack* pst)
{
	assert(pst!=NULL);
	return *pst == NULL;

}
void LinkStackPush(LinkStack* pst, LinkStackElemType x)
{
	assert(pst != NULL);
	LinkStackNode* s = (LinkStackNode*)malloc(sizeof(LinkStackNode));
	assert(s != NULL);
	s->data = x;

	s->link = *pst;
	*pst = s;


}
void LinkStackPop(LinkStack* pst)
{
	assert(pst != NULL);
	if (*pst != NULL)
	{
		LinkStackNode* p = *pst;
		*pst = p->link;
		free(p);
	}
}
LinkStackElemType LinkStackTop(LinkStack* pst)
{
	assert(pst != NULL && *pst != NULL);

	return (*pst)->data;
}
void LinkStackShow(LinkStack* pst)
{
	assert(pst != NULL);
	LinkStackNode* p = *pst;

	while (p != NULL)
	{
		printf("| %d |\n", p->data);
		p = p->link;
	}
	printf(" --- \n");
}
int LinkStackSize(LinkStack* pst)
{
	assert(pst != NULL);
	int size = 0;
	LinkStackNode* p = *pst;
	while (p != NULL)
	{
		size++;
		p = p->link;
	}
	return size;
}
void LinkStackDestory(LinkStack* pst)
{
	assert(pst != NULL);
	LinkStackNode* p = *pst;
	while (p != NULL)
	{
		*pst = p->link;
		free(p);
		p = *pst;
	}
}
//==========================================================================
typedef char BinTreeElemType;
typedef struct BinTreeNode
{
	BinTreeElemType data;
	struct BinTreeNode* leftChild;
	struct BinTreeNode* rightChild;
}BinTreeNode;
typedef BinTreeNode* BinTree;
//二叉树的创建
void BinTreeInit(BinTree* t);
void BinTreeCreate(BinTree* t);
BinTree BinTreeCreate_01();
BinTree BinTreeCreate_02(const char* s);
BinTree BinTreeCreate_03(const char *vlr,const char *lvr,int n);
int Size(BinTree t); //节点数
//二叉树的遍历
void BinTreeVLR(BinTree t);
void BinTreeLVR(BinTree t);
void BinTreeLRV(BinTree t);
void BinTreeLevel(BinTree t);

//二叉树的遍历 //非递归
void BinTreeVLR_Nor(BinTree t);
void BinTreeLVR_Nor(BinTree t);
void BinTreeLRV_Nor(BinTree t);




int Height(BinTree t);
BinTreeNode* Left(BinTreeNode* p);
BinTreeNode* Right(BinTreeNode* p);
BinTreeNode* BinTreeFind(BinTree t, BinTreeElemType key);
BinTreeNode* BinTreeParent(BinTree t, BinTreeNode *p);
BinTreeNode* BinTreeCopy(BinTree t);
bool  Equal(BinTree t1, BinTree t2);
//===================================
//二叉树的创建
void BinTreeInit(BinTree* t)
{
	*t = NULL;
}
void BinTreeCreate(BinTree* t)
{
	assert(t != NULL);
	BinTreeElemType item;
	scanf("%c", &item);
	if (item == '#')
	{
		*t = NULL;
	}
	else {
		*t = (BinTreeNode*)malloc(sizeof(BinTreeNode));
		assert(*t != NULL);
		(*t)->data = item;
		BinTreeCreate(&(*t)->leftChild);
		BinTreeCreate(&(*t)->rightChild);
	}
}
BinTree BinTreeCreate_01()
{
	BinTreeElemType item;
	scanf("%c", &item);
	if (item == '#')
	{
		return NULL;
	}
	else
	{
		BinTreeNode* t = (BinTreeNode*)malloc(sizeof(BinTreeNode));
		assert(t != NULL);
		t->data = item;
		t->leftChild = BinTreeCreate_01();
		t->rightChild = BinTreeCreate_01();
		return t;
	}
}
BinTree BinTreeCreate_02(const char* s,int *i)
{
	assert(s != NULL);
	if (s[*i] == '\0' || s[*i] == '#')
	{
		return NULL;
	}
	else {
		BinTreeNode* t = (BinTreeNode*)malloc(sizeof(BinTreeNode));
		assert(t != NULL);
		t->data = s[*i];
		(*i)++;
		t->leftChild = BinTreeCreate_02(s,i);
		(*i)++;
		t->rightChild = BinTreeCreate_02(s,i);
		return t;
	}
}
BinTree BinTreeCreate_03(const char* vlr, const char* lvr,int n)
{
	if (n == 0)
	{
		return NULL;
	}
	int k = 0;
	while (vlr[0] != lvr[k]) //在中序里面找到根节点的位置
	{
		k++;
	}
	BinTreeNode* t = (BinTreeNode*)malloc(sizeof(BinTreeNode));
	t->data = lvr[k];//vlr[0];
	t->leftChild = BinTreeCreate_03(vlr+1,lvr,k);
	t->rightChild = BinTreeCreate_03(vlr+k+1,lvr+k+1,n-k-1);
	return t;
}
int Size(BinTree t)
{
	if (t == NULL)
	{
		return 0;
	}
	else {
		return Size(t->leftChild) + Size(t->rightChild) + 1;
	}
}
//二叉树的遍历 //递归法
//先序遍历
void BinTreeVLR(BinTree t)
{
	
	if (t != NULL)
	{
		printf("%c ", t->data);  //先根再左子树，然后右子树
		BinTreeVLR(t->leftChild);
		BinTreeVLR(t->rightChild);
	}
	
}
//中序遍历
void BinTreeLVR(BinTree t)
{
	if (t != NULL)
	{
		BinTreeLVR(t->leftChild);   //先访问左子树，然后跟，然后右子树
		printf("%c ", t->data);
		BinTreeLVR(t->rightChild);
	}
	
}
//后序遍历
void BinTreeLRV(BinTree t)
{
	if (t != NULL)
	{
		BinTreeLRV(t->leftChild);
		BinTreeLRV(t->rightChild); //先访问左子树，然后右子树，然后根
		printf("%c ", t->data);
	}
	
}
//层次遍历
void BinTreeLevel(BinTree t)
{
	if (t != NULL)
	{
		LinkQueue Q;
		LinkQueueInit(&Q);
		LinkQueueEn(&Q, t);
		while (!LinkQueueEmpty(&Q))
		{

			BinTreeNode *p=LinkQueueFront(&Q);
			LinkQueueDe(&Q);
			printf("%c ", p->data);
			if (p->leftChild != NULL)
			{
				LinkQueueEn(&Q, p->leftChild);
			}
			if (p->rightChild != NULL)
			{
				LinkQueueEn(&Q, p->rightChild);
			}
		}
		LinkQueueDestory(&Q);
		
	}
	
	
}


//二叉树的遍历 //非递归
void BinTreeVLR_Nor(BinTree t)
{
	if (t != NULL)
	{
		LinkStack st;
		LinkStackInit(&st);
		LinkStackPush(&st, t);
		while (!LinkStackEmpty(&st))
		{
			BinTreeNode* p = LinkStackTop(&st);
			LinkStackPop(&st);
			printf("%c ", p->data);
			if (p->rightChild != NULL)
			{
				LinkStackPush(&st, p->rightChild);
			}
			if (p->leftChild != NULL)
			{
				LinkStackPush(&st, p->leftChild);
			}
		}
		LinkStackDestory(&st);
	}
}
void BinTreeLVR_Nor(BinTree t)
{
	if (t != NULL)
	{
		LinkStack st;
		LinkStackInit(&st);
		do
		{
			while (t != NULL)
			{
				LinkStackPush(&st, t);
				t = t->leftChild;
			}
			BinTreeNode* p = LinkStackTop(&st);
			LinkStackPop(&st);
			printf("%c ", p->data);
			if (p->rightChild != NULL)
			{
				t = p->rightChild;
			}
		} while (!LinkStackEmpty(&st)||t!=NULL);
	}
}
void BinTreeLRV_Nor(BinTree t)
{
	if (t != NULL)
	{
		LinkStack st;
		LinkStackInit(&st);
		BinTreeNode* pre = NULL;
		do
		{
			while (t != NULL)
			{
				LinkStackPush(&st, t);
				t = t->leftChild;
			}
			BinTreeNode* p = LinkStackTop(&st);
			if (p->rightChild == NULL || p->rightChild == pre)
			{
				LinkStackPop(&st);
				printf("%c ", p->data);
				pre = p;
			}
			else {
				t = p->rightChild;
			}
		} while (!LinkStackEmpty(&st));
	}
}
int Height(BinTree t)
{
	if (t == NULL)
	{
		return 0;
	}
	else {
		int left_h = Height(t->leftChild);
		int right_h = Height(t->rightChild);
		return (left_h > right_h ? left_h : right_h) + 1;
	}
}
BinTreeNode* Left(BinTreeNode* p)
{
	assert(p != NULL);
	return p->leftChild;
}
BinTreeNode* Right(BinTreeNode* p)
{
	assert(p != NULL);
	return p->rightChild;
}
BinTreeNode* BinTreeFind(BinTree t, BinTreeElemType key)
{
	//assert(t != NULL);
	if (t == NULL|| t->data == key)
	{
		return t;
	}
	BinTreeNode *p=BinTreeFind(t->leftChild, key);
	if (p != NULL)
	{
		return p;
	}
	return BinTreeFind(t->rightChild, key);
	
}
BinTreeNode* BinTreeParent(BinTree t, BinTreeNode* p)  //
{
	if (t == NULL || p == NULL || t == p)
	{
		return NULL;
	}
	if (t->leftChild == p || t->rightChild == p)
	{
		return t;
	}
	BinTreeNode* pr = BinTreeParent(t->leftChild, p);
	if (pr != NULL)
	{
		return pr;
	}
	return BinTreeParent(t->rightChild, p);
}
BinTreeNode* BinTreeCopy(BinTree t)
{
	if (t == NULL)
	{
		return NULL;
	 }
	else
	{
		BinTreeNode* bt = (BinTreeNode*)malloc(sizeof(BinTreeNode));
		assert(bt != NULL);
		bt->data = t->data;
		bt->leftChild = t->leftChild;
		bt->rightChild = t->rightChild;
		return bt;
	}
}
bool  Equal(BinTree t1, BinTree t2)
{
	if ((t1 == NULL && t2 != NULL) || (t1 != NULL && t2 == NULL) || t1->data != t2->data)
	{
		return false;
	}
	bool flag = Equal(t1->leftChild, t2->leftChild);
	if (!flag)
	{
		return false;
	}
	flag = Equal(t1->rightChild, t2->rightChild);
	if (!flag)
	{
		return false;
	}
	return true;

}
#endif
