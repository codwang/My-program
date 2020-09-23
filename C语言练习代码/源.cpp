//#include<stdio.h>
//#include<windows.h>
//#pragma warning(disable:4996)
//int mymax(int x,int y)
//{
//	int max = 0;
//	scanf("%d %d", &x, &y);
//	max = x > y ? x : y;
//	return max;
//}
//int main()
//{
//	int num1=0 , num2=0 ;
//	
//	 int max=mymax(num1,num2);
//	printf("%d\n", max);
//	system("pause");
//	return 0;
//}
//
//
//#include<stdio.h>
//#include<windows.h>
//#pragma warning(disable:4996)
//void show(int n)
//{
//	//上半部
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j=0; j < n - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//下半部
//	for (i = 0; i < n - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * n - 3 - 2 * i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	show(num);
//    system("pause");
//	return 0;
//}
//  1 2 8 9
//  2 4 9 12
//  4 7 10 13
//  6 8 11 15
#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<assert.h>
#pragma warning(disable:4996)
#define SIZE 10000
#define F(X,Y) ((X)+(Y))
#define CIR(r) r*r
#pragma pack(2)
int Find(int a[4][4], int x)
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (x == a[i][j])
			{
				return 1;
				break;
			}
		}
	}
	return -1;
}
void Fib(int*a)
{
	int i = 0;
	for (i = 2; i < SIZE; i++)
	{
		a[i] = a[i - 2] + a[i - 1];
	}
}
int Count(unsigned int x)
{
	int count = 0;
	for (int i = 0; i < 31; i++)
	{
		if (x >> i & 1 == 1)
		{
			count++;
		}
	 }
	return count;
}
int fun(int x, int y)
{
	static int m = 0;
	static int i = 2;
	i += m + 1;
	m = i + x + y;
	return m;
}
struct tag1 {
	short a;
	char d;
	long b;
	long c;
};
struct tag2 {
	long b;
	short c;
	char d;
	long a;
};
struct tag3 {
	short c;
	long b;
	char d;
	long a;
};
int Change(int* px)
{
	int y = 8;
	y = y - *px;
	px = &y;
	return 0;
}
int fun(int x)
{
	int count = 0;
	while (x)
	{
		count++;
		x = x & (x - 1);
	}
	return count;
}
unsigned long a = 0;
void Init(unsigned long b)
{
	b = 0x01;
	return;
}
void Test()
{
	Init(a);
	printf("%lu", a);
	return;
}
typedef struct LinkNode
{
	int data;
	LinkNode* next;
}LinkNode;
typedef LinkNode* Link;
void LinkInit(Link* phead)
{
	*phead = NULL;
}
LinkNode* BuyNode(int x)
{
	LinkNode* s = (LinkNode*)malloc(sizeof(LinkNode));
	s->data = x;
	s->next = NULL;
	return s;
}
void LinkPush(Link* phead, int x)
{
	LinkNode* s = BuyNode(x);
	if (*phead == NULL)
	{
		*phead = s;
	}
	else {
		LinkNode* p = *phead;
		while (p->next!= NULL)
		{
			p = p->next;	
		}
		p->next = s;
		p = s;
	}
}
void Show(Link phead)
{
	if (phead == NULL)
	{
		printf("Over!");
	}
	else {
		LinkNode* p = phead;
		while (p != NULL)
		{
			printf("%d->", p->data);
			p = p->next;
			
		}
		printf("Over!");
	}
}
int Size(Link phead)
{
	int count=0;
	if (phead != NULL)
	{
		LinkNode* p = phead;
		while (p!= NULL)
		{
			count++;
			p = p->next;
		}
	}
	return count;
}
void Node(Link phead, int k,int size)
{
	LinkNode* p = phead;
	int i = size - k ;
	while (i>0&&p->next!=NULL)
	{
		p = p->next;
		i--;
	}
	printf("%d\n", p->data);
}
void reverse(Link *phead)
{
	if (*phead == NULL || (*phead)->next == NULL)
	{
		return;
	}
	LinkNode* p, * prev;
	p = (*phead)->next;
	(*phead)->next = NULL;
	while (p != NULL)
	{
		prev = p->next;
		p->next = *phead;
		*phead = p;
		p = prev;
	}
}
int  fun1(int a, int b)
{
	if (a > b)
	{
		return (a + b);
	}
	else {
		return (a - b);
	}
}
int f(int a)
{
	int b = 0;
	static int c = 3;
	a = b++, c++;
	return (a);
}
int x = 3;
void inc()
{
	static int x = 1;
	x *= (x + 1);
	printf("%d\n", x);
	return;
}
//int main()
//{
//
//	//int i;
//	//for (i = 1; i < x; i++)
//	//{
//	//	inc();
//	//}
//	/*int a = 2, i, k;
//	for (i = 0; i < 2; i++)
//	{
//		k = f(a++);
//	}
//	printf("%d\n", k);*/
//	/*int x=3,y=8,z=6,r;
//     r=fun1(fun1(x,y),2*z);
//	printf("%d\n",r );*/
//	/*Link list;
//	LinkInit(&list);
//	int item;
//	printf("请输入要插入的值:");
//	while (scanf("%d", &item) && item != -1)
//	{
//		LinkPush(&list, item);
//	}
//	Show(list);
//	printf("\n");
//	reverse(&list);
//	Show(list);*/
//	//printf("\n");
//	//int size = Size(list);
//	//printf("%d",Size(list));
//	//int k;
//	//printf("请输入k的值:");
//	//scanf("%d", &k);
//	//printf("倒数第%d个元素为:\n",k);
//	//Node(list, k,size);
//	//Test();
//	//int a = 1;
//	//int b = 2;
//	//int t;
//	//t = CIR(a + b);
//	//printf("%d\n", t);
//	//printf("%d\n", fun(2019));
//	/*char arr[2][4];
//	strcpy((char*)arr, "you");
//	strcpy(arr[1], "me");
//	arr[0][3] = '&';
//	printf("%s\n", arr);*/
//	//int xx = 3;
//	//int* py = &xx;
//	//Change(py);
//	//printf("%d\n", *py);
//	// char p[100] = "abc defgx yz";
//	//const char *ss = "%20";
//	//
//	//char*s = strtok(p, " ");
//	// //char *s1=strtok(NULL, " ");
//	// char* s2 =strtok(NULL, " ");
//	//int n2 = strlen(s);
//	//push(p, n1, s, n2);
//	//printf("%s\n", s);
//	// strcat(s1, ss);
//	//printf("%s\n", s1);
//	//printf("%s\n", s2);
//	
//	//int a = 5;
//	//if (a = 0)
//	//{
//	//	printf("%d", a - 10);
//	//}
//	//else {
//	//	printf("%d", a++);
//	//}
//	/*double** a[3][4];
//	printf("%d", sizeof(char *));*/
//	/*struct tag1 st1;
//	struct tag2 st2;
//	struct tag3 st3;
//	printf("%d %d %d", sizeof(st1), sizeof(st2), sizeof(st3));*/
//
//	/*int i = 1, sum = 0;
//	while (i < 10)
//	{
//		sum = sum + 1;
//		i++;
//	}
//	printf("i=%d,sum=%d", i, sum);*/
//	/*int x;
//	x = 5 > 1+ 2 && 2 || 2 * 4 < 4 - !0;
//	printf("%d", x);*/
//	/*int a = 3, b = 4;
//	printf("%d\n", F(a++, b++));*/
//	//int  j = 4;
//	//int m = 1;
//	//int k;
//	//k = fun(j, m);
//	//printf("%d,", k);
//	//k = fun(j, m);
//	//printf("%d\n", k);
//
//	/*unsigned int x;
//	scanf("%u", &x);
//	printf("%d\n", Count(x));*/
//
//	//int n = 0;
//	///*int a[10000];
//	//a[0] = 1, a[1] = 1;*/
//	//int* a = (int*)malloc(sizeof(int) * SIZE);
//	//a[0] = 1, a[1] = 1;
//	//printf("请输入n的值:");
//	//scanf("%d", &n);
//	//Fib(a);
//	//printf("%d\n", a[n]);
//	//free(a);
//	int a[4][4];
//	int x = 0;
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	printf("输入要查找的数:");
//	scanf("%d", &x);
//	int ret=Find(a, x);
//	if (ret == 1)
//	{
//		printf("查找成功");
//	}
//	else {
//		printf("查找失败");
//	}
//	//for (int i = 0; i < 4; i++)
//	//{
//	//	for (int j = 0; j < 4; j++)
//	//	{
//	//		printf("%d ", a[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//	return 0;
//	system("pause");
//}