#ifndef _SCLIST_H_
#define _SCLIST_H_
#include"common.h"
#define ElemType int
//不带头结点的单循环链表
typedef struct SCListNode
{
	ElemType data;
	SCListNode* next;
}SCListNode;
typedef SCListNode* SCList;
void Init(SCList* phead);
void SCListNodepush_back(SCList* phead, ElemType x);
void SCListShow(SCList phead);
void SCListNodepush_front(SCList* phead, ElemType x);
//=================================
void Init(SCList* phead)
{
	*phead = NULL;
}
void SCListNodepush_back(SCList* phead, ElemType x)
{
	assert(phead != NULL);
	SCListNode* p = *phead;
	SCListNode* s = (SCListNode*)malloc(sizeof(SCListNode));
	s->data = x;
	
	//节点链接
	if (p == NULL)
	{
		*phead = s;
	}
	else {
		while (p->next != *phead)
		{
			p = p->next;
		}
		p->next = s;
	}
	s->next = *phead;

}
void SCListShow(SCList phead)
{
	
	SCListNode* p = phead;
	if (p != NULL)
	{
		while (p->next != phead)
		{
			printf("%d->", p->data);
			p = p->next;
		}
		printf("%d->", p->data);
	}
	printf("Over\n");
}
void SCListNodepush_front(SCList* phead, ElemType x)
{

}


#endif
