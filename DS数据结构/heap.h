#ifndef _HEAP_H_
#define _HEAP_H_
#include"common.h"
typedef int HeapElemType;
typedef struct MinHeap
{
	size_t size;
	size_t capacity;
	HeapElemType *base;
}MinHeap;
#define HEAP_DEFAULT_SIZE 20
void HeapInit(MinHeap *php, int sz = HEAP_DEFAULT_SIZE);
void HeapInsert(MinHeap* php, HeapElemType x);
void HeapShow(MinHeap* php);
void HeapErase(MinHeap* php);
void HeapSort(MinHeap* php, int ar[], int n);
void  HeapShiftDown(MinHeap* php, int start, int n);
void HeapCreate(MinHeap *php,HeapElemType a[],int n);
void HeapShiftUp(MinHeap* php, int start); //i=parent j=child  向上调整
//===============================================
void HeapInit(MinHeap* php, int sz )
{
	assert(php != NULL);
	php->capacity = sz > HEAP_DEFAULT_SIZE ? sz : HEAP_DEFAULT_SIZE;
	php->base = (HeapElemType*)malloc(sizeof(HeapElemType)*php->capacity);
	memset(php->base, 0, sizeof(HeapElemType) * php->capacity);
	php->size = 0;
}
void HeapInsert(MinHeap* php, HeapElemType x) //入堆
{
	assert(php != NULL);
	if (php->size >= php->capacity)
	{
		printf("堆空间已满，%d 不能插入堆.\n", x);
		return;
	}
	php->base[php->size] = x;
	HeapShiftUp(php, php->size);
	php->size++;
	
}
void Swap(int *x,int *y)
{
	*x = *x ^ *y;
	*y = *x ^ *y;
	*x = *x ^ *y;
}
void HeapShiftUp(MinHeap* php, int start)  //i=parent 父节点 j=child 子节点
{
	int j = start;
	int i = (j - 1) / 2;
	while (j> 0)
	{
		if (php->base[j] < php->base[i])
		{
			Swap(&php->base[j], &php->base[i]);
			j = i;
			i = (j - 1) / 2;
		}
		else {
			break;
		}
	}
}
void HeapShow(MinHeap* php)
{
	assert(php != NULL);
	for (int i = 0; i < php->size; i++)
	{
		printf("%d ", php->base[i]);
	}
	printf("\n");
}
void HeapErase(MinHeap* php)   //向下调整 //头删
{
	assert(php != NULL);
	php->base[0] = php->base[php->size - 1];
	int i = 0;
	int j = 0;
	while (j < php->size)
	{
		j = 2 * i + 1;
		if (php->base[i] > php->base[j])
		{
			Swap(&php->base[i], &php->base[j]);
			i = j;
		}
		else {
			break;
		}
	}
	if (php->base[i] > php->base[j + 1])
	{
		Swap(&php->base[i], &php->base[j+1]);
	}
	php->size--;

}
void HeapSort(MinHeap* php, int ar[], int n)
{
	HeapCreate(php, ar, n);
	while (php->size > 0)
	{

	}
}
//void  HeapShiftDown(MinHeap* php, int start, int n)
//{
//	int i = start;
//	int j = 2 * i + 1;
//	while (j < n)
//	{
//		if (j + 1 < n && php->base[j] > php)
//		{
//
//		}
//	}
//}
void HeapCreate(MinHeap* php, HeapElemType a[], int n)
{
	php->capacity = n;
	php->base = (HeapElemType*)malloc(sizeof(HeapElemType) * php->capacity);
	assert(php->base != NULL);
	for (int i = 0; i < n; i++)
	{
		php->base[i] = a[i];
	}

}

#endif
