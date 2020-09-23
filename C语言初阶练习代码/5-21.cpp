//#include<stdio.h>
//#include<windows.h>
//typedef struct str {
//	int age;
//	char name[32];
//	char sex;
//	char telephone[16];
//}str_t;
//int main()
//{
//	struct str student1 = { 18,"王二麻子",'m',"15591794328" };
//	str_t student2 = { 20,"张三",'w',"17392682810" };
//	str_t* p = &student1;
//	printf("%d %s\n", student1.age,student1.name);
//	printf("%d %s\n", student2.age, student2.name);
//	printf("%d %s\n", p->age, p->name);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//void  Show(int a[], int num)
//{
//	int* p = a;
//	int i = 0;
//	for (; i < num; i++)
//	{
//		printf("%d ", (*p) + i);
//	}
//
//}
//int main()
//{
//	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int num = sizeof(a) / sizeof(a[0]);
//	Show(a, num);
//	printf("\n");
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//#include<string.h>
//void  Swap(char *str, int num)
//{
//	char temp = 0;
//	char* start = str;                     
//	char* end = str + num - 1;
//	while (start<end)
//	{
//		temp = *start;
//		*start = *end;
//		*end = temp;
//		start++, end--;
//	}
//
//}
//int main()
//{
//	char str[100] = { 0 };
//	 gets_s(str);
//	 int num = strlen(str);
//	printf("交换前%s\n", str);
//	Swap(str, num);
//	printf("交换后%s\n", str);
//	printf("\n");
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//#pragma warning(disable:4996)
//int Myadd(int n)
//{
//	int sum = 0;
//	int count = n;
//	for (int i = 0; i < 5; i++)
//	{
//		sum += n;
//		n = n * 10 + count;
//	}
//	return sum;
//
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("%d\n", Myadd(num));
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//#pragma warning(disable:4996)
//void  Show(int n)
//{
//	//打印一个数二进制的奇数位和偶数位
//	int i = 0;
//	printf("奇数位：");
//	for (i = 30; i >= 0; i-=2)
//	{
//		if ( n & (1 << i)) {
//			printf("%d ", 1);
//		}
//		else  {
//			printf("%d ",0);
//		}
//	}
//	printf("\n");
//	printf("偶数位：");
//	for (i = 31; i >= 0; i-=2)
//	{
//		if (n & (1 << i)) {
//			printf("%d ", 1);
//		}
//		else 
//		{
//			printf("%d ", 0);
//		}
//	}
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
//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	int i = 0;
//	int ret = (++i) + (++i) + (++i);
//	printf("ret=%d\n", ret);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//#pragma warning(disable:4996)
//void menu()
//{
//转移表（计算器）
//	printf("*****************************\n");
//	printf("***********计算器************\n");
//	printf("*****1.加法*****2.减法*******\n");
//	printf("*****3.乘法*****4.除法*******\n");
//	printf("*****0.EXIT******************\n");
//	printf("*****************************\n");
//}
//int MyAdd(int x,int y)
//{
//	int n = x + y;
//	return n;
//}
//int MySub(int x, int y)
//{
//	int n = x - y;
//	return n;
//}
//int MyMul(int x, int y)
//{
//	int n = x * y;
//	return n;
//}
//int MyDiv(int x,int y)
//{
//	int n = x / y;
//	return n;
//}
//int main()
//{
//	int select = 0;
//	int(*fun[5])(int, int) = { NULL,MyAdd,MySub,MyMul,MyDiv };
//	while (1)
//	{
//		menu();
//		printf("please select->");
//		scanf("%d", &select);
//		if (select < 0 || select>4)
//		{
//			printf(" Error,please input again!\n");
//			continue;
//		}
//		if (select == 0)
//		{
//			printf("已退出\n");
//			break;
//		}
//		int x = 0;
//		int y = 0;
//		printf("please enter x:");
//		scanf("%d", &x);
//		printf("please enter y:");
//		scanf("%d", &y);
//		int num = fun[select](x, y);
//		printf("result:%d\n", num);
//	}
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//#include<assert.h>
//#pragma warning(disable:4996)
//void Show(char*str,int len,int num)
//{
//	assert(str);
//	num %= len;
//	while (num)
//	{
//		char temp = str[0];
//		int i = 0;
//		for (i = 0; i < len; i++)
//		{
//			str[i] = str[i + 1];
//		}
//		str[len - 1] = temp;
//		num--;
//	}
//}
//int main()
//{
//	char arr1[] = "abcd1234";
//	char arr2[] = "cd1234ab";
//	int len = strlen(arr1);
//	int num = 0;
//	printf("请输入要左旋的次数:");
//	scanf("%d", &num);
//	Show(arr1,len,num);
//	/*if (strcmp(arr1, arr2) == 0)
//	{
//		printf("Yes!\n");
//	}
//	else {
//		printf("No!\n");
//	}*/
//	printf("%s\n", arr1);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//#include<string.h>
//#include<assert.h>
//#pragma warning(disable:4996)
//void Show(char*str,int len)
//{
//		assert(str);
//		char temp = str[0];
//		int i = 0;
//		for (i = 0; i < len; i++)
//		{
//			str[i] = str[i + 1];
//		}
//		str[len - 1] = temp;	
//}
//int main()
//{
//	char arr1[] = "abcd1234";
//	char arr2[] = "cd1234ab";
//	int len = strlen(arr1);
//	int num = 0;
//	printf("请输入要左旋的次数:");
//	scanf("%d", &num);
//	num %= len;
//	while (num)
//	{
//		Show(arr1, len);
//		if (strcmp(arr1, arr2) == 0)
//		{
//			printf("Yes!\n");
//		    
//		}
//		if(strcmp(arr1, arr2) != 0)
//		{
//			printf("No!\n");
//				
//		}
//		num--;
//	}
//	printf("%s\n", arr1);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>
////模拟实现strcpy函数
//void MyStrcpy(char* str, const char* arr)
//{
//	while (*arr != '\0')
//	{
//		*str = *arr;
//		str++, arr++;
//	}
//	*str = '\0';
//}
//int main()
//{
//	const char arr[] = "abcdefgh";
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
//#include<stdio.h>
//#include<windows.h>
//int Mystrlen( const char* arr)
//{
//	const char* start = arr;
//	const char* end = arr;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;//两指针相减就是经历的元素个数
//}
//int main()
//{
//	const char arr[] = "abcd1234";
//	printf("%d\n", Mystrlen(arr));
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//#include<assert.h>
//char* Mystrcpy(char* str, const char* arr)
//{
////模拟strcpy
//	char *ret = str;
//	assert(str);
//	assert(arr);
//	while (*arr!='\0')
//	{
//		*str = *arr;
//		str++;
//		arr++;
//	}
//	*str = '\0';
//	return ret;
//}
//
//int main()
//{
//	const char arr[] = "abcd1234";
//	char str[32];
//	Mystrcpy(str, arr);
//	printf("%s\n", str);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//#include<assert.h>
//void *Mymemove(void* dst,const void* src, size_t num)
//{
//	//模拟实现memove
//	assert(dst != NULL);
//	assert(src != NULL);
//	char* dst_p = (char*)dst;
//	const char* src_p = (char*)src;
//	if (dst_p > src_p && dst_p < src_p + num)
//	{
//		//从右向左
//		while (num > 0)
//		{
//			*(dst_p+num-1) = *(src_p+num-1);	
//			num--;
//		}
//	}
//	else {
//		//从左向右
//		while (num > 0)
//		{
//			*dst_p = *src_p;
//			dst_p++;
//			src_p++;
//			num--;
//		}
//	}
//	return dst;
//}
//int main()
//{
//	char src[32] = "abcdefg123456";
//	int len= strlen(src);
//	//Mymemove(src+3, src, len);//从左往右
//	Mymemove(src, src+3, len);//从右往左
//	printf("%s\n", src);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//#include<assert.h>
////模拟实现strcpy函数
//void* MyStrcpy(char* str, const char* arr)
//{
//	
//	assert(str);
//	assert(arr);
//	char* ret = str;
//	//2
//	//while(*str++=*arr++)
//	//3
//	while (*str = *arr)
//	{
//		str++;
//		arr++;
//	}
//	//1
//	//while (*arr != '\0')
//	//{
//	//	*str = *arr;
//	//	str++;
//	//	arr++;
//	//}
//	//*str = '\0';
//	return ret;
//}
//char* Mystrcat(char* str, const char* arr)
//{
//	assert(str);
//	assert(arr);
//	char* ret = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	while (*str = *arr)
//	{
//		str++;
//		arr++;
//	}
//	return ret;	
//}
//int main()
//{
//	const char arr[] = "abcdefgh";
//	char str[32];
//	char dst[32] = "123";
//	MyStrcpy(str, arr);
//	Mystrcat(dst,Mystrcat(str, arr));
//	printf("str:%s\n", str);//puts(str);
//	printf("dst:%s\n", dst);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//#include<assert.h>
//const char* Mystrstr(const char* arr, const char* str)
//{
//	//模拟实现strstr
//	assert(arr);
//	assert(str);
//	const char *arr_start = arr;
//	const char* arr_p = arr;
//	const char* str_p = str;
//	while (*arr_start)
//	{
//		arr_p = arr_start;
//		str_p = str;
//		while (*str_p  && *str_p == *arr_p)
//		{
//			str_p++;
//			arr_p++;
//			if (*str_p=='\0')
//			{
//				return arr_start;
//			}
//		}
//		arr_start++;
//	}
//      return NULL;
//}
//int main()
//{
//	const char arr[] = "abcd123xyz";
//	const char str[] = "23x";
//	printf("%s\n", Mystrstr(arr, str));
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//#include<assert.h>
//char* Mystrcat(char* str, const char* arr)
//{
//模拟实现strcat
//	assert(str);
//	assert(arr);
//	char* ret = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	while (*str = *arr)
//	{
//		str++;
//		arr++;
//	}
//	return ret;	
//}
//int main()
//{
//	const char arr[] = "abcdefgh";
//	char str[32]="zbc";
//	char dst[32] = "123";
//	Mystrcat(dst,Mystrcat(str, arr));
//	printf("str:%s\n", str);//puts(str);
//	printf("dst:%s\n", dst);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//#include<assert.h>
//int Mystrcmp(const char* arr, const char* str)
//{
//	//模拟实现库函数strcmp
//	assert(arr);
//	assert(str);
//	int ret = 0;
//	 while (!(ret=*(unsigned char *)arr - *(unsigned char*)str)&&*arr&&*str)
//	 {
//		 arr++, str++;
//	 }
//	 if (ret > 0)
//	 {
//		 return 1;
//	 }
//	 else if (ret < 0)
//	 {
//		 return -1;
//	 }
//	 else {
//		 return 0;
//	 }
//}
//int main()
//{
//	const char arr[] = "abcdGdg";
//	const char str[] = "abCdgdg";
//	printf("ret=%d\n", Mystrcmp(arr, str));
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//#include<assert.h>
//int my_atoi(const char* str)
//{
//	//assert(str);
//	//int a = *str - '0';//str++
//	//int b = *str - '0'; //10 * a + b;
//	int result = 0;
//	while (*str)
//	{
//		result = result * 10 + *str - '0';
//		str++;
//	}
//	return result;
//}
//int main()
//{
//	const char* str = "123ab";
//	int res = my_atoi(str);
//	printf("%d\n", res);
//	system("pause");
//	return 0;
//}