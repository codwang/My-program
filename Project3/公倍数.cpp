//
//#include<stdio.h>
//#include<windows.h>
//#pragma warning (disable:4996)
//int CommonMultiple(int x, int y)
//{
//	//求两个数A和B的最小公倍数
//	//int i = x <y ? x : y;//三目运算符，如果x<y就把x赋给i，如果不是，就把y赋给i。
//	int i;
//	for (i = 1; i <= x * y; i++)
//	{
//		if (0 == i % x && 0 == i % y)
//		{
//			return i; //找到最小公倍数，把值返回给i；
//		}
//	}
//
//}
//int main()
//{
//
//	int A = 0, B = 0;
//	scanf("%d %d", &A, &B);
//	printf("最小公倍数为：%d\n", CommonMultiple(A, B));
//	system("pause");
//	return 0;
//}