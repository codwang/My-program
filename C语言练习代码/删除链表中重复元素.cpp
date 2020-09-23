#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)
typedef struct ListNode {
    int val;
    struct ListNode *next;
 
}ListNode;
typedef ListNode* List;
void Init(List* pHead)
{
    *pHead = NULL;
}
ListNode* BuyNode(int x)
{
    ListNode* s = (ListNode*)malloc(sizeof(ListNode));
    s->val = x;
    s->next = NULL;
    return s;
}
void Push_back(List* pHead, int x)
{
    ListNode *s = BuyNode(x);
    ListNode* p = *pHead;
    if (p == NULL)
    {
       *pHead = s;
    }
    else
    {
        while (p->next != NULL)
        {
            p=p->next ;
        }
        p->next = s;
    }
   // if (p == NULL) //����Ľڵ�Ϊ��һ���ڵ�
//		*phead = s;
//	else {
//		while (p->next != NULL)
//		{
//			p=p->next;
//		}
//		p->next = s;
//	}
}
void Show(ListNode* pHead)
{
    ListNode* p = pHead;
    while (p != NULL)
    {
        printf("%d->", p->val);
        p = p->next;
    }
    printf("Over\n");
}
void Sort(List* pHead)
{

	ListNode* tmp = *pHead,*prev=NULL;
	ListNode* p = *pHead;
	ListNode* q = p->next;
	p->next = NULL;
	while (q != NULL)
	{
		p = q;
		q = q->next;
		//Ѱ�Ҳ����λ��
		while (tmp != NULL && p->val > tmp->val)
		{
			prev = tmp;
			tmp = tmp->next;
		}
		if (prev == NULL)
		{
			p->next = *pHead;
			*pHead = p;
		}
		else {
			p->next = prev->next;
			prev->next = p;
		}
		tmp = *pHead;
		prev = NULL;
	}
   
}
struct ListNode* insertionSortList(struct ListNode* head) {
    ListNode* tmp = head, * prev = NULL;
    ListNode* p = head;
    ListNode* q = p->next;
    p->next = NULL;
    while (q != NULL)
    {
        p = q;
        q = q->next;
        //Ѱ�Ҳ����λ��
        while (tmp != NULL && p->val > tmp->val)
        {
            prev = tmp;
            tmp = tmp->next;
        }
        if (prev == NULL)
        {
            p->next = head;
            head = p;
        }
        else {
            p->next = prev->next;
            prev->next = p;
        }
        tmp = head;
        prev = NULL;
    }
    return tmp;
}

ListNode* deleteDuplication(List* pHead)
{
    if (*pHead == NULL || (*pHead)->next == NULL)
        return *pHead;

    struct ListNode* tmp = NULL;
    struct ListNode* prev = *pHead;
    struct ListNode* p = prev->next;
    while (p != NULL)
    {
        //������ڽڵ㲻��ͬ������Ҫɾ�������½ڵ㣬����������
        if (prev->val != p->val)
        {
            tmp = prev;
            prev = p;
            p = p->next;
        }
        else
        {
            //������ڽڵ���ͬ
            //��n2ȥ�ҵ�һ������ͬ�Ľڵ�
            while (p!=NULL && p->val == prev->val)
            {
                p = p->next;
            }
            //�������ӣ����Ҫɾ���İ���ͷ�ڵ㣬�����ͷ�ڵ�
            if (tmp!=NULL)
                tmp->next = p;
            else
                *pHead = p;

            // ɾ�����ظ��Ľڵ�
            while (prev != p)
            {
                struct ListNode* next = prev->next;
                free(prev);
                prev = next;
            }
            //���½ڵ�
            prev = p;
            if (p!=NULL)
                p = p->next;
        }
    }

    return *pHead;
}



//int main()
//{
//    List list;
//    Init(&list);
//    int item = 0;
//    while (scanf("%d", &item) && item != -1)
//    {
//        Push_back(&list, item);
//    }
//    Sort(&list);
//    ListNode* p = deleteDuplication(&list);
//    Show(p);
//    system("pause");
//    return 0;
//}