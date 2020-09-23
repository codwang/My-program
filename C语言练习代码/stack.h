#ifndef _STACK_H_
#define _STACK_H_
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
#pragma warning(disable:4996)
#define SIZE 8
// ֧�ֶ�̬������ջ
typedef int STDataType;
typedef struct Stack
{
	STDataType* _a;
	int _top;		// ջ��
	int _capacity;  // ���� 
}Stack;
// ��ʼ��ջ 
void StackInit(Stack* ps);
// ��ջ 
void StackPush(Stack* ps, STDataType data);
// ��ջ 
void StackPop(Stack* ps);
// ��ȡջ��Ԫ�� 
STDataType StackTop(Stack* ps);
// ��ȡջ����ЧԪ�ظ��� 
int StackSize(Stack* ps);
// ���ջ�Ƿ�Ϊ�գ����Ϊ�շ��ط������������Ϊ�շ���0 
int StackEmpty(Stack* ps);
// ����ջ 
void StackDestroy(Stack* ps);
//����
void StackCheak();
//=================================================
//����
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
// ��ʼ��ջ 
void StackInit(Stack* ps)
{
	ps->_capacity = SIZE;
	ps->_a = (STDataType*)malloc(sizeof(STDataType)*ps->_capacity);
	assert(ps->_a != NULL);
	ps->_top = 0;
}
// ��ջ 
void StackPush(Stack* ps, STDataType data)
{
	assert(ps != NULL);
	StackCheak(ps);
	ps->_a[ps->_top] = data;
	ps->_top++;
	printf("��ջ�ɹ�!");
}
// ��ջ 
void StackPop(Stack* ps)
{
	assert(ps != NULL);
	if (ps->_top == 0)
	{
		return;
	}
	ps->_top--;
}
// ��ȡջ��Ԫ�� 
STDataType StackTop(Stack* ps)
{
	assert(ps != NULL);
	return  ps->_a[ps->_top - 1];
}
// ��ȡջ����ЧԪ�ظ��� 
int StackSize(Stack* ps)
{
	return ps->_top;
}
// ���ջ�Ƿ�Ϊ�գ����Ϊ�շ��ط������������Ϊ�շ���0 
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
// ����ջ 
void StackDestroy(Stack* ps)
{
	assert(ps);
	free(ps->_a);
	ps->_a = NULL;
	ps->_capacity = ps->_top = 0;
}
#endif
