//#include<stdio.h>
//#include<Windows.h>
//void Show()
//{
//	int i, j;
//	int num = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			
//			
//				num = i * j;
//				printf("%d*%d=%d\t", j, i, num);
//				Sleep(100);
//				
//			
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	//乘法表 
//	Show();
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//#pragma warning (disable:4996)
//int Fibonacci(int n)
//{
	//求斐波那契数列
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fibonacci(n - 1) + Fibonacci(n - 2);
//	}
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int index=Fibonacci(num);
//	printf("%d\n", index);
//	system("pause");
//	return 0;
//}
#include<stdio.h>
#include<windows.h>
#include<stdbool.h>
#pragma warning (disable:4996)
//int Strlen(  char *arr)
//{
//	
//	if (*arr != '\0')
//	{
//		return 1 + Strlen(arr+1);
//	}
//}
//int fun1(const char* s)
//{
//	const char* p = s;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	return(p - s);
//}
//void fun(int x, int y, int* c, int* d)
//{
//	*c = x + y;
//	*d = x - y;
//}
//int f(int x, int y)
//{
//	return (x & y) + ((x ^ y) >> 1);
//}
//void GetNumber(int a[],int num)
//{
//	int* arr = (int*)malloc(sizeof(int) * num);
//	int i = 0,j=0;
//	int count = 0;
//	while (i < num)
//	{
//		int k = a[i];
//		for (j = 0; j < num; j++)
//		{
//			if (k == a[j])
//			{
//				count++;
//			}
//		}
//		arr[i] = count;
//		count = 0;
//		i++;
//	}
//	for (int z = 0; z < num; z++)
//	{
//		if (arr[z] == 1)
//		{
//			printf("%d ", a[z]);
//		}
//	}
//	free(arr);
//}
//void GetBase(char arr[], int num)
//{
//	int i = 0, j = 0;
//	int flag = 0;
//	while (i < num)
//	{
//		char k = arr[i];
//		j = i + 1;
//		while (j < num)
//		{
//			if (k == arr[j])
//			{
//				flag = 1;
//				break;
//			}
//			j++;
//		}
//		i++;
//		if (flag == 1)
//		{
//			printf("%c ", k);
//			break;
//		}
//	}
//}
#define StackType char
#define SIZE 10
typedef struct LinkNode
{
	StackType data;
	LinkNode* next;
}LinkNode;
void LinkNodeInit(LinkNode** phead)
{
	*phead = NULL;
}
void LinkNodeShow(LinkNode* phead)
{
	LinkNode* p = phead;
	if (p != NULL)
	{
		while (p->next != NULL)
		{
			printf("%c", p->data);
			p = p->next;
		}
	}
	//printf("Over!");
}
int  LinkNodeSize(LinkNode* phead)
{
	int size = 0;
	LinkNode* p = phead;
	if (p != NULL)
	{
		while (p->next != NULL)
		{
			size++;
			p = p->next;
		}
	}
	return size;
}
LinkNode* Midaddress(LinkNode* phead)
{
	LinkNode* p = phead;
	int size = LinkNodeSize(phead);
	int mid = size / 2;
	if ( phead==NULL||phead->next == NULL)
	{
		return phead;
	}
	while (mid > 0)
	{
		p = p->next;
		mid--;
	}
	return p;
}
//bool Inc(SeqList* p, int new_capacity)
//{
//	StackType* new_base = (StackType*)realloc(p->base, sizeof(StackType) * new_capacity);
//	if (new_base == NULL)
//	{
//		return false;
//	}
//	p->base = new_base;
//	p->capacity = new_capacity;
//	return true;
//}
//int capacity(SeqList *p)
//{
//	return p->capacity;
//}
//bool Full(SeqList* p)
//{
//	return p->size >= p->capacity;
//}
LinkNode* BuyNode(StackType x)
{
	LinkNode* s = (LinkNode*)malloc(sizeof(LinkNode));
	s->data = x;
	s->next = NULL;
	return s;
}
void LinkNodePush(LinkNode** phead, StackType x)
{
	LinkNode* s = BuyNode(x);
	if (*phead == NULL)
	{
		*phead = s;
	}
	else {
		LinkNode* p = *phead;
		while (p->next != NULL)
		{
			p = p->next;
		}
		p->next = s; 
	}
}
void LinkNodePopBack(LinkNode** phead)//尾删
{
	LinkNode* p = *phead;
	LinkNode* prev = NULL;
	while (p->next != NULL)
	{
		prev = p;
		p = p->next;
	}
	if (prev == NULL)
	{
		*phead = NULL;
	}
	else {
		prev->next = NULL;
	}
	free(p);
}
void LinkNodePopfront(LinkNode** phead)//头删
{
	LinkNode* p = *phead;
	if (p != NULL)
	{
		*phead = p->next;
		free(p);
	}
}
void PopBase(LinkNode** phead, char str[],int num)
{
	LinkNode* p, * prev=NULL;
	int i = 0;
	while (i < num)
	{
		p = *phead;
		int k = str[i];  //str[] = "aeiou";
		while (p->next != NULL)
		{
			if (k == p->data)
			{
				prev->next = p->next;
				free(p);
				p = prev->next;
			}
			prev = p;
			p = p->next;
		}
		i++;
	}
}
void PushBase(LinkNode** phead, char str[], int num)
{
	LinkNode* p, * prev=NULL;
	p = *phead;
	int i = 0;
	while (p->next != NULL)
	{
		if (p->data == ' ')
		{
			while (i < num)
			{
				LinkNode* s = BuyNode(str[i]);
				s->next = p;
				prev->next = s;
				prev = s;
				i++;
			}
			prev->next = p->next;
			free(p);
			p = prev->next;
		}
		i = 0;
		prev = p;
		p = p->next;
	}
}
#define sum(a,b,c) a+b+c
int f1()
{
	int i, j, k = 0;
	for (i = 0, j = -1; j = 0; i++, j++)
	{
		k++;
	}

	return k;
}
//struct student
//{
//	char name[10];
//	int age;
//	char gender;
//}std[3],*p=std;
int Count(int number)
{
	int count = 0;
	while (number > 0)
	{
		count++;
		number /= 10;
	}
	return count;
}
void PalindromicNumber(int number) //判断是否为回文数
{
	int old_data = number;
	int count = Count(number);
	int* arr = (int*)malloc(sizeof(int) * count);
	int* str = (int*)malloc(sizeof(int) * count);
	int k=0, i=0, j=0, z=0 ,flag=0,size= 0;
	while (number > 0)
	{
		k = number % 10;
		arr[size++] = k;
		number/=10;
	}
	i = size;
	while (i > 0)
	{
		str[j++] = arr[i - 1];
		i--;
	}
	for (z = 0; z < size; z++)
	{
		if (arr[z] != str[z])
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
	{
		printf("%d不是回文数。\n", old_data);
	}
	else {
		printf("%d是回文数。\n", old_data);
	}
}
int MyPow(int x, int y)
{
	if (y == 0) 
	{
		return 1;
	}
	return x * MyPow(x, y - 1);
}
int fun3(const char* s1, const char* s2)
{
	int i = 0;
	while (s1[i] == s2[i] && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] == '\0' && s2[i] == '\0');
}
struct student
{
	int num;
	char a;
}stu;
void JudgeNumber(int number)
{
	int arr[32];
	int size = 0;
	int flag = 0;
	while (number > 0)
	{
		arr[size++] = number & 1;
		number = number >> 1;
	}
	for (int i = 0; i<size-1; i++)
	{
		if (arr[i] == 1)
		{
			flag = 1;
			break;
		}
		//printf("%d ", arr[i]);
	}
	if (arr[size - 1] == 1 && flag == 0)
	{
		printf("这个数是2的次方数!\n");
	}
	else {
		printf("这个数不是2的次方数!\n");
	}
}
int* Number(int a[],int num,int key)
{
	static int str[2];
	int i = 0, j = 0,flag=0;
	while (i < num)
	{
		j = i + 1;
		while (j < num)
		{
			if (a[i] + a[j] == key)
			{
				str[0] = i;
				str[1] = j;
				flag = 1;
				break;
			}
			j++;
		}
		if (flag == 1)
		{
			break;
		}
		i++;
	}
	return str;
}
void foo(int b[][3])
{
	++b;
	b[1][1] = 9;
}
#define N 3
#define Y(n) ((N+1)*n)
void Compress(char arr[], int num, char* str,int ptr[10]) //压缩字符串
{
	int i = 0, j = 0,count=0;
	 int size = 0;
	while (i < num)
	{
		char k = arr[i];
		while (j < num)
		{
			if (k != arr[j])
			{
				break;
			}
			count++;
			j++;
		}
		i += count;
		for (int z = 0; z < 10; z++)
		{
			if (count == z&&count!=1)
			{
				count = ptr[z];
				str[size++] = count;
				break;
			}
		}
		str[size++] = k;
		//i += count;
		count = 0;
	}
	for (int a = 0; a < size; a++)
	{
		printf("%c", str[a]);
	}
	printf("\n");
	//return str;
}
void PopSpace(char arr[],int num) //删除空格
{
	char* str = (char*)malloc(sizeof(char) * 20);
	int i = 0, j = 0, size = 0,k=0;
	while (i < num)
	{
		if (arr[i] != '*')
		{
			str[size++] = arr[i];
		}
		i++;
	}
	while (k < num)
	{
		if (arr[k] != '*')
		{
			break;
		}
		k++;
	}
	j = k;
	while (j < num)
	{
		if (arr[j] == '*')
		{
			break;
		}
		j++;
	}
	int base = j - k;
	for (int m = size; m >base; m--)
	{
		str[m] = str[m - 1];
	}
	str[base] = '*';
	size++;
	for (int z = 0; z < size; z++)
	{
		printf("%c", str[z]);
	}
	printf("\n");
	
}
//int main()
//{
//	char arr[] = "*****as****aadadq*****";
//	int num = strlen(arr);
//	PopSpace(arr, num);
//
//	printf("\n");
//	char arr[] = "xxxyyyyz";
//	char arr[] = "yyyyyyy";
//	int ptr[10] = { 48,49,50,51,52,53,54,55,56,57 };
//	char* str = (char*)malloc(sizeof(char) * 10);
//	int num = strlen(arr);
//	Compress(arr, num, str, ptr);
//
//	/*char ch = -1;
//	printf("%d", ch);*/
//	int z = 2 * (N + Y(5 + 1));
//	printf("%d", z);
//	int i = 10;
//	long long t = sizeof(i++);
//	printf("%d ", t);
//	printf("%d ", i);
//	int a[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	foo(a);
//	printf("%d", a[2][1]);
//
//	int i;
//	char a[20] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
//	for (i = 0; i < 10; i++)
//	{
//		a[i] = '0';
//	}
//	printf("%d\n", strlen(a));
//	const char* s = "abcde";
//	s += 2;
//	printf("%p\n", s);
//	unsigned long p[] = { 6,7,8,9,10 };
//	unsigned long *pu;
//	pu = p;
//	*(pu + 2) += 2;
//	printf("%d,%d\n", *pu, *(pu + 2));
//	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int num = sizeof(a) / sizeof(a[0]);
//	int key;
//	printf("请输入k的值:");
//	scanf("%d", &key);
//	int* str = Number(a, num, key);
//	for (int i = 0; i < 2; i++)
//	{
//		printf("%d ", str[i]);
//	}
//	int number;
//	printf("请输入要判断的数据:");
//	scanf("%d", &number);
//	JudgeNumber(number);
//	char ch = 'B' + '8' - '3';
//	printf("%c\n", ch);
//	int arr[] = {1,2,3,4,5};
//	int* ptr = (int*)(&arr + 1);
//	printf("%d %d\n", *(arr + 1), *(ptr - 1));
//	int a[12] = { 1,4,7,10,2,5,8,11,3,6,9,12 };
//	int i = 10;
//	printf("%d\n", a[a[i]]);
//	LinkNode* list;
//    LinkNodeInit(&list);  // abcdfeg #
//    StackType item;
//   while (scanf("%c", &item) && item != '#')
//   {
//	LinkNodePush(&list,item);
//    }
//   LinkNodeShow(list);
//   printf("\n");
//	printf("%d", LinkNodeSize(list));
//	printf("\n");
//	LinkNode* mid = Midaddress(list);
//	printf("%c\n", mid->data);
//	int x = 1, y = 012;
//	printf("%d", y );
//	int j = 4; int i = j;
//	for (; i <= 2 * j; i++)
//	{
//		switch (i / j)
//		{
//		case 0:
//		case 1:
//			printf("*");
//			break;
//		case 2:
//			printf("#");
//		}
//	}
//	unsigned int a = 0xFFFFFFF7;
//	unsigned char i = (unsigned char)a;
//	char* b = (char*)&a;
//	printf("%08x,%08x", i, *b);
//	 const char* s1 = "abced";
//	const char* s2 = "abcd";
//	printf("%d\n",fun3(s1, s2));
//	int x, y;
//	scanf("%d %d", &x, &y);
//	int ret=MyPow(x, y);
//	printf("%d\n", ret);
//	int number;
//	printf("请输入整数:");
//	scanf("%d", &number);
//	PalindromicNumber(number);
//	printf("%d\n", Count(number));
//	PalindromicNumber(number);
//	int arr[] = { 6,7,8,9,10 };
//	int* ptr = arr;
//	*(ptr++) += 123;
//	printf("%d\n", *(++ptr));
//	printf("%d,%d\n", *ptr,*(++ptr));
//	int a = 2, * p1, ** p2;
//	p2 = &p1;
//	p1 = &a;
//	a++;
//	printf("%d,%d,%d\n", a, *p1, **p2);
//	int x = 1;
//	int* p1 = &x;
//	int* p2 = NULL;
//	p2 = p1;
//	printf("%d\n", *p2);
//	int i =3;
//	int j = 2;
//	printf("%d\n", i*sum(i,(i+j),j));
//	int a[] = { 1,3,5 };
//	int* p = a + 1;
//	printf("%d\n", *++p);
//	char arr[] = "They are students. #";
//	char arr[] = "abc defgx yz #";
//	LinkNode* list;
//	LinkNodeInit(&list);
//	StackType item;
//	while (scanf("%c", &item) && item != '#')
//	{
//		LinkNodePush(&list,item);
//	}
//	LinkNodeShow(list);
//	printf("\n");
//	char str[] = "%20";
//	int num = strlen(str);
//	PopBase(&list, str, num);
//	PushBase(&list, str, num);
//	printf("\n");
//	LinkNodeShow(list);
//
//
//	int a[] = { 1,3,5,7,1,3,5,9 };
//	int num = sizeof(a) / sizeof(a[0]);
//	GetNumber(a, num);
//
//	printf("%d\n", fun("goodbye!"));
//	const int i = 0;
//	int* j=(int*)&i;
//	*j = 1;
//	printf("%d,%d", i, *j);
//
//	unsigned char a = 0xA5;
//	unsigned char b = a>>5;
//	printf("%d\n", b);
//	printf("%d\n", a);
//
//
//
//	const char* p = "asd";
//	int i = Strlen(p);
//	printf("%d\n", i);
//	
//	/*int  s[5] = { 1,2,3,4,5 };
//	  int * p = s;
//	  int i = 0;
//	  for (; i < 5; i++)
//	  {
//
//		  printf("%d", *p++);
//	  }*/
//	/*  int i=strlen(s);
//	  printf("%d\n", i);
//	printf("%s\n", s);*/
//
//	system("pause");
//	return 0;
//}