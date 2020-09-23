//#include <stdio.h>
//#include <string.h>
//#include<windows.h>
//void Swap(char* start, char* end)
//{
//	while (start < end)
//	{
//		char temp = *start;
//		*start = *end;
//		*end = temp;
//		start++;
//		end--;
//	}
//}
//int  main()
//{
//	char input[100];
//	//注意不能使用scanf，scanf遇到空格，一次输入接收就结束了
//	gets_s(input);
//	//翻转整个句子
//	Swap(input, input + strlen(input) - 1);
//	//翻转单词
//	char* start = input;
//	while (*start)
//	{
//		char* end = start;
//		while (*end != ' ' && *end)
//		{
//			end++;
//		}
//		Swap(start, end - 1);
//
//		if (*end)
//		{
//			start = end + 1;
//		}
//		else {
//			start = end;
//		}
//	}
//	printf("%s", input);
//	printf("\n");
//	system("pause");
//	return 0;
//
//}
//#include<stdio.h>
//#include<windows.h>
//int MyStrlen(char* str)
//{
//	//模拟实现strlen函数
//	//int count = 0;
//	if(*str == '\0')
//	{
//		return 0;
//	}
//	return 1 + MyStrlen(str + 1);
//	/*while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;*/
//
//}
//int main()
//{
//	char arr[] = "abcd1235";
//	printf("%d\n", MyStrlen(arr));
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>
////模拟实现strcpy函数
//void MyStrcpy(char *str, char *arr)
//{
//	while (*arr!='\0')
//	{
//		*str = *arr;
//		str++, arr++;
//	}
//	
//}
//int main()
//{
//	char arr[] = "abcdefgh";
//	char str[10] = "ffsds";
//	
//	printf("复制前str:");
//	printf("%s\n", str);//这样写更简洁，效果相同：puts(str);
//	MyStrcpy(str, arr);//把字符数组arr的内容复制到字符数组str里面
//	printf("复制后str:");
//	printf("%s\n", str);//puts(str);
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//void Swap(int* a,int n)
//{
////把一个数组的奇数放到前面
//	int i = 0, j = 0;
//	int temp = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (a[j] % 2 == 0 && a[j + 1] % 2 != 0)
//			{
//				temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int num = sizeof(a) / sizeof(a[0]);
//	Swap(a, num);
//	int i = 0;
//	for (; i < num; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//void Swap(int *a, int n)
//{
//	int left = 0;
//	int right = n - 1;
//	int temp = 0;
//
//
//	while (left < right)
//	{
//		// 从前往后，找到一个偶数，找到后停止
//		while ((left < right) && (a[left] % 2 != 0))
//		{
//			left++;
//		}
//
//		// 从后往前找，找一个奇数，找到后停止
//		while ((left < right) && (a[right] % 2 == 0))
//		{
//			right--;
//		}
//
//		// 如果偶数和奇数都找到，交换这两个数据的位置
//		// 然后继续找，直到两个指针相遇
//		if (left < right)
//		{
//			temp = a[left];
//			a[left] = a[right];
//			a[right] = temp;
//		}
//	}
//}
//int main()
//{
//	int a[] = { 1,2,3,4,5,6,7,8,9,10};
//	int num = sizeof(a) / sizeof(a[0]);
//	Swap(a,num);
//	int i = 0;
//	for (; i < num; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//#include<windows.h>
//void Swap(char *arr)//也可以这样写"char arr[]",一般推荐前者
//{
//	char* start = arr;//定义一个头指针指向数组首元素
//	char* end = arr + strlen(arr) - 1;//定义一个尾指针指向数组尾部
//	while (start < end)
//	{
//		char temp = *start;
//		*start = *end;
//		*end = temp;
//		start++;
//		end--;
//	}
//}
//int  main()
//{
//	char arr[100];
//	//注意不能使用scanf，scanf遇到空格，一次输入接收就结束了
//	gets_s(arr);
//	//char arr[100] = "abcd1234";//要是自己不想输入就直接这样写
//	//翻转整个句子
//	Swap(arr);
//	printf("%s", arr);
//	printf("\n");
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//#pragma warning (disable:4996)
//void Swap(int* x, int* y)
//{
// //交换两个整数的内容
//	int temp = 0;
//	temp = *x;    
//	*x = *y;
//	*y = temp;
//
//
//}
//int main()
//{
//	int num1 = 0, num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	printf("交换前：%d %d\n", num1, num2);
//	Swap(&num1, &num2);
//	printf("交换后：%d %d\n", num1, num2);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//#pragma warning (disable:4996)
//void Swap(int* x, int* y)
//{
// //交换两个变量（不创建临时变量）
//	
//	
//	*x = (*x^*y);
//	*y = (*y^*x);
//	*x = (*x^*y);
//	
//
//}
//int main()
//{
//	int num1 = 0, num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	printf("交换前：%d %d\n", num1, num2);
//	Swap(&num1, &num2);
//	printf("交换后：%d %d\n", num1, num2);
//	system("pause");
//	return 0;
//}