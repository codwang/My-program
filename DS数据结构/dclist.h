#ifndef _DCLIST_H_
#define _DCLIST_H_
#include"common.h"
#define ElemType int

typedef struct DCListNode
{
	ElemType data;
	DCListNode* next;
	DCListNode* prev;
}DCListNode;
typedef DCListNode* DCList;
void Init(DCList *phead);
DCList BuyNode(ElemType x);
void DCListShow(DCList phead);
void DCListNodepush_back(DCList* phead, ElemType x);
void DCListNodepush_front(DCList* phead, ElemType x);
void DCListNodepop_back(DCList* phead);
void DCListNodepop_front(DCList* phead);
void DCListNodeSort(DCList* phead);
ElemType DCListLength(DCList phead);
ElemType DCListNodegethead(DCList phead);
ElemType DCListNodegetback(DCList phead);
void DCListNodeClear(DCList* phead);
void DCListNodeDestroy(DCList* phead);
DCList DCListNodeFind_val(DCList phead, ElemType key);
void DCListNodeerase_val(DCList* phead, ElemType key);
void DCListNodeinsert_val(DCList* phead, ElemType key);
void DCListNodereverse(DCList* phead);
//=================================

DCList BuyNode(ElemType v=ElemType())
{
	DCListNode* s = (DCListNode*)malloc(sizeof(DCListNode));
	assert(s != NULL);
	s->data = v;
	s->next = s->prev = s;
	return s;
}
void Init(DCList* phead)
{
	*phead = BuyNode();

}
void DCListNodepush_back(DCList* phead, ElemType x)
{
	assert(phead != NULL);
	DCListNode* s = BuyNode(x);
	DCListNode* head = *phead;

	s->next = head;
	s->prev = head->prev; 

	head->prev->next = s; //s->prev->next=s
	head->prev = s;
}
void DCListShow(DCList phead)
{
	
	DCListNode* p = phead->next;
	if (p != NULL)
	{
		while (p != phead)
		{
			printf("%d->", p->data);
			p = p->next;
		}
		printf("Over!\n");
	}
	else {
		printf("Over!\n");
	}

}
void DCListNodepush_front(DCList* phead, ElemType x)
{
	assert(phead != NULL);
	DCListNode* s = BuyNode(x);
	DCListNode* head = *phead;
	s->next = head->next;
	s->prev = head;

	head->next->prev = s;
	head->next = s;


}
void DCListNodepop_back(DCList* phead)
{
	assert(phead != NULL);
	DCListNode* head = *phead;
	DCListNode* p = (*phead)->prev;
	if ((*phead)->next==*phead)
	{
		return;
	}
	p->prev->next = *phead;
	(*phead)->prev = p->prev;
	free(p);
}
void DCListNodepop_front(DCList* phead)
{
	assert(phead != NULL);
	DCListNode* head = *phead;
	DCListNode* p = (*phead)->next;
	if ((*phead)->next == *phead) //ÅÐ¿Õ
	{
		return;
	}
	(*phead)->next = p->next;
	p->next->prev = *phead;

}
void DCListNodeSort(DCList* phead)
{
	assert(phead != NULL);
	if (DCListLength(*phead) == 1)
	{
		return;
	}
	DCListNode* p = (*phead)->next;
	DCListNode* q = p->next;
	p->next = *phead;
	(*phead)->prev = p;
	while (q != *phead)
	{
		p = q;
		q = q->next;

		DCListNode* tmp = (*phead)->next;
		while (tmp != *phead && p->data > tmp->data)
		{
			tmp = tmp->next;
		}
		p->next = tmp;
		p->prev = tmp->prev;
		p->next->prev = p;
		p->prev->next = p;
	}
}
ElemType DCListLength(DCList phead)
{
	assert(phead != NULL);
	DCListNode* p = phead->next;
	size_t size = 0;
	while (p != phead)
	{
		size++;
		p = p->next;
	}
	return size;
}
ElemType DCListNodegethead(DCList phead)
{
	assert(phead!=NULL);
	assert(phead->next != phead);
	return phead->next->data;
}
ElemType DCListNodegetback(DCList phead)
{
	assert(phead != NULL);
	assert(phead->next != phead);
	return phead->prev->data;
}
void DCListNodeClear(DCList* phead)
{
	assert(phead != NULL);
	while ((*phead)->next != *phead)
	{
		DCListNodepop_back(phead);
	} 
	//DCListNode* p = (*phead)->next;
	//while (p != *phead)
	//{
	//	p->prev->next = p->next;
	//	p->next->prev = p->prev;
	//	free(p);
	//	p = (*phead)->next;//¸üÐÂp
	//}
}
void DCListNodeDestroy(DCList* phead)
{
	assert(phead != NULL);
	DCListNodeClear(phead);
	free(*phead);
	*phead = NULL;//Ô¤·ÀÒ°Ö¸Õë
}
DCList DCListNodeFind_val(DCList phead, ElemType key)
{
	DCListNode* p = phead->next;
	
		while (p!=phead&&p->data != key)
		{
			p = p->next;
		}
		if (p == phead)
		{
			return NULL;
		}
		return p;
	
}
void DCListNodeerase_val(DCList* phead, ElemType key)
{
	assert(phead != NULL);
	DCListNode* p = DCListNodeFind_val(*phead, key);
	if (p == NULL)
	{
		return;
	}
	p->prev->next = p->next;
	p->next->prev = p->prev;
	free(p);
}
void DCListNodeinsert_val(DCList* phead, ElemType x)
{
	assert(phead != NULL);
	DCListNode* p = (*phead)->next;
	while (p != *phead && x > p->data)
	{
		p = p->next;
	}
	DCListNode* s = BuyNode(x);
	s->next = p;
	s->prev = p->prev;
	s->prev->next = s;
	s->next->prev = s;

}
void DCListNodereverse(DCList* phead)
{
	assert(phead != NULL);
	if (DCListLength(*phead) == 1)
	{
		return;
	}
	DCListNode* p = (*phead)->next;
	DCListNode* q = p->next;
	p->next = *phead;
	(*phead)->prev = p;
	while (q != *phead)
	{
		p = q;
		q = q->next;

		p->next = (*phead)->next;
		p->prev = *phead;
		p->next->prev = p;
		p->prev->next = p;

	}
}

#endif