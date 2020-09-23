#ifndef _DLIST_H_
#define _DLIST_H_
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
#pragma warning(disable:4996)
typedef int LTDataType;
typedef struct ListNode
{
	LTDataType _data;
	struct ListNode* _next;
	struct ListNode* _prev;
}ListNode;

// 创建返回链表的头结点.
ListNode* ListCreate();
// 双向链表销毁
void ListDestory(ListNode* pHead);
// 双向链表打印
void ListPrint(ListNode* pHead);
// 双向链表尾插
void ListPushBack(ListNode* pHead, LTDataType x);
// 双向链表尾删
void ListPopBack(ListNode* pHead);
// 双向链表头插
void ListPushFront(ListNode* pHead, LTDataType x);
// 双向链表头删
void ListPopFront(ListNode* pHead);
// 双向链表查找
ListNode* ListFind(ListNode* pHead, LTDataType x);
// 双向链表在pos的前面进行插入
void ListInsert(ListNode* pos, LTDataType x);
// 双向链表删除pos位置的节点
void ListErase(ListNode* pos);
//==============================================
// 创建返回链表的头结点.
ListNode* ListCreate()
{
	ListNode* head = (ListNode*)malloc(sizeof(ListNode));
	assert(head != NULL);
	head->_next = head->_prev = head;
	return head;
}
// 双向链表销毁
void ListDestory(ListNode* pHead)
{

}
// 双向链表打印
void ListPrint(ListNode* pHead)
{
	assert(pHead != NULL);
	ListNode* p = pHead->_next;
	if (p == NULL)
	{
		printf("Over\n");
		return;

	}
	else {
		while (p != pHead)
		{
			printf("%d->", p->_data);
			p = p->_next;
		}
		printf("Over\n");
	}
}
// 双向链表尾插
void ListPushBack(ListNode* pHead, LTDataType x)
{
	pHead = ListCreate();
	ListNode*s= (ListNode*)malloc(sizeof(ListNode));
	assert(s != NULL);
	s->_data = x;
	s->_next = s->_prev = s;

	s->_next = pHead;
	s->_prev = pHead->_prev;

	pHead->_prev->_next = s;
	pHead->_prev = s;

}
// 双向链表尾删
void ListPopBack(ListNode* pHead)
{
	assert(pHead != NULL);
	ListNode* p = pHead->_prev;
	if (pHead->_next == pHead)
	{
		return;
	}
		p->_prev->_next = pHead;
		pHead->_prev = p->_prev;
		free(p);
	
}
// 双向链表头插
void ListPushFront(ListNode* pHead, LTDataType x)
{
	pHead = ListCreate();
	ListNode* s = (ListNode*)malloc(sizeof(ListNode));
	assert(s != NULL);
	s->_data = x;
	s->_next = s->_prev = s;

	s->_next = pHead->_next;
	s->_prev = pHead;

	pHead->_next->_prev = s;
	pHead->_next = s;
}
// 双向链表头删
void ListPopFront(ListNode* pHead)
{
	assert(pHead != NULL);
	ListNode* p = pHead->_next;
	if (pHead->_next == pHead)
	{
		return;
	}
	pHead->_next = p->_next;
	p->_next->_prev = pHead;
}
// 双向链表查找
ListNode* ListFind(ListNode* pHead, LTDataType x)
{
	assert(pHead != NULL);
	ListNode* p = pHead->_next;
	while (p->_next != pHead && p->_data != x)
	{
		p = p->_next;
	}
	return p;
}
// 双向链表在pos的前面进行插入
void ListInsert(ListNode* pos, LTDataType x)
{
	assert(pos != NULL);
	ListNode* s = (ListNode*)malloc(sizeof(ListNode));
	assert(s != NULL);
	s->_data = x;
	s->_next = s->_prev = s;

	s->_next = pos;
	s->_prev = pos->_prev;

	pos->_prev->_next = s;
	pos->_prev = s;
	
}
// 双向链表删除pos位置的节点
void ListErase(ListNode* pos)
{
	ListNode* pHead = ListCreate();
	assert(pos != NULL);
	if (pos->_next == pHead)
	{
		ListPopBack(pos);
	}
	pos->_prev->_next = pos->_next;
	pos->_next = pos->_prev;
	free(pos);
}
#endif 
