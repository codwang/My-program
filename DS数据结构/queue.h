#ifndef _QUEUE_H_
#define _QUEUE_H_
#include"common.h"
#define ElemType int
//链式队列
typedef struct LinkQueueNode  //节点类型
{
	ElemType data;
	struct LinkQueueNode* link;

}LinkQueueNode;
typedef  struct LinkQueue
{
	LinkQueueNode* head;//队头指针
	LinkQueueNode* tail;//队尾指针
} LinkQueue;

void LinkQueueInit(LinkQueue *pq);
void LinkQueueEn(LinkQueue* pq,ElemType x);//入队
void LinkQueueDe(LinkQueue* pq, ElemType x);//出队
void LinkQueueShow(LinkQueue* pq);
int LinkQueueFront(LinkQueue* pq);
int LinkQueueSize(LinkQueue* pq);
bool LinkQueueEmpty(LinkQueue* pq);
void LinkQueueDestory(LinkQueue* pq);
//========================================
void LinkQueueInit(LinkQueue *pq)    //初始化
{
	
	pq->head = pq->tail = NULL;
}
bool LinkQueueEmpty(LinkQueue* pq) //判空
{
	assert(pq != NULL);
	return pq->head == NULL;
}
void LinkQueueEn(LinkQueue* pq, ElemType x) //入队
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
int  LinkQueueFront(LinkQueue* pq) //取队头
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
//  顺序队列
#define QUEUE_DEFAULT_SIZE 8
//typedef struct SeqQueue
//{
//	ElemType* base;
//	int front;//队头
//	int rear; //队尾
//	int capacity;
//}SeqQueue;
//void SeqQueueInit(SeqQueue* psq,int sz= QUEUE_DEFAULT_SIZE);
//void SeqQueueEn(SeqQueue* psq, ElemType x);
//void SeqQueueDe(SeqQueue* psq, ElemType x);
//ElemType Sequeuefront(SeqQueue* psq);
//int SeqQueueSize(SeqQueue* psq);
//void SeqQueueShow(SeqQueue* psq);
//bool SeqQueueEmpty(SeqQueue* psq);
//void SeqQueueDestory(SeqQueue* psq);
////======================================
//void SeqQueueInit(SeqQueue* psq,int sz)
//{
//	assert(psq != NULL);
//	psq->capacity = sz > QUEUE_DEFAULT_SIZE ? sz : QUEUE_DEFAULT_SIZE;
//	psq->base = (ElemType*)malloc(sizeof(ElemType) * psq->capacity);
//	psq->front = psq->rear = 0;
//
//}
//void SeqQueueEn(SeqQueue* psq, ElemType x) //入队
//{
//	assert(psq!=NULL);
//	psq->base[psq->rear] = x;
//	psq->rear++;
//}
//void SeqQueueDe(SeqQueue* psq) //出队
//{
//	assert(psq != NULL);
//
//	psq->front++;
//}
//ElemType Sequeuefront(SeqQueue* psq)
//{
//	return psq->base[psq->front];
//}
//int SeqQueueSize(SeqQueue* psq)
//{
//	assert(psq != NULL);
//	return psq->rear-psq->front;
//}
//void SeqQueueShow(SeqQueue* psq)
//{
//	assert(psq!=NULL);
//	SeqQueue *p = psq;
//	if (p == NULL)
//	{
//		return;
//	}
//	for (int i = p->front; i < p->rear; i++)
//	{
//		printf("%d ", p->base[i]);
//	}
//	printf("\n");
//}
//bool SeqQueueEmpty(SeqQueue* psq)
//{
//	assert(psq != NULL);
//	return psq->front==psq->rear;
//}
//void SeqQueueDestory(SeqQueue* psq)
//{
//	assert(psq != NULL);
//	free(psq->base);
//	psq->base = NULL;
//	psq->rear = psq->front = 0;
//}
//循环顺序队列
//typedef struct CycleSeqQueue
//{
//	ElemType* base;
//	int capacity;
//	int front;
//	int rear;
//}CycleSeqQueue;
//void CycleSeqQueueInit(CycleSeqQueue* pcq, int sz= QUEUE_DEFAULT_SIZE);
//void CycleSeqQueueEn(CycleSeqQueue* pcq,ElemType x);
//void CycleSeqQueueDe(CycleSeqQueue* pcq);
//bool CycleSeqQueueIsFull(CycleSeqQueue* pcq);
//bool CycleSeqQueueEmpty(CycleSeqQueue* pcq);
//ElemType  CycleSeqQueueFront(CycleSeqQueue* pcq);
//int   CycleSeqQueueSize(CycleSeqQueue* pcq);
//void  CycleSeqQueueShow(CycleSeqQueue* pcq);
//void  CycleSeqQueueDestory(CycleSeqQueue* pcq);
////================================================================
//void CycleSeqQueueInit(CycleSeqQueue* pcq,int sz)
//{
//	
//	pcq->capacity = sz > QUEUE_DEFAULT_SIZE ? sz : QUEUE_DEFAULT_SIZE;
//	pcq->base = (ElemType*)malloc(sizeof(ElemType) * pcq->capacity+1);
//	pcq->front = pcq->rear = 0;
//}
//void CycleSeqQueueEn(CycleSeqQueue* pcq, ElemType x)
//{
//	assert(pcq != NULL);
//	if (CycleSeqQueueIsFull(pcq))
//	{
//		printf("队列已满，%d 不能入队\n");
//		return;
//	}
//	pcq->base[pcq->rear] = x;
//	pcq->rear = (pcq->rear + 1) % (pcq->capacity + 1);
//}
//void CycleSeqQueueDe(CycleSeqQueue* pcq)
//{
//	assert(pcq != NULL);
//	if (CycleSeqQueueEmpty(pcq))
//	{
//		printf("队列已空,不能出队!");
//		return;
//	}
//	pcq->front = (pcq->front + 1) % (pcq->capacity + 1);
//
//}
//bool CycleSeqQueueIsFull(CycleSeqQueue* pcq)
//{
//	assert(pcq != NULL);
//	return ((pcq->rear + 1) % (pcq->capacity + 1)) == pcq->front;
//}
//bool CycleSeqQueueEmpty(CycleSeqQueue* pcq)  //如果头和尾指针相等，则为 空
//{
//	assert(pcq != NULL);
//	return pcq->front == pcq->rear;
//}
//ElemType  CycleSeqQueueFront(CycleSeqQueue* pcq)
//{
//	assert(pcq != NULL);
//	assert(!CycleSeqQueueEmpty(pcq));
//	return pcq->base[pcq->front];
//}
//int  CycleSeqQueueSize(CycleSeqQueue* pcq)
//{
//	assert(pcq != NULL);
//	int size = 0;
//	for (int i = pcq->front; i != pcq->rear;)
//	{
//		size++;
//		i = (i + 1) % (pcq->capacity + 1);
//	}
//	return size;
//}
//void CycleSeqQueueShow(CycleSeqQueue* pcq)
//{
//	assert(pcq != NULL);
//	
//	for (int i = pcq->front; i != pcq->rear;)
//	{
//		printf("%d", pcq->base[i]);
//		i = (i + 1) % (pcq->capacity + 1);
//	}
//	printf("\n");
//}
//void  CycleSeqQueueDestory(CycleSeqQueue* pcq)
//{
//	assert(pcq != NULL);
//	free(pcq->base);
//	pcq->base = NULL;
//	pcq->capacity = pcq->front = pcq->rear = 0;
//}



#endif
