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
//	//ע�ⲻ��ʹ��scanf��scanf�����ո�һ��������վͽ�����
//	gets_s(input);
//	//��ת��������
//	Swap(input, input + strlen(input) - 1);
//	//��ת����
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
//	//ģ��ʵ��strlen����
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
////ģ��ʵ��strcpy����
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
//	printf("����ǰstr:");
//	printf("%s\n", str);//����д����࣬Ч����ͬ��puts(str);
//	MyStrcpy(str, arr);//���ַ�����arr�����ݸ��Ƶ��ַ�����str����
//	printf("���ƺ�str:");
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
////��һ������������ŵ�ǰ��
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
//		// ��ǰ�����ҵ�һ��ż�����ҵ���ֹͣ
//		while ((left < right) && (a[left] % 2 != 0))
//		{
//			left++;
//		}
//
//		// �Ӻ���ǰ�ң���һ���������ҵ���ֹͣ
//		while ((left < right) && (a[right] % 2 == 0))
//		{
//			right--;
//		}
//
//		// ���ż�����������ҵ����������������ݵ�λ��
//		// Ȼ������ң�ֱ������ָ������
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
//void Swap(char *arr)//Ҳ��������д"char arr[]",һ���Ƽ�ǰ��
//{
//	char* start = arr;//����һ��ͷָ��ָ��������Ԫ��
//	char* end = arr + strlen(arr) - 1;//����һ��βָ��ָ������β��
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
//	//ע�ⲻ��ʹ��scanf��scanf�����ո�һ��������վͽ�����
//	gets_s(arr);
//	//char arr[100] = "abcd1234";//Ҫ���Լ����������ֱ������д
//	//��ת��������
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
// //������������������
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
//	printf("����ǰ��%d %d\n", num1, num2);
//	Swap(&num1, &num2);
//	printf("������%d %d\n", num1, num2);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//#pragma warning (disable:4996)
//void Swap(int* x, int* y)
//{
// //����������������������ʱ������
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
//	printf("����ǰ��%d %d\n", num1, num2);
//	Swap(&num1, &num2);
//	printf("������%d %d\n", num1, num2);
//	system("pause");
//	return 0;
//}