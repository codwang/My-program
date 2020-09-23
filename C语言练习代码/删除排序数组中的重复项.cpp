//#include<stdio.h>
//#include<windows.h>
//#pragma warning(disable:4996)
//int removeDuplicates(int* nums, int numsSize)
//{
//    int count = 0;
//    for (int i = 0; i < numsSize-1; i++)
//    {
//        if (nums[i] ==nums[i + 1])
//        {
//            count++;
//        }
//    }
//    int item = count;
//    while (count > 0)
//    {
//        for (int i = 0; i < numsSize - 1; i++)
//        {
//            if (nums[i] ==  nums[i + 1])
//            {
//                for (int j = i; j < numsSize - 1; j++)
//                {
//                    nums[j] = nums[j + 1];
//                }
//            }
//        }
//        count--;
//    }
//
//    return numsSize - item;




    //int src1 = 0, src2 = 1;
    //int dst = 0;
    //// 跟上题的思路一致，相同的数只保留一个，依次往前放
    //while (src2 < numsSize)
    //{
    //    nums[dst] = nums[src1];
    //    ++dst;
    //    //如果两个指针指向的元素不重复，则指针同时向后移动
    //    if (nums[src1] != nums[src2])
    //    {
    //        ++src1;
    //        ++src2;
    //    }
    //    else
    //    {
    //        //如果重复，找到第一个不重复的元素
    //        while (src2 < numsSize && nums[src1] == nums[src2])
    //        {
    //            ++src2;
    //        }
    //        //更新指针
    //        src1 = src2;
    //        ++src2;
    //    }
    //}

    //if (src1 < numsSize)
    //{
    //    nums[dst] = nums[src1];
    //    ++dst;
    //}


    //return dst;
//}
//int main()
//{
//	int nums[] = { -999,-999,-998,-998,-997,-997,-996,-996,-995,-995,-994,-994,-993,-993,-992,-992,-991,-991,-990,-990,-989,-989,-988,-988,-987,-987,-986,-986,-985,-985,-984,-984,-983,-983,-982,-982,-981,-981,-980,-980,-979,-979,-978,-978,-977,-977,-976,-976,-975,-975,-974,-974,-973,-973,-972,-972,-971,-971,-970,-970,-969,-969,-968,-968,-967,-967,-966,-966,-965,-965,-964,-964,-963,-963,-962,-962,-961,-961,-960,-960,-959,-959,-958,-958,-957,-957,-956,-956,-955,-955,-954,-954,-953,-955 };
//	int numsSize = sizeof(nums) / sizeof(nums[0]);
//	//printf("%d ", numsSize);
//	int ret=removeDuplicates(nums,numsSize);
//	printf("%d \n", ret);
//	for (int i = 0; i < ret; i++)
//	{
//		printf("%d ", nums[i]);
//	}
//	system("pause");
//	return 0;
//
//}