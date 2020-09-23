#ifndef _STACK_H_
#define _STACK_H_
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
#pragma warning(disable:4996)
#define SIZE 8
// 支持动态增长的栈
typedef int STDataType;
typedef struct Stack
{
	STDataType* _a;
	int _top;		// 栈顶
	int _capacity;  // 容量 
}Stack;
// 初始化栈 
void StackInit(Stack* ps);
// 入栈 
void StackPush(Stack* ps, STDataType data);
// 出栈 
void StackPop(Stack* ps);
// 获取栈顶元素 
STDataType StackTop(Stack* ps);
// 获取栈中有效元素个数 
int StackSize(Stack* ps);
// 检测栈是否为空，如果为空返回非零结果，如果不为空返回0 
int StackEmpty(Stack* ps);
// 销毁栈 
void StackDestroy(Stack* ps);
//扩容
void StackCheak();
//=================================================
//扩容
void StackCheak(Stack* ps)
{
	if (ps->_top >= ps->_capacity)
	{
		STDataType new_capacity = SIZE*2;
		STDataType* newps = (STDataType*)realloc(ps->_a, new_capacity * sizeof(STDataType));
		if (newps == NULL)
		{
			return;
		}
		ps->_a = newps;
		ps->_capacity = new_capacity;

	}
}
// 初始化栈 
void StackInit(Stack* ps)
{
	ps->_capacity = SIZE;
	ps->_a = (STDataType*)malloc(sizeof(STDataType)*ps->_capacity);
	assert(ps->_a != NULL);
	ps->_top = 0;
}
// 入栈 
void StackPush(Stack* ps, STDataType data)
{
	assert(ps != NULL);
	StackCheak(ps);
	ps->_a[ps->_top] = data;
	ps->_top++;
	printf("入栈成功!");
}
// 出栈 
void StackPop(Stack* ps)
{
	assert(ps != NULL);
	if (ps->_top == 0)
	{
		return;
	}
	ps->_top--;
}
// 获取栈顶元素 
STDataType StackTop(Stack* ps)
{
	assert(ps != NULL);
	return  ps->_a[ps->_top - 1];
}
// 获取栈中有效元素个数 
int StackSize(Stack* ps)
{
	return ps->_top;
}
// 检测栈是否为空，如果为空返回非零结果，如果不为空返回0 
int StackEmpty(Stack* ps)
{
	assert(ps != NULL);
	if (ps->_top == 0)
	{
		return 0;
	}
	else {
		return ps->_a[ps->_top-1];
	}
}
// 销毁栈 
void StackDestroy(Stack* ps)
{
	assert(ps);
	free(ps->_a);
	ps->_a = NULL;
	ps->_capacity = ps->_top = 0;
}
#endif
