#ifndef _SLIST_H_
#define _SLIST_H_
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
#pragma warning(disable:4996)
typedef int SLTDateType;
typedef struct SListNode
{
	SLTDateType data;
	struct SListNode* next;
}SListNode;
// 动态申请一个节点
SListNode* BuySListNode(SLTDateType x);
void SListInit(SListNode** pplist);
void  SListPrint(SListNode* plist);

void SListPushBack(SListNode** pplist, SLTDateType x);

void SListPushFront(SListNode** pplist, SLTDateType x);

void SListPopBack(SListNode** pplist);

void SListPopFront(SListNode** pplist);

SListNode* SListFind(SListNode* plist, SLTDateType x);

void SListInsertAfter(SListNode* pos, SLTDateType x);

void SListEraseAfter(SListNode* pos);

void SListDestory(SListNode* plist);
//=========================================================
void SListInit(SListNode** pplist)
{
	*pplist = NULL;
}
SListNode* BuySListNode(SLTDateType x)  // 动态申请一个节点
{
	SListNode* s = ( SListNode*)malloc(sizeof( SListNode));
	assert(s != NULL);
	s->data = x;
	s->next = NULL;
	return s;
}
void SListPrint(SListNode* plist)  // 单链表打印
{
	
	SListNode* p = plist;
	if (p == NULL)
	{
		return ;
	}
	while (p != NULL)
	{
		printf("%d->", p->data);
		p = p->next;
	}
	printf("Over\n");
}
void SListPushBack(SListNode** pplist, SLTDateType x)// 单链表尾插
{
	assert(pplist != NULL);
	SListNode* p = *pplist;
	SListNode* s = BuySListNode(x);
	if (p == NULL) //判断尾插是否为第一个节点
	{
		*pplist = s;
	}
	else {
		while (p->next != NULL)
		{
			p = p->next;
		}
		p->next = s;
	}
}
void SListPushFront(SListNode** pplist, SLTDateType x)// 单链表的头插
{
	assert(pplist != NULL);
	SListNode* s = BuySListNode(x);
	s->next = *pplist;
	*pplist = s;
}
void SListPopBack(SListNode** pplist) 
{
	assert(pplist != NULL);
	SListNode* p = *pplist;
	SListNode* prev = NULL;
	while (p->next != NULL)
	{
		prev = p;
		p = p->next;
	}
	if (prev == NULL)
	{
		*pplist = NULL;
	}
	else {
		prev->next = NULL;
	}
	free(p);
}
void SListPopFront(SListNode** pplist)
{
	assert(pplist != NULL);
	SListNode* p = *pplist;
	if (p != NULL)
	{
		*pplist = p->next;
		free(p);
	}
}
SListNode* SListFind(SListNode* plist, SLTDateType x)
{
	assert(plist != NULL);
	SListNode* p = plist;
	while (p != NULL && p->data != x)
	{
		p = p->next;
	}
	return p;
}
void SListInsertAfter(SListNode* pos, SLTDateType x)
{
	assert(pos != NULL);
	SListNode* p = pos->next;
	SListNode* s = BuySListNode(x);
	pos->next = s;
	s->next =p->next;
}
void SListEraseAfter(SListNode* pos)
{
	assert(pos != NULL);
	SListNode* p = pos->next;
	pos->next = p->next;
	free(p);
}
void SListDestory(SListNode* plist)
{
	assert(plist != NULL);
	SListNode* p = NULL;
	while (plist!= NULL)
	{
		p = plist;
		plist = p->next;
		free(p);
	
	}
}
#endif 
