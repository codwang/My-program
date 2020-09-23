//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//#include<windows.h>
#pragma warning(disable:4996)
//typedef struct Seqlist
//{
//	int size;
//	int* base;
//}Seqlist;
//
//void SeqlistInit(Seqlist *plist)
//{
//	//assert(plist != NULL);
//	plist->base = (int*)malloc(sizeof(int) * 10000);
//	plist->size = 0;
//}
//void SeqlistShow(Seqlist *plist)
//{
//	for (int i = 0; i < plist->size; i++)
//	{
//		printf("%d ", plist->base[i]);
//	}
//	printf("\n");
//
//}
//void Seqlistpush_back(Seqlist* plist,int x)
//{
//	assert(plist != NULL);
//	
//		plist->base[plist->size] = x;
//		plist->size++;
//	
//}
//int Count(int key)
//{
//	int count = 0;
//	while (key != 0)
//	{
//		key/=10;
//		count++;
//	}
//	return count;
//}
//void  Seqlistadd(Seqlist* plist,int key)
//{
//	assert(plist != NULL);
//	int count = Count(key);
//	int x = key;
//	if (count <= plist->size)
//	{
//		int i = 1;
//		while (key != 0 && i <= plist->size)   //将 k 的各个位的数字与数组对应的每一位相加
//		{
//			x = key % 10;
//			key /= 10;
//
//			plist->base[plist->size - i] += x;
//			i++;
//		}
//		for (int i = 1; i <plist->size; i++) //判断数组的每一位是否>=10 
//		{
//			if (plist->base[plist->size - i] >= 10)
//			{
//				int temp = plist->base[plist->size - i] % 10;
//				plist->base[plist->size - i] = temp;
//				plist->base[plist->size - i - 1]++;
//			}
//
//		}
//		if (plist->base[0] >= 10) //判断数组的第一个元素是否>=10,如果大于则将1前插
//		{
//			int temp= plist->base[0] % 10;
//			plist->base[0] = temp;
//			int j = 0;
//			for ( j = plist->size; j > 0; --j)
//			{
//				plist->base[j] = plist->base[j - 1];
//			}
//			plist->base[j] = 1;
//			plist->size++;
//		}
//
//	}
//	//else {
//	//	int i=1 ;
//	//	int k[] = {0};
//	//	while (key != 0&&i<=count )   //将 k 的各个位的数字存进数组
//	//	{
//	//		x = key % 10;
//	//		k[count - i] = x;
//	//		key /= 10;	
//	//	}
//	//	int num = count - plist->size; //需要前插的次数
//	//	while (num > 0)
//	//	{
//	//		int j=0;
//	//		for (j = plist->size; j > 0; j--)
//	//		{
//	//			plist->base[j] = plist->base[j - 1];
//	//		}
//	//		plist->base[j] = k[num-1];
//	//			plist->size++;
//	//			num--;
//	//	}
//
//	//}
//	
//}
//void SeqlistClear(Seqlist* plist)
//{
//	assert(plist != NULL);
//	plist->size = 0;
//}
//void  SeqlistDestory(Seqlist* plist)
//{
//	assert(plist != NULL);
//	free(plist->base);
//	plist->base = NULL;
//	plist->size = 0;
//}
//int main()
//{
//	Seqlist list;
//	SeqlistInit(&list);
//	
//	int item=0;
//	int select;
//	do {
//		printf("请输入要插入A的数据:");
//		while (scanf("%d", &item) && item != -1)
//		{
//			Seqlistpush_back(&list, item);
//		}
//		printf("请输入K的值:");
//		int k = 0;
//		scanf("%d", &k);
//		Seqlistadd(&list, k);
//		printf("after:\n");
//		printf("%d\n", Count(k));
//		SeqlistShow(&list);
//		SeqlistClear(&list);
//		printf("按1继续，按0退出!\n");
//		scanf("%d", &select);
//	} while (select!=0 );
//	SeqlistDestory(&list);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//int* addToArrayForm(int* A, int ASize, int K, int* returnSize)
//{
//	A[ASize - 1];
//	return returnSize;
//}
//int main()
//{
//	int *A=(int *)malloc(sizeof(int)*100000000);
//
//	int item;
//	int size = 0;
//	printf("A:\n");
//	while (scanf("%d", &item)&&item!=-1)
//	{
//		
//		A[size] = item;
//		size++;
//	}
//	printf("K:\n");
//	int K;
//	scanf("%d", &K);
//	int* returnsize = NULL;
//	addToArrayForm(A, size, K, returnsize);
//	printf("%d\n", size);
//	
//}