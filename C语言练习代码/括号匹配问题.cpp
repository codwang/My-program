#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<windows.h>
#include<stdbool.h>
typedef char ElemType;
typedef struct LinkStackNode
{
	ElemType data;
	struct LinkStackNode* link;
}LinkStackNode;

typedef LinkStackNode* LinkStack;
void LinkStackInit(LinkStack* pst);
void LinkStackPush(LinkStack* pst, ElemType x);
void LinkStackPop(LinkStack* pst);
ElemType LinkStackTop(LinkStack* pst);
int LinkStackSize(LinkStack* pst);
void LinkStackDestory(LinkStack* pst);
//==========================================
void LinkStackInit(LinkStack* pst)
{
	assert(pst != NULL);
	*pst = NULL;
}
void LinkStackPush(LinkStack* pst, ElemType x)
{
	assert(pst != NULL);
	LinkStackNode* s = (LinkStackNode*)malloc(sizeof(LinkStackNode));
	assert(s != NULL);
	s->data = x;

	s->link = *pst;
	*pst = s;


}
void LinkStackPop(LinkStack* pst)
{
	assert(pst != NULL);
	if (*pst != NULL)
	{
		LinkStackNode* p = *pst;
		*pst = p->link;
		free(p);
	}
}
ElemType LinkStackTop(LinkStack* pst)
{
	assert(pst != NULL && *pst != NULL);

	return (*pst)->data;
}

void LinkStackDestory(LinkStack* pst)
{
	assert(pst != NULL);
	LinkStackNode* p = *pst;
	while (p != NULL)
	{
		*pst = p->link;
		free(p);
		p = *pst;
	}
}
bool LinkStackEmpty(LinkStack* pst)
{
	assert(pst != NULL);
	return *pst == NULL;
}
bool isValid(char* s) {
	if (s == NULL)
	{
		return false;
	}
	if (*s == '\0')
	{
		return true;
	}
	LinkStack st;
	LinkStackInit(&st);
	while (*s != '\0')
	{
		if (*s == '{' || *s == '[' || *s == '(')
		{
			LinkStackPush(&st, *s);
		}
		else {
			if (LinkStackEmpty(&st))
			{
				return false;
			}
			char top = LinkStackTop(&st);
			if ((*s == '}' && top != '{') || (*s == ']' && top != '[') || (*s == ')' && top != '('))
			{
				return false;
			}
			LinkStackPop(&st);
		}
		s++;
	}
	bool flag = LinkStackEmpty(&st);
	LinkStackDestory(&st);
	return flag;
}
