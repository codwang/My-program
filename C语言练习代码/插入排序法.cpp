#include<stdio.h>
#include<windows.h>
void Swap(int* x, int* y)
{
	*x = *x ^ *y;
	*y = *x ^ *y;
	*x = *x ^ *y;
}
void Insertsort(int a[], int left, int right)
{
	for (int i = left + 1; i < right; i++)
	{
		int end = i;
		while (end>left&&a[end]<a[end-1])
		{
				Swap(&a[end],&a[end-1]);
				end--;
		}
	}
}
//int main()
//{
//	int a[] = { 2,1,4,3,7,6 };
//	int size = sizeof(a) / sizeof(a[0]);
	//int i = 0;
	//for (i = 1; i < size; i++)
	//{
	//	int temp = a[i];
	//	int index;
	//	for (int j = i; j > 0; j--)
	//	{
	//		if (a[j]<a[j-1])
	//		{
	//			a[j] = a[j-1];
	//			index = j - 1;
	//			a[index] = temp;
	//		}
	//		else {
	//			break;
	//		}
	//	}
	//}
//	Insertsort(a, 0, size);
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	system("pause");
//	return 0;
//}