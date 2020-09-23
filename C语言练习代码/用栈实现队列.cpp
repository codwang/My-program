#include <stdlib.h>
typedef struct {
	int* base;
	int top;
	int capacity;
} MyQueue;
#define SIZE 8
bool myQueueEmpty(MyQueue* obj) {
	if (obj->top == 0)
	{
		return false;
	}
	else {
		return true;
	}
}
/** Initialize your data structure here. */

MyQueue* myQueueCreate() {
	MyQueue* obj = (MyQueue*)malloc(sizeof(MyQueue));
	obj->capacity = SIZE;
	obj->base = (int*)malloc(sizeof(int) * obj->capacity);
	obj->top = 0;
	return obj;
}

/** Push element x to the back of queue. */
void myQueuePush(MyQueue* obj, int x) {
	obj->base[obj->top++] = x;
}

/** Removes the element from in front of queue and returns that element. */
int myQueuePop(MyQueue* obj) {
	if (myQueueEmpty(obj))
	{
		return 0;
	}
	int front = obj->base[0];
	for ( int i = 0; i < obj->top-1; i++)
	{
		obj->base[i] = obj->base[i + 1];
	}
	obj->top--;
	return front;
}

/** Get the front element. */
int myQueuePeek(MyQueue* obj) {
	if (myQueueEmpty(obj))
	{
		return 0;
	}
	return obj->base[0];
}

/** Returns whether the queue is empty. */

void myQueueFree(MyQueue* obj) {
	free(obj->base);
	free(obj);
}