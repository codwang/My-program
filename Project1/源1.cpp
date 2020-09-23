//#include<stdio.h>
//#include<windows.h>
//
//int main()
//{
//	//编写程序数一下 1到 100 的所有整数中出现多少个数字9
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		
//		
//			
//		if (i / 10 == 9)
//			
//		{
//
//			printf("%d ", i);
//		}
//	}
//	printf("\n");



	/*int i = 0;
	int temp=1;
	double   num = 0.0;
	for (i = 1; i <= 100; i++)
	{
		num += temp*(1.0 / i);
		temp = -temp;
	}
	
	printf("%f\n", num);
	
	printf("\n");*/
	/*int a[] = { 10,23,5,65,98,13,59,100,123,24 };

	int i = 0;
	int temp = 0;
	int j = 0;
	int n = sizeof(a) / sizeof(a[0]);
	for (j = 0; j < n; j++)
	{
		for (i = 0; i < n - j - 1; i++)
		{
			if (a[i] > a[i + 1])
			{
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;

			}
		}
	}
	printf("最大数为：%d ", a[n-1]);

	printf("\n");
	*/
	
	/*int i = 0;
	int j = 0;
	for (i = 101; i < 200; i++)
	{
		for (j = 2; j <i ; j++)
		{
			if (i%j == 0)
			{
				break;
			}
		}
		if (j ==i )
		{
			printf("%d ", i);
		}
	}*/
//	system("pause");
//	return 0;
//}