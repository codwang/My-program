#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<windows.h>
#pragma warning (disable:4996)
typedef char LinkQueueElemType;
typedef struct LinkQueueNode
{
	LinkQueueElemType data;
	LinkQueueNode* link;
}LinkQueueNode;
typedef struct LinkQueue
{
	LinkQueueNode* front;
	LinkQueueNode* tail;
}LinkQueue;

//初始化
void LinkQueueInit(LinkQueue*p)
{
	p->front = p->tail = NULL;
}
//入队
void LinkQueueEn(LinkQueue* p, LinkQueueElemType x)
{
	assert(p != NULL);
	LinkQueueNode* s =(LinkQueueNode*)malloc(sizeof(LinkQueueNode));
	assert(s != NULL);
	s->data = x;
	s->link = NULL;
	if (p->front == NULL)
	{
		p->front = p->tail=s;
	}
	else {
		p->tail->link = s;
		p->tail = s;
	}
}
//出队
void LinkQueueDe(LinkQueue* p)
{
	assert(p != NULL);
	LinkQueueNode* q = p->front;
	if (q != NULL)
	{
		p->front=q->link;
		free(q);
	}
}
//销毁队列
void LinkQueueDestory(LinkQueue* p)
{
	assert(p != NULL);
	LinkQueueNode* q = p->front;
	while (q!= NULL)
	{
		p->front = q->link;
		free(q);
		q = p->front;;
	}
}
//显示链式队列
void LinkQueueShow(LinkQueue *p)
{
	assert(p != NULL);
	LinkQueueNode* q = p->front;
	while (q!= NULL)
	{
		if (q->data != '#')
		{
			printf("%c ", q->data);
		}
		q = q->link;	
	}
	printf("\n");
}
//int main()
//{
//	LinkQueue p;
//	LinkQueueInit(&p);
//	LinkQueueElemType item;
//	while (scanf("%c", &item) && item != '!')
//	{
//		LinkQueueEn(&p,item);
//	}
//	LinkQueueShow(&p);
//	system("pause");
//	return 0;
//}