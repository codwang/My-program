#ifndef _STACK_H_
#define _STACK_H_
#include"common.h"
#define ElemType int
#define STACK_DEFAULT_SIZE 8
//typedef struct SeqStack
//{
//	ElemType* base;//栈空间
//	size_t capacity;
//	int top;//栈顶指针
//
//}SeqStack;
//
//void SeqStackInit(SeqStack* pst,int sz= STACK_DEFAULT_SIZE);//默认值
//void SeqStackPush_back(SeqStack* pst, ElemType x);//进栈
//void SeqStackPop(SeqStack* pst, ElemType x);//出栈
//bool IsFull(SeqStack* pst);
//bool IsEmpty(SeqStack* pst);
//void SeqStackShow(SeqStack* pst);
//ElemType SeqStackTop(SeqStack* pst);//取栈顶元素
//void SeqStackDestroy(SeqStack *pst);
//int SeqStackSize(SeqStack* pst);
////=======================================
//void SeqStackInit(SeqStack* pst,int sz)
//{
//	pst->capacity = sz > STACK_DEFAULT_SIZE ? sz : STACK_DEFAULT_SIZE;
//	pst->base = (ElemType*)malloc(sizeof(ElemType) * pst->capacity);
//	pst->top = 0;
//
//}
//bool IsFull(SeqStack* pst)
//{
//	assert(pst != NULL);
//	return pst->top >= pst->capacity;
//}
//bool IsEmpty(SeqStack* pst)
//{
//	assert(pst != NULL);
//	return pst->top == 0;
//}
//void SeqStackShow(SeqStack* pst)
//{
//	assert(pst != NULL);
//	for (int i = pst->top - 1; i >= 0; --i)
//	{
//		printf("| %d |\n", pst->base[i]);
//	}
//	printf("——-\n");
//}
//void SeqStackPush_back(SeqStack* pst, ElemType x)
//{
//	assert(pst != NULL);
//	if (IsFull(pst))
//	{
//		printf("栈已满，%d不能入栈!\n", x);
//		return;
//	}
//	pst->base[pst->top++] = x;
//
//}
//void SeqStackPop(SeqStack* pst)//出栈
//{
//	assert(pst != NULL);
//	if (IsEmpty(pst))
//	{
//		printf("栈已空，不能出栈!");
//		return;
//	}
//	pst->top--;
//	printf("%d出栈\n",pst->base[pst->top]);
//}
//ElemType SeqStackTop(SeqStack* pst)
//{
//	assert(pst != NULL);
//	
//	assert(!IsEmpty(pst));
//	//printf("栈已空,不能取栈顶元素。\n");
//	
//	return pst->base[pst->top-1];
//}
//void SeqStackTop(SeqStack* pst, ElemType* top_val) //出参
//{
//	assert(pst != NULL);
//	if (IsEmpty(pst))
//	{
//		printf("栈已空,不能取栈顶元素。\n");
//		return;
//	}
//	*top_val = pst->base[pst->top - 1];
//}
//void SeqStackDestroy(SeqStack* pst)
//{
//	assert(pst != NULL);
//	free(pst->base);
//	pst->base = NULL;
//	pst->capacity = pst->top = 0;
//}
//int SeqStackSize(SeqStack* pst)
//{
//	assert(pst != NULL);
//	return pst->top;
//}

//链栈
typedef struct LinkStackNode
{
	ElemType data;
	struct LinkStackNode* link;
}LinkStackNode;

typedef LinkStackNode* LinkStack;
void LinkStackInit(LinkStack* pst);
void LinkStackPush(LinkStack* pst, ElemType x);
void LinkStackPop(LinkStack* pst);
ElemType LinkStackTop(LinkStack* pst);
void LinkStackShow(LinkStack* pst);
int LinkStackSize(LinkStack* pst);
void LinkStackDestory(LinkStack* pst);
//==========================================
void LinkStackInit(LinkStack* pst)
{
	assert(pst != NULL);
	*pst = NULL;
}
void LinkStackPush(LinkStack* pst, ElemType x)
{
	assert(pst != NULL);
	LinkStackNode *s = (LinkStackNode*)malloc(sizeof(LinkStackNode));
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
ElemType LinkStackTop(LinkStack* pst)
{
	assert(pst != NULL&&*pst!=NULL);

	return (*pst)->data;
}
void LinkStackShow(LinkStack* pst)
{
	assert(pst != NULL);
	LinkStackNode* p = *pst;

	while (p!= NULL)
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

#endif
