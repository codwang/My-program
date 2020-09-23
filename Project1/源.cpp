//#include<stdio.h>
//#include<Windows.h>
//#pragma warning(disable:4996)
//int cod(int x, int y)
//{
//    int temp=0;
//    while (temp = x % y)
//    {
//        x = y;
//        y = temp;
//        }
//    
//    return y;
//    
//   /* if (x % y == 0)
//    {
//        return y;
//    }
//    else {
//        return (cod(y, x%y));
//    }*/
//}
//int main()
//{
//    int x = 0, y = 0;
//    printf("请输入两个数：");
//    scanf("%d %d", &x, &y);
//     int index=cod(x, y);
//     printf("最大公约数是%d\n",index);
//
//    system("pause");
//    return 0;
//}
////int BinSearch(int x, int a[], int n)
////{
////
//    int start=0 ;
//    int end = n - 1;
//    while (start <= end) {
//        int mid = (start + end) / 2;
//        if (x > a[mid])
//        {
//            //右半
//            start = mid + 1;
//        }
//        else if (x < a[mid])
//        {
//            //左半
//            end = mid - 1;
//        }
//        else {
//            return mid;
//        }
//    }
//    return -1;
//
//}
   /*int main()
    {
        int x=0;
        int a[] = { 1,2,3,4,5,6,7,8,9,10 };
        int n = sizeof(a) / sizeof(a[0]);
        printf("请输入要查找的数字：");
            scanf("%d", &x);
        int index=BinSearch(x,a,n);
        printf("%d\n", index);
       
        system("pause");
        return 0;
    }*/







//void show()
//{
//	int i, j;
//	int num = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//				num = i * j;
//				printf("%d*%d=%d\t", j, i, num);// \t是水平制表符，也就是tab缩进
//				sleep(300);	
//		}
//		printf("\n");
//	}	
//}
//int main()
//{
//	乘法表 
//	show();
//	system("pause");
//	return 0;
//}
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<assert.h>
#pragma warning(disable:4996)
int main()
{
 /*   char d = -10;
    printf("%u\n", d);
    printf("%d\n", d);*/
    //char arr[32] = "we are happy";
    //char delim[] = " ";
    //char* p = strtok(arr, delim);
    //while (p)
    //{
    //    
    //    printf("%s ", p);
    //    p = strtok(NULL, delim);
    //   // strcat(arr, "%20");
    //   
    //}
    system("pause");
    return 0;
}