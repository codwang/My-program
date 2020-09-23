//#ifndef _SEQLIST_H_
//#define _SEQLIST_H_
//#include"common.h"
//#define ElemType int
//typedef struct ListNode
//{
//	ElemType data;
//	ListNode* next;
//}ListNode;
//typedef ListNode* List;
//void ListInit(List* phead);
//void ListNodepush_back(List *phead,ElemType x);
//void ListShow(List phead);
//void ListNodepush_front(List* phead, ElemType x);
//size_t ListLength(List phead);
//void ListNodepop_back(List *phead);
//void ListNodepop_front(List *phead);
//ListNode *ListNodeFind_val(List phead, ElemType key);
//void ListNodeerase_val(List *phead, ElemType key);
//void ListNodeSort(List* phead);
//void ListNodeinsert_val(List* phead, ElemType x);
//int  ListNodegethead(List phead);
//int  ListNodegetback(List phead);
//void ListNodeClear(List* phead);
//void ListNodeDestroy(List* phead);
//void ListNodereverse(List* phead);
////====================================
//
//void ListInit(List* phead)
//{
//	*phead = NULL;
//}
//void ListShow(List phead)
//{
//	//assert(phead != NULL);
//	ListNode* p = phead;
//	while (p != NULL)
//	{
//		printf("%d->", p->data);
//		p = p->next;
//	}
//	printf("Over\n");
//}
//void ListNodepush_back(List* phead, ElemType x) //尾插
//{
//	assert(phead != NULL);
//	ListNode* s = (ListNode*)malloc(sizeof(ListNode));
//	assert(s != NULL);
//	s->data = x;
//	s->next = NULL;
//	//链接节点
//	ListNode* p = *phead;
//	if (p == NULL) //插入的节点为第一个节点
//		*phead = s;
//	else {
//		while (p->next != NULL)
//		{
//			p=p->next;
//		}
//		p->next = s;
//	}
//}
//void ListNodepush_front(List* phead, ElemType x) //头插
//{
//	assert(phead != NULL);
//	assert(phead != NULL);
//	ListNode* s = (ListNode*)malloc(sizeof(ListNode));
//	assert(s != NULL);
//	s->data = x;
//
//	s->next = *phead;
//	*phead = s;
//
//
//}
//size_t ListLength(List phead)
//{
//	assert(phead != NULL);
//	size_t size = 0;
//	ListNode* p = phead;
//	while (p != NULL)
//	{
//		size++;
//		p = p->next;
//	}
//	return size;
//}
//void ListNodepop_back(List* phead) //尾删
//{
//	assert(phead != NULL);
//	ListNode* p = *phead;
//	ListNode* prev = NULL; //前驱节点
//	if (p != NULL)
//	{
//		while (p->next != NULL)
//		{
//			prev = p;
//			p = p->next;
//		}
//		//需要考虑释放的节点是否为最后一个节点
//		if (prev == NULL) //前驱节点为空
//		{
//			*phead = NULL;
//		}
//		else {
//			prev->next = NULL;
//		}
//		free(p);
//	}
//}
//void ListNodepop_front(List* phead)//头删
//{
//	assert(phead != NULL);
//	ListNode* p = *phead;
//	if (p != NULL)
//	{
//	/*	if (p->next == NULL)
//		{
//			*phead = NULL;
//		}
//		else {
//			*phead = p->next;
//		}
//		free(p);*/
//		*phead = p->next;
//		free(p);   //不用考虑是否为最后一个节点
//	}
//}
//ListNode* ListNodeFind_val(List phead, ElemType key) //按值查找
//{
//	ListNode* p = phead;
//	/*while (p != NULL)
//	{
//		if (p->data == key)
//		{
//			return p;
//		}
//		p=p->next;
//	}*/
//	while (p != NULL && p->data != key)
//	{
//		p = p->next;
//	}
//	return p;
//	//return NULL;
//}
//void ListNodeerase_val(List* phead, ElemType key) //按值删除
//{
//	assert(phead != NULL);
//	ListNode* p = ListNodeFind_val(*phead, key);
//	if (p == NULL)
//	{
//		return;
//	}
//		ListNode* prev = *phead;
//		while (prev!=p&&prev->next!=p)
//		{
//			prev = prev->next;
//		}
//		if (prev == p)
//		{
//			*phead = p->next;
//		}
//		else {
//			prev->next = p->next;
//		}
//		free(p);
//
//	//ListNode* p = ListNodeFind_val(*phead, key);
//	//if (p == NULL)
//	//{
//	//	return;
//	//}
//	//if (p->next == NULL)
//	//{
//	//	ListNodepop_back(phead);
//	//}
//	//else {
//	//	ListNode* q = p->next;
//	//	p->data = q->data;
//	//	p->next = q->next;
//	//	free(q);
//	//}
//}
//void ListNodeSort(List* phead) //排序
//{
//	assert(phead != NULL);
//	if (ListLength(*phead) <= 1)
//	{
//		return;
//	}
//	ListNode* tmp = *phead,*prev=NULL;
//	ListNode* p = *phead;
//	ListNode* q = p->next;
//	p->next = NULL;
//	while (q != NULL)
//	{
//		p = q;
//		q = q->next;
//		//寻找插入的位置
//		while (tmp != NULL && p->data > tmp->data)
//		{
//			prev = tmp;
//			tmp = tmp->next;
//		}
//		if (prev == NULL)
//		{
//			p->next = *phead;
//			*phead = p;
//		}
//		else {
//			p->next = prev->next;
//			prev->next = p;
//		}
//		tmp = *phead;
//		prev = NULL;
//	}
//
//	
//}
//void ListNodeinsert_val(List* phead, ElemType x) //按值插入
//{
//	assert(phead != NULL);
//	ListNode* s = (ListNode*)malloc(sizeof(ListNode));
//	assert(s != NULL);
//	s->data = x;
//
//	ListNode* p = *phead,*prev=NULL;
//	while (p != NULL && x > p->data)
//	{
//		prev = p;
//		p = p->next;
//	}
//
//	if (prev == NULL) //如果前驱为空
//	{
//		s->next = *phead;
//		*phead = s;
//	}
//	else {
//		s->next = prev->next;
//		prev->next = s;
//	}
//}
//int ListNodegethead(List phead) //获取头部元素
//{
//	assert(phead != NULL);
//	return phead->data;
//}
//int ListNodegetback(List phead)//获取尾部元素
//{
//	assert(phead != NULL);
//	ListNode* p = phead;
//	while (p ->next!= NULL)
//	{
//		p = p->next;
//	}
//	return p->data;
//}
//void ListNodeClear(List* phead)//清空链表
//{
//	assert(phead != NULL);
//	ListNode* p = NULL;
//	while (*phead != NULL)
//	{
//		p = *phead;
//		*phead = p->next;
//		free(p);
//	}
//}
//void ListNodeDestroy(List* phead)//摧毁链表
//{
//	
//	ListNodeClear(phead);
//}
//void ListNodereverse(List* phead)
//{
//	assert(phead != NULL);
//	if (ListLength(*phead) <= 1)
//	{
//		return;
//	}
//	ListNode* p = *phead;
//	ListNode* q = p->next;
//	p->next = NULL;
//
//	while (q != NULL)
//	{
//		p = q;
//		q = q->next;
//		p->next = *phead;
//		*phead = p;
//	}
//}
//
//#endif
