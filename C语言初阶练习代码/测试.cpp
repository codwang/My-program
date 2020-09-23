//#include <stdio.h>
//#include <string.h>
//void reverse(char* start, char* end)
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
//int main()
//{
//	char input[100];
//	// 注意不能使用scanf，scanf遇到空格，一次输入接收就结束了
//	gets_s(input);
//	// 翻转整个句子
//	reverse(input, input + strlen(input) - 1);
//	printf("%s", input);
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//#include<math.h>
//int Prime(int n)
//{
//打印100到200之间的素数
//	int i = 0;
//	for (i = 2; i < sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//		}
//
//	}
//	return 1;
//
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i < 200; i++)
//	{
//		if (1 == Prime(i))
//		{
//
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//
//#include<stdio.h>
//#include<windows.h>
//#pragma warning (disable:4996)
//void Swap(int* x, int* y)
//{
// 交换两个整数
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
//void Show()
//{
//	int i = 0, j = 0;
//	int sum = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			sum = i * j;
//			printf("%d*%d=%d\t", j, i, sum);
//			Sleep(200);
//		}
//		printf("\n");
//	}
//
//
//}
//int main()
//{
//	Show();
//	system("pause");
//	return 0;
//
//}
//#include<stdio.h>
//#include<windows.h>
//#pragma warning (disable:4996)
//void  Printf(int n)
//{
//	if (n <10)
//	{
//		printf("%d ", n);
//		return ;
//	}
//	Printf(n / 10);
//	printf("%d ", n%10);
//	
//
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	Printf(num);
//	printf("\n");
//	system("pause");
//	return 0;
//
//}
//#include<stdio.h>
//#include<windows.h>
//#pragma warning (disable:4996)
//int Factorial(int n)
//{
//	int i = 0;
//	int num = 1;
//	for (i=1; i <= n; i++)
//	{
//		num *= i;
//	}
//	return num;
//
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", Factorial(n));
//	printf("\n");
//	system("pause");
//	return  0;
//}
//#include<stdio.h>
//#include<windows.h>
//#pragma warning (disable:4996)
//int Factorial(int n)
//{
//	if(n==1)
//	{
//		return n;
//	}
//	return n * Factorial(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", Factorial(n));
//	printf("\n");
//	system("pause");
//	return  0;
//}
//#include<stdio.h>
//#include<windows.h>
//int Strlen(char *str)
//{
//	//递归实现
//   if(*str=='\0')
//	{
//	   return 0;
//   }
//   return 1 + Strlen(str + 1);
//}
//int main()
//{
//	 char str[] = "abcd1234";
//	printf("%d", Strlen(str));
//	printf("\n");
//	system("pause");
//	return  0;
//}
//#include<stdio.h>
//#include<windows.h>
//int Strlen(char* str)
//{
//	//非递归
//	int count=0;
//	while (*str!='\0')
//	{
//		
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char str[] = "abcd1234";
//	printf("%d", Strlen(str));
//	printf("\n");
//	system("pause");
//	return  0;
//}
//#include<stdio.h>
//#include<windows.h>
//int Strlen(char *str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	return 1 + Strlen(str + 1);
//
//}
//void reverse(char *str)
//{
	//递归实现字符串逆置
	/*if (*str!='\0')
	{
		reverse(str + 1);
		printf("%c", *str);
	}*/
	/*char* start = str;
	char*end= str + Strlen(str)-1;
	char temp = *start;
	*start = *end;
	*end = '\0';
	if (Strlen(str+1) >= 2)
	{
		reverse(str+1);
		}
	
	*end = temp;
	*/


	/*char *start = str;
	char *end = str + Strlen(str)-1;
	while (start < end)
	{
		char temp=*start;
		*start = *end;
		*end = temp;
		start++, end--;
	}
	printf("%s", str);	*/
//}
//int main()
//{
//	 char str[100]="abcd1234";
//	printf("交换前%s\n",str);
//	reverse(str);
//	printf("交换后%s\n", str);
//	system("pause");
//	return 0;
//
//}
//#include<stdio.h>
//#include<windows.h>
//#pragma warning(disable:4996)
//int Myadd(int n)
//{
//递归实现一个数的每位之和
//	if (n < 9)
//	{
//		return n;
//	}
//	return n % 10 + Myadd(n / 10);
//
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("每位之和为%d\n", Myadd(num));
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//#pragma warning(disable:4996)
//int Pow(int n, int k)
//{
//	//递归实现求n的k次方
//	if (k == 0)
//	{
//		return 1 ;
//	}
//	return n*Pow(n, k - 1);
//}
//int main()
//{
//	int n = 0, k = 0;
//	scanf("%d %d", &n, &k);
//	printf("%d\n", Pow(n, k));
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//#include<assert.h>
//#pragma warning(disable:4996)
//int Fibonacci(int n)
//{
//	//递归实现
//	assert(n != 0);
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	return Fibonacci(n - 1) + Fibonacci(n - 2);
//
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("%d\n", Fibonacci(num));
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//#include<assert.h>
//#pragma warning(disable:4996)
//int Fibonacci(int n)
//{
//	//非递归
//	assert(n != 0);
//	int num1 = 1;
//	int num2 = 1;
//	 if (n < 3)
//	 {
//		 return 1;
//	 }
//	int temp = 0;
//	for(int i=0;i<=n-3;i++)
//	{
//		temp = num1+num2;
//		num1 =num2 ;
//		num2 = temp;
//	}
//	return  temp;
//	
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("%d\n", Fibonacci(num));
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//#pragma warning(disable:4996)
//int Myadd(int n)
//{
//	//非递归实现
//	int sum = 0;
//	while (n > 0)
//	{
//		sum += n % 10;
//		n /= 10;
//	}
//	return sum;
//}
//int main()
//{
//	int num = 0;
//	printf("输入一个数：");
//	scanf("%d", &num);
//	printf("每位之和为：%d\n", Myadd(num));
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//void BubbleSort(int a[],int n)
//{
//	int i = 0;
//	int j = 0;
//	int temp=0;
//	
//	for (i = 0; i < n-1; i++)
//	{
//		//冒泡排序，由小到大。
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (a[j] >a[j + 1])
//			{
//				temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//				
//			}
//			
//		}
//		
//	}
//	
//}
//int main()
//{
//	int a[] = { 3,5,2,9,6,8,7,10,23,14 };
//	int n = sizeof(a) / sizeof(a[0]);
//	int i = 0;
//	printf("排序前：");
//	for (i=0; i < n; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	BubbleSort(a,n);
//	printf("排序后：");
//	for (i=0; i < n; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//void  init(int a[],int n)
//{
//	int i = 0;
//	for (; i < n; i++)
//	{
//		a[i] = 0;
//	}
//}
//void Print(int a[],int n)
//{
//	int i = 0;
//	for (; i < n; i++)
//	{
//		printf("%d ", a[i]);
//	}
//}
//void reverse(int a[],int n)
//{
//	int start = 0;
//	int end = n - 1;
//	int temp = 0;
//	while (start < end)
//	{
//		temp = a[start];
//		a[start] = a[end];
//		a[end]=temp;
//		start++, end--;
//	}
//	
//}
//int main()
//{
//	int a[] = { 3,5,2,9,6,8,7,10,23,14 };
//	int n = sizeof(a) / sizeof(a[0]);
//	int i = 0;
//	Print(a, n);
//	printf("\n");
//	reverse(a, n);
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	init(a, n);
//	for (i=0; i < n; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//void Swap(int a[],int b[])
//{
//交换两个数组的内容
//	int temp = 0;
//	int i = 0;
//	while (i<10)
//	{
//		temp = a[i];
//		a[i] = b[i];
//		b[i] = temp;
//		i++;
//	}
//}
//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int b[10] = { 10,20,30,40,50,60,70,80,90,100};
//	int i = 0;
//	printf("交换前:");
//	printf("a[10] ");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//
//	}
//	printf("\n");
//	printf("b[10]");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", b[i]);
//	}
//	printf("\n");
//	Swap(a, b);
//	printf("交换后：");
//	printf("a[10] ");
//	for (i=0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//		
//	}
//	printf("\n");
//	printf("b[10]");
//	for (i=0; i < 10; i++)
//	{
//		printf("%d ", b[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//#pragma warning(disable:4996)
//int Show(int x,int y)
//{
//	//求两个数二进制中不同位的个数
//	int temp = x ^ y;
//	int count = 0;
//	while(temp)
//	{
//		
//		temp &= (temp - 1);
//			count++;	
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	printf("%d\n", Show(m, n));
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//#pragma warning(disable:4996)
//void  Show(int n)
//{
//打印一个数二进制的奇数位和偶数位
//	int i = 0;
//	int num = sizeof(n) * 8;
//	printf("奇数位：");
//	for (; i < num; i++)
//	{
//		if (0 == i % 2 && (n & (1 << i)) != 0) {
//			printf("%d ", 1);
//		}
//		else if (0 == i % 2) {
//			printf("%d ", n & (1 << i));
//		}
//	}
//	printf("\n");
//	printf("偶数位：");
//	for(i=0;i<num;i++)
//	{
//		if (0 != i % 2 && (n & (1 << i)) !=0) {
//			printf("%d ", 1);
//		}
//		else if (0 != i % 2)
//		{
//			printf("%d ", n & (1 << i));
//		}
//		}
//	printf("\n");
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	Show(m);
//	system("pause");
//	return 0;
//}
//获取一个整数二进制序列中所有的偶数位和奇数位，
//分别打印出二进制序列
//统计二进制中1的个数
//#include<stdio.h>
//#include<windows.h>
//#pragma warning(disable:4996)
//int   Show(int n)
//{
//	
//	int count = 0;
//	while (n)
//	{
//		n &= (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("%d个1\n", Show(num));
//	system("pause");
//	return 0;
//}
//交换两个变量（不创建临时变量）
//不创建临时变量，交换两个整数的内容
//#include<stdio.h>
//#include<windows.h>
//#pragma warning(disable:4996)
//void  Swap(int *x,int *y)
//{
//	*x = (*x ^ *y);
//	*y = (*y ^ *x);
//	*x = (*x ^ *y);
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	printf("交换前：%d %d", num1, num2);
//	printf("\n");
//	Swap(&num1, &num2);
//	 printf("交换后：%d %d", num1, num2);
//	 printf("\n");
//	system("pause");
//	return 0;
//}
