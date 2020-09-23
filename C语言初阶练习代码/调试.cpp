//#include<stdio.h>
//#include<windows.h>
//#include<stdlib.h>
//#include<assert.h>
//#pragma warning(disable:4996)
//int main()
//{
//	//unsigned char d = -10;
//	char d = -10;
//	//printf("%u\n", d);//无符号数
//	printf("%d\n", d);
//
//	//char arr[32] = "we are happy";
//	//
//	//strtok(arr," ");
//	//strcat(arr, "%20");
//	////strtok(NULL, " ");
//	//printf("%s",arr);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<windows.h>
//#include<assert.h>
//
// typedef struct ListNode
//{
//	int data;
//	ListNode* next;
//}ListNode;
// typedef ListNode* List;
//void ListNodeInit(List* phead)
//{
//	assert(phead != NULL);
//	*phead = NULL;
//}
//void ListNodeInit2(List *phead)
//{
//	assert(phead != NULL);
//	*phead = (List)malloc(sizeof(ListNode));
//	assert(*phead != NULL);
//	(*phead)->data = NULL;
//	(*phead)->next = NULL;
//}
//void ListNodeCreateheadhead(List* phead)//带头结点尾插
//{
//	assert(phead != NULL);
//	ListNode* p = *phead;
//	for (int i = 1; i <= 10; i++)
//	{
//		List s = (List)malloc(sizeof(ListNode));
//		assert(s != NULL);
//		s->data = i;
//		s->next = NULL;
//
//		p->next = s;
//		p = s;
//	}
//}
//void ListNodehead_tail(List* phead)//带头结点头插
//{
//	assert(phead != NULL);
//	for (int i = 1; i <= 10; i++)
//	{
//		List s = (List)malloc(sizeof(ListNode));
//		assert(s != NULL);
//		s->data = i;
//		s->next = NULL;
//
//		s->next = (*phead)->next;
//		(*phead)->next = s;
//	}
//
//}
//void ListNodeCreate(List *phead) //尾插
//{
//	     assert(phead!=NULL);
//		 *phead = (List)malloc(sizeof(ListNode));
//		 assert(*phead!=NULL);
//		 (*phead)->data = 1;
//	     (*phead)->next = NULL;
//		 List p = *phead;
//		 for (int i = 2; i <= 10; i++)
//		 {
//			 List s = (List)malloc(sizeof(ListNode));
//			 assert(s != NULL);
//			 s->data = i;
//			 s->next = NULL;
//			 p->next = s;
//			 p = s;
//		 }
//}
//void ListNodeCreate_head(List*phead) //头插
//{
//	assert(phead!=NULL);
//	*phead = (List)malloc(sizeof(ListNode));
//	assert(*phead!=NULL);
//	(*phead)->data = 1;
//	(*phead)->next = NULL;
//	//ListNode* p = *phead;
//	for (int i = 2; i <= 10; i++)
//	{
//		ListNode* s = (List)malloc(sizeof(ListNode));
//		assert(s != NULL);
//		s->data = i;
//		s->next = NULL;
//		s->next = *phead;
//		*phead = s;
//	}
//}
//void ListShow(List phead)
//{
//	List p = phead->next;
//	while (p != NULL)
//	{
//		printf("%d->", p->data);
//		p = p->next;
//	}
//	printf("Over\n");
//}
//
//int main()
//{
//	List mylist;
//	//ListNodeInit(&mylist);
//	//ListNodeCreate(&mylist);
//	//ListNodeCreate_head(&mylist);
//	ListNodeInit2(&mylist);
//	//ListNodeCreateheadhead(&mylist);
//	ListNodehead_tail(&mylist);
//	ListShow(mylist);
//	
//	system("pause");
//	return 0;
//}