//#include<stdio.h>
//#include<windows.h>
//#pragma warning(disable:4996)
//void sort(int* nums, int numsSize)
//{
//	for (int i = 0; i < numsSize - 1; i++)
//	{
//		for (int j = 0; j < numsSize - 1 - i; j++)
//		{
//			if (nums[j] > nums[j + 1])
//			{
//				int tmp = nums[j];
//				nums[j] = nums[j + 1];
//				nums[j + 1] = tmp;
//			}
//
//		}
//	}
//}
//int removeElement(int* nums, int numsSize, int val) 
//{
//	int i=0;
//	int count = 0;
//	sort(nums, numsSize);
//	for (int i = 0; i < numsSize; i++)
//	{
//		if (nums[i] == val)
//		{
//			count++;
//		}
//	}
//	if (count == 1)
//	{
//		for (int i = 0; i < numsSize; i++)
//		{
//			if (nums[i] == val)
//			{
//				for(int j=i;j< numsSize - 1;j++)
//				nums[j] = nums[j + 1];
//			}
//		}
//	}
//else 
//{
//for (int j = 0; j < numsSize; j++)
//{
//	if (nums[j] == val)
//	{
//		if (j + count < numsSize)
//		{
//			for (int z = j; z < numsSize - 1; z++)
//			{
//				nums[z] = nums[z + count];
//			}
//		}
//		else {
//			return numsSize - count;
//		}
//	}
//}
//}
//	 return numsSize-count;
//}

//int main()
//{
//	int nums[] = { 1,2,3,4};
//	int numsSize = sizeof(nums) / sizeof(nums[0]);
//	int val = 0;
//	printf("请输入要删除的元素:");
//	scanf("%d", &val);
//	//sort(nums, numsSize);
//	int ret=removeElement(nums,numsSize, val);
//	printf("%d\n", ret);
//	for (int i = 0; i < ret; i++)
//	{
//		printf("%d ", nums[i]);
//	}
//	system("pause");
//	return 0;
//}