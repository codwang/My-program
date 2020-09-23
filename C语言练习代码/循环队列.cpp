#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
#pragma warning(disable:4996)
typedef struct  {
	int* base;
	int front;
	int rear;
	int k;
} MyCircularQueue;
/** Checks whether the circular queue is empty or not. */
bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
	return  obj->front == obj->rear;

}

/** Checks whether the circular queue is full or not. */
bool myCircularQueueIsFull(MyCircularQueue* obj) {
	return ((obj->rear + 1) % (obj->k + 1) == obj->front);
}
/** Initialize your data structure here. Set the size of the queue to be k. */

MyCircularQueue* myCircularQueueCreate(int k) {
	MyCircularQueue* obj = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
	obj->base = (int*)malloc(sizeof(int) * (k+1));
	assert(obj->base != NULL);
	obj->front = obj->rear = 0;
	obj->k= k;
	return obj;
}

/** Insert an element into the circular queue. Return true if the operation is successful. */
bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
	assert(obj != NULL);
	if (myCircularQueueIsFull(obj))
	{
		return false;
	}
	obj->base[obj->rear] = value;
	obj->rear++;
	if (obj->rear == obj->k + 1)
	{
		obj->rear = 0;
	}
	return true;
}

/** Delete an element from the circular queue. Return true if the operation is successful. */
bool myCircularQueueDeQueue(MyCircularQueue* obj) {
	assert(obj != NULL);
	if(myCircularQueueIsEmpty(obj))
	{ 
		return false;
	}
	obj->front++;
	if (obj->front == obj->k + 1)
	{
		obj->front = 0;
	}
	return true;
}

/** Get the front item from the queue. */
int myCircularQueueFront(MyCircularQueue* obj) {
	assert(obj != NULL);
	if (myCircularQueueIsEmpty(obj))
	{
		return -1;
	}
	 return obj->base[obj->front];
}

/** Get the last item from the queue. */
int myCircularQueueRear(MyCircularQueue* obj) {
	assert(obj != NULL);
	if (myCircularQueueIsEmpty(obj))
	{
		return -1;
	}
	if (obj->rear == 0)
	{
		return obj->base[obj->k];
	}
	else {
		 return obj->base[obj->rear-1];
	}
}
void myCircularQueueFree(MyCircularQueue* obj) {
	assert(obj != NULL);
	free(obj->base);
	obj->base = NULL;
	free(obj);
	obj = NULL;
}
//int main()
//{
//	int k = 0;
//	scanf("%d", &k);
//	MyCircularQueue *obj= myCircularQueueCreate(k);
//	int value = 0;
//	scanf("%d", &value);
//	myCircularQueueEnQueue(obj, value);
//	system("pause");
//	return 0;
//}
