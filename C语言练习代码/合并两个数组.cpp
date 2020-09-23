//#include<stdio.h>
//#include<windows.h>
//#pragma warning(disable:4996)
//void sort(int* nums1,int n,int m)
//{
//	for (int i = 0; i < m + n - 1; i++)
//	{
//		for (int j = 0; j < m+n-1; j++)
//		{
//			if (nums1[j] > nums1[j + 1])
//			{
//				int tmp = nums1[j];
//				nums1[j] = nums1[j + 1];
//				nums1[j + 1] = tmp;
//			}
//
//		}
//	}
//}
//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
//{
//	int num = m;
//	for (int i = 0; i < n; i++)
//	{
//		nums1[m++] = nums2[i];
//	}
//	sort(nums1, n, num);
//
//}
//
//int main()
//{
//	int nums1[20] = {1,2,3,4,5};
//	int nums2[10] = {5,8,10};
//
//	merge(nums1, 20, 5, nums2, 10, 3);
//	
//	for (int i = 0; i < 8; i++)
//	{
//		printf("%d ", nums1[i]);
//	}
//	
//	system("pause");
//	return 0;
//
//}