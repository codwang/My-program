#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<assert.h>
#pragma warning(disable:4996)
#define MOD(x,y) x%y
void Sort(int a[],int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				int tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
}
void Show(int a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}
}//3 1 6 11 5 2 2 2 2 1 9 7 -1
void GetNumber(int a[],int k,int size)
{
	Sort(a, size);
	for (int i = 0; i < k; i++)
	{
		printf("%d ", a[i]);
	}
}
int number(int arr[], int num)
{
	int n = 0;
	int i = 0,j=0,z=0;
	int count = 0;
	int mid = num / 2;
	int *a=(int *)malloc(sizeof(int)*num);
	while (n < num)
	{
		int key = arr[n];
		for (i = 0; i < num;i++)
		{
			if (key == arr[i])
			{
				count++;
			}
		}
		a[j++] = count;
		count = 0;
		n++;
	}
	for ( z = 0; z < j; z++)
	{
		if (a[z] > mid)
		{
			return arr[z];
			break;
		}
	}
	return -1;
}
union x {
	int x;
	char y[4];
}a;
//16进制
#define min(a,b) a<b?a:b;
void  mystring()
{
	char buffer[6] = { 0 };

	const char* s = "Hello World!";
	for (int i = 0; i < sizeof(buffer) - 1; i++)
	{
		buffer[i] = *(s + i);
	}
	printf("%s\n", buffer);
}
//#define StackType char
//#define SIZE 10
//typedef struct SeqList
//{
//	StackType *base;
//	int capacity;
//	int size;
//}SeqList;
//void SeqListInit(SeqList* p)
//{
//	p->capacity = SIZE;
//	p->base = (StackType*)malloc(sizeof(StackType) * p->capacity);
//	p->size = 0;
//}
//void Show(SeqList* p)
//{
//	for (int i = 0; i < p->size; i++)
//	{
//		printf("%c ", p->base[i]);
//	}
//}
//char bit(SeqList* p)
//{
//	StackType item;
//	while (scanf("%c", &item) && item != '#')
//	{
//		p->base[p->size++] = item;
//	}
//	int n = 0;
//	while (n < p->size)
//	{
//		StackType k = p->base[n];
//		for (int i = n+1; i < p->size; i++)
//		{
//			if (k == p->base[i])
//			{
//				break;
//			}
//			else {
//				return k;
//			}
//		}
//		n++;
//	}
//	//return NULL;
//}
//void  Base(SeqList* p) //顺序表
//{
//		StackType item;
//	while (scanf("%c", &item) && item != '#')
//	{
//		p->base[p->size++] = item;
//	}
//	int i = 0, k = 0, j = 0, flag = 0;
//	while (i < p->size) //aaccbdeff#
//	{
//		 k = p->base[i];
//		 j = i + 1;
//		 if (p->base[i] != p->base[i + 1])
//		 {
//			 while (j < p->size)
//			 {
//				 if (k == p->base[j])
//				 {
//					 break;
//				 }
//				 flag++;
//				 j++;
//			 }
//		 }
//		 else {
//			 i++;
//		 }
//		if (flag == p->size-(i+1))
//		{
//			printf("%c ", k);
//			break;
//		}
//		flag = 0;
//		i++;	
//	}
//}
//int main()
//{
//	SeqList list;
//	SeqListInit(&list);
//	Base(&list);
//	//char ret=Base(&list);
//	//printf("%c ", ret);
//	
//	//Show(&list);
//
//
//	//char a[1000];
//	//int i;
//	//for (i = 0; i < 1000; i++)
//	//{
//	//	a[i] = (char)(-1 - i);
//	//}
//	//printf("%d\n", strlen(a));
//	//int i = 1;
//	//printf("%d,%d\n", sizeof(i++), i);
//
//	 //mystring();
//	//printf("%d\n", sizeof(buffer));
//	//char* ret = mystring();
//	//printf("%s\n",ret);
//	//int x[] = { 1,2,3,4,5,6 }, * p = x;
//	//p += 2;
//	//printf("%d\n", ++*p);
//	//const char* str[3] = {"stra","strb","strc"};
// //   const char* p = str[0];
//	//int i = 0;
//	//while (i < 3)
//	//{
//	//	printf("%s ", p++);
//	//	i++;
//	//}
//	//int a, x;
//	//for (a = 0, x = 0; a <= 1&&!x++;a++)
//	//{
//	//	a++;
//	//}
//	//printf("%d %d", a, x);
//	//int a[5] = { 1,2,3,4,5 };
//	//int* p1 = (int*)(&a + 1);
//	//int* p2 = (int*)((int)a + 1);
//	//int* p3 = (int*)(a + 1);
//	//printf("%d,%x,%d\n", p1[-1], p2[0], p3[1]);
//
//	//int arr[] = { 1,2,3,2,2,2,3,3,3,5,4,2 };
//	//int num = sizeof(arr) / sizeof(arr[0]);
//
//	//printf("超过数组长度一半的数字为:");
//
//	// int ret=number(arr, num);
//	//printf("%d\n", ret);
//
//
//
//
//	//char s[] = "\\123456\123456\t";
//	//printf("%d\n", strlen(s));
//	/*STRING s;
//	printf("%d",sizeof(s)/sizeof(s[0]));*/
//	//int *a =(int *)malloc(sizeof(int)*100);
//	//int size = 0;
//	//int item;
//	//int k;
//	//while (scanf("%d", &item) && item != -1)
//	//{
//	//	a[size++] = item;
//	//}
//	//printf("\n");
//	//Show(a, size);
//	//printf("\n");
//	//printf("请输入k的值:\n");
//	//scanf("%d", &k); 
//	//GetNumber(a, k,size);
//	system("pause");
//	return 0;
//}