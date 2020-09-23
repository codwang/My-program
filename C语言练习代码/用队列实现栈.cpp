//#include <stdlib.h>
//typedef struct {
//	int* data;
//	int front;
//	int rear;
//	int capacity;
//} MyStack;
//#define SIZE 8
///** Initialize your data structure here. */
//
//MyStack* myStackCreate() {
//	MyStack* obj = (MyStack*)malloc(sizeof(MyStack));
//	obj->capacity = SIZE;
//	obj->data = (int*)malloc(sizeof(int) * obj->capacity);
//	obj->front = obj->rear = 0;
//	return obj;
//}
//
///** Push element x onto stack. */
//void myStackPush(MyStack* obj, int x) {
//	obj->data[obj->rear++] = x;
//}
//
///** Removes the element on top of the stack and returns that element. */
//int myStackPop(MyStack* obj) {
//	if(myStackEmpty(obj))
//	{
//		return -1;
//	}
//	int Rear = obj->data[obj->rear - 1];
//	obj->rear--;
//	return Rear;
//}
//
///** Get the top element. */
//int myStackTop(MyStack* obj) {
//	if (myStackEmpty(obj))
//	{
//		return -1;
//	}
//	return obj->data[obj->rear - 1];
//}
//
///** Returns whether the stack is empty. */
//bool myStackEmpty(MyStack* obj) {
//	if (obj->front == obj->rear)
//	{
//		return true;
//	}
//	return false;
//}
//
//void myStackFree(MyStack* obj) {
//	free(obj->data);
//	free(obj);
//}