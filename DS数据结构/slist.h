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
//void ListNodepush_back(List* phead, ElemType x) //β��
//{
//	assert(phead != NULL);
//	ListNode* s = (ListNode*)malloc(sizeof(ListNode));
//	assert(s != NULL);
//	s->data = x;
//	s->next = NULL;
//	//���ӽڵ�
//	ListNode* p = *phead;
//	if (p == NULL) //����Ľڵ�Ϊ��һ���ڵ�
//		*phead = s;
//	else {
//		while (p->next != NULL)
//		{
//			p=p->next;
//		}
//		p->next = s;
//	}
//}
//void ListNodepush_front(List* phead, ElemType x) //ͷ��
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
//void ListNodepop_back(List* phead) //βɾ
//{
//	assert(phead != NULL);
//	ListNode* p = *phead;
//	ListNode* prev = NULL; //ǰ���ڵ�
//	if (p != NULL)
//	{
//		while (p->next != NULL)
//		{
//			prev = p;
//			p = p->next;
//		}
//		//��Ҫ�����ͷŵĽڵ��Ƿ�Ϊ���һ���ڵ�
//		if (prev == NULL) //ǰ���ڵ�Ϊ��
//		{
//			*phead = NULL;
//		}
//		else {
//			prev->next = NULL;
//		}
//		free(p);
//	}
//}
//void ListNodepop_front(List* phead)//ͷɾ
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
//		free(p);   //���ÿ����Ƿ�Ϊ���һ���ڵ�
//	}
//}
//ListNode* ListNodeFind_val(List phead, ElemType key) //��ֵ����
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
//void ListNodeerase_val(List* phead, ElemType key) //��ֵɾ��
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
//void ListNodeSort(List* phead) //����
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
//		//Ѱ�Ҳ����λ��
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
//void ListNodeinsert_val(List* phead, ElemType x) //��ֵ����
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
//	if (prev == NULL) //���ǰ��Ϊ��
//	{
//		s->next = *phead;
//		*phead = s;
//	}
//	else {
//		s->next = prev->next;
//		prev->next = s;
//	}
//}
//int ListNodegethead(List phead) //��ȡͷ��Ԫ��
//{
//	assert(phead != NULL);
//	return phead->data;
//}
//int ListNodegetback(List phead)//��ȡβ��Ԫ��
//{
//	assert(phead != NULL);
//	ListNode* p = phead;
//	while (p ->next!= NULL)
//	{
//		p = p->next;
//	}
//	return p->data;
//}
//void ListNodeClear(List* phead)//�������
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
//void ListNodeDestroy(List* phead)//�ݻ�����
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
