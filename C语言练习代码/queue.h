#ifndef _STACK_H_
#define _STACK_H_
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
#pragma warning(disable:4996)
// ��ʽ�ṹ����ʾ���� 
typedef int QDataType;
typedef struct QListNode
{
	struct QListNode* _next;
	QDataType _data;
}QNode;

// ���еĽṹ 
typedef struct Queue
{
	QNode* _front; //ͷ
	QNode* _rear;  //β
}Queue;

// ��ʼ������ 
void QueueInit(Queue* q);
// ��β����� 
void QueuePush(Queue* q, QDataType data);
// ��ͷ������ 
void QueuePop(Queue* q);
// ��ȡ����ͷ��Ԫ�� 
QDataType QueueFront(Queue* q);
// ��ȡ���ж�βԪ�� 
QDataType QueueBack(Queue* q);
// ��ȡ��������ЧԪ�ظ��� 
int QueueSize(Queue* q);
// �������Ƿ�Ϊ�գ����Ϊ�շ��ط�����������ǿշ���0 
int QueueEmpty(Queue* q);
// ���ٶ��� 
void QueueDestroy(Queue* q);
//===================================================
// ��ʼ������ 
void QueueInit(Queue* q)
{
	q->_front=q->_rear = NULL;
	
}
// ��β����� 
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
// ��ͷ������ 
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
// ��ȡ����ͷ��Ԫ�� 
QDataType QueueFront(Queue* q)
{
	assert(q != NULL);
	if (q->_front != NULL)
	{
		return  q->_front->_data;
	}
}
// ��ȡ���ж�βԪ�� 
QDataType QueueBack(Queue* q)
{
	assert(q != NULL);
	return q->_rear->_data;
}
// ��ȡ��������ЧԪ�ظ��� 
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
// �������Ƿ�Ϊ�գ����Ϊ�շ��ط�����������ǿշ���0 
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
// ���ٶ��� 
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
