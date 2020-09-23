#ifndef _STACK_H_
#define _STACK_H_
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
#pragma warning(disable:4996)
// 链式结构：表示队列 
typedef int QDataType;
typedef struct QListNode
{
	struct QListNode* _next;
	QDataType _data;
}QNode;

// 队列的结构 
typedef struct Queue
{
	QNode* _front; //头
	QNode* _rear;  //尾
}Queue;

// 初始化队列 
void QueueInit(Queue* q);
// 队尾入队列 
void QueuePush(Queue* q, QDataType data);
// 队头出队列 
void QueuePop(Queue* q);
// 获取队列头部元素 
QDataType QueueFront(Queue* q);
// 获取队列队尾元素 
QDataType QueueBack(Queue* q);
// 获取队列中有效元素个数 
int QueueSize(Queue* q);
// 检测队列是否为空，如果为空返回非零结果，如果非空返回0 
int QueueEmpty(Queue* q);
// 销毁队列 
void QueueDestroy(Queue* q);
//===================================================
// 初始化队列 
void QueueInit(Queue* q)
{
	q->_front=q->_rear = NULL;
	
}
// 队尾入队列 
void QueuePush(Queue* q, QDataType data)
{
	assert(q != NULL);
	QNode* s = (QNode*)malloc(sizeof(QNode));
	assert(s != NULL);
	s->_data = data;
	s->_next = NULL;
	if (q->_front == NULL)
	{
		q->_front = q->_rear = s;
	}
	else {
		q->_rear->_next = s;
		q->_rear = s;
	}
}
// 队头出队列 
void QueuePop(Queue* q)
{
	assert(q != NULL);
	
	if (q->_front != NULL)
	{
		QNode* p = q->_front;
		if (q->_front == q->_rear)
		{
			q->_front = q->_rear = NULL;
		}
		else {
			q->_front = p->_next;

		}
		free(p);
	}
}
// 获取队列头部元素 
QDataType QueueFront(Queue* q)
{
	assert(q != NULL);
	if (q->_front != NULL)
	{
		return  q->_front->_data;
	}
}
// 获取队列队尾元素 
QDataType QueueBack(Queue* q)
{
	assert(q != NULL);
	return q->_rear->_data;
}
// 获取队列中有效元素个数 
int QueueSize(Queue* q)
{
	assert(q != NULL);
	int size=0;
	while (q->_front != q->_rear)
	{
		size++;
		q->_front = q->_front->_next;
	}
	return size;
}
// 检测队列是否为空，如果为空返回非零结果，如果非空返回0 
int QueueEmpty(Queue* q)
{
	assert(q != NULL);
	if (q->_front == NULL)
	{
		return 0;
	}
	else {
		return q->_front->_data;
	}
}
// 销毁队列 
void QueueDestroy(Queue* q)
{
	assert(q != NULL);
	QNode* p = q->_front;
	while (p != NULL)
	{
		q->_front = p->_next;
		free(p);
		p = q->_front;
	}

}
#endif
