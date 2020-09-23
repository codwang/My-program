//#include<stdio.h>
//#include<windows.h>
//#include<stdlib.h>
//#include<assert.h>
//int ComepareInt(const void *vx,const void *vy)
//{
//	int* x = (int*)vx;
//	int* y = (int*)vy;
//	if (*x > * y)
//	{
//		return 1;
//	}
//	else  if (*x < *y)
//	{
//		return -1;
//	}
//	else {
//		return 0;
//	}
//}
//int ComepareFloat(const void* vx, const void* vy)
//{
//	float* x = (float*)vx;
//	float* y = (float*)vy;
//	if (*x > *y)
//	{
//		return 1;
//	}
//	else  if (*x < *y)
//	{
//		return -1;
//	}
//	else {
//		return 0;
//	}
//}
//int ComepareDouble(const void* vx, const void* vy)
//{
//	double* x = (double*)vx;
//	double* y = (double*)vy;
//	if (*x > * y)
//	{
//		return 1;
//	}
//	else  if (*x < *y)
//	{
//		return -1;
//	}
//	else {
//		return 0;
//	}
//}
//void ShowInt(int* a, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//}
//void ShowFloat(float* a, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%.1f ", a[i]);
//	}
//	printf("\n");
//}
//void ShowDouble(double* a, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%f ", a[i]);
//	}
//	printf("\n");
//}
//void Swap(char* x, char* y, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		*(x + i) ^= *(y + i);
//		*(y + i) ^= *(x + i);
//		*(x + i) ^= *(y + i);
//	}
//}
//void Mysort(void* base, int n, int size, int (*Comepare)(const void* vx, const void* vy))
//{
//	assert(base);
//	assert(Comepare);
//	char* _base = (char*)base;
//	int i = 0;
//
//	for (i = 0; i < n-1; i++)
//	{
//		for (int j = 0; j < n - 1 - i; j++)
//		{
//			if (Comepare(_base + (j * size), _base + size * (j + 1)) > 0)
//			{
//				Swap(_base + (j * size), _base + size * (j + 1),size);
//			}
//		}
//	}
//
//}

//int main()
//{
//	//回调函数模拟实现函数qsort
//	/*int a[] = { 1,6,5,17,9,10,32,56,12,36 };
//	int num = sizeof(a) / sizeof(a[0]);*/
//	float a[] = { 2.1,3.5,1.5,6.2,3.2,5.2,12.6,5.8 };
//	int num = sizeof(a) / sizeof(a[0]);
//	printf("排序前：");
//	ShowFloat(a, num);
//	Mysort(a, num, sizeof(float), ComepareFloat);
//	//qsort(a, num, sizeof(float), ComepareFloat);
//	printf("排序后：");
//	ShowFloat(a, num);
//	system("pause");
//	return 0;
//}