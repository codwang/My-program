//#include<stdio.h>
//#include<windows.h>
//#pragma warning(disable:4996)
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
//		while (key != 0 && i <= plist->size)   //�� k �ĸ���λ�������������Ӧ��ÿһλ���
//		{
//			x = key % 10;
//			key /= 10;
//
//			plist->base[plist->size - i] += x;
//			i++;
//		}
//		for (int i = 1; i <plist->size; i++) //�ж������ÿһλ�Ƿ�>=10 
//		{
//			if (plist->base[plist->size - i] >= 10)
//			{
//				int temp = plist->base[plist->size - i] % 10;
//				plist->base[plist->size - i] = temp;
//				plist->base[plist->size - i - 1]++;
//			}
//
//		}
//		if (plist->base[0] >= 10) //�ж�����ĵ�һ��Ԫ���Ƿ�>=10,���������1ǰ��
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
//	//	while (key != 0&&i<=count )   //�� k �ĸ���λ�����ִ������
//	//	{
//	//		x = key % 10;
//	//		k[count - i] = x;
//	//		key /= 10;	
//	//	}
//	//	int num = count - plist->size; //��Ҫǰ��Ĵ���
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
//int* addToArrayForm(int* A, int ASize, int K, int* returnSize)
//{
//		int count = Count(K);
//    	int x = K;
//		int i = 1;
//		int* ret = A;
//				while (K != 0 && i < ASize+1)   //�� k �ĸ���λ�������������Ӧ��ÿһλ���
//				{
//					x = K % 10;
//					K /= 10;
//		
//					A[ASize-i] += x;
//					i++;
//				}
//				for (int i = 1; i <ASize; i++) //�ж������ÿһλ�Ƿ�>=10 
//				{
//					if (A[ASize-i] >= 10)
//					{
//						int temp = A[ASize-i] % 10;
//						A[ASize-i] = temp;
//						A[ASize-i-1]++;
//					}
//		
//				}
//				if (A[0] >= 10) //�ж�����ĵ�һ��Ԫ���Ƿ�>=10,���������1ǰ��
//				{
//					int temp= A[0] % 10;
//					A[0] = temp;
//					int j = 0;
//					for ( j = ASize; j > 0; --j)
//					{
//						A[j] = A[j - 1];
//					}
//					A[j] = 1;
//					ASize++;
//				}
//				*returnSize = ASize;
//				return ret;
//}
//int main()
//{
//	int A[100] = {0};
//	int item = 0;
//	int ASize = 0;
//	while (scanf("%d", &item) && item != -1)
//	{
//		A[ASize++] = item;
//	}
//	int K = 0;
//	scanf("%d", &K);
//	int* returnSize = &ASize;
//	int* ret = addToArrayForm(A, ASize, K, returnSize);
//
//	for (int i = 0; i < ASize; i++)
//	{
//		printf("%d ", ret[i]);
//	}
//	printf("\n");
//
//	system("pause");
//	return 0;
//
//}