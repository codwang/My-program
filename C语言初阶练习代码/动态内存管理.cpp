//#include<stdio.h>
//#include<windows.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//struct A
//{
//	int num;
//	char c[0];//柔性数组
//};
////struct Array
////{
////	int num;
////	int* mem;//指向一个变长的空间
////};
//int main()
//{
	//exit(EXIT_FAILURE);
	/*char* str = (char*)malloc(10);
	if (str == NULL)
	{
		perror("malloc");
		return 1;
	}
	char ptr[] = "hello world";
	str = ptr;
	printf(str);
	exit(EXIT_FAILURE);
	free(str);*/
	/*char* ptr = (char*)malloc(5);
	if (ptr == NULL)
	{
		perror("malloc");
		return 1;
	}
	for (int i = 0; i < 5; i++)
	{
		ptr[i] = i;
	}
	char* temp = (char *)realloc(ptr,20);
	ptr = (temp != NULL ? temp : ptr);
	for (int i = 5; i < 20; i++)
	{
		ptr[i] = i * 2;
	}
	for (int i = 0; i < 20; i++)
	{
		printf("%d ", ptr[i]);
	}
	free(ptr);*/
	//char *tmp=(char *)realloc(ptr, 100000);
	//if (tmp == NULL)
	//{
	//	perror("realloc");
	//	return 1;
	//}
	//ptr = tmp;
	//printf("old address:%p\n", ptr);
	//printf("new address:%p\n", tmp);
	//free(ptr1);
	//free(ptr2);
//	printf("请输入要计算的数据的个数：");
//	int num = 0;
//	scanf("%d", &num);
//	int* ptr = (int*)malloc(num*sizeof(int));
//	if (NULL == ptr)
//	{
//		perror("malloc error!");
//		return 1;
//	}
//	printf("请输入要计算的数据：");
//	for (int i = 0; i < num; i++)
//	{
//		scanf("%d", ptr + i);
//	}
//	int sum = 0;
//	for (int i = 0; i < num; i++)
//	{
//		//printf("%d", ptr[i]);
//		sum += ptr[i];
//	}
//	printf("%d\n", sum);
//	free(ptr);//如果没有释放，就造成内存泄漏	
//	struct A *p =malloc(sizeof(struct A)+50*sizeof(int));
//	p->num = 100;
//	//struct Array* arr = (struct Array*)malloc(sizeof(struct Array));
//
//	//arr->num = 100;
//	//arr->mem = (int*)malloc(arr->num * sizeof(int));
//	////从外向内申请，从内向外释放
//	//free(arr->mem);
//	//free(arr);
//	system("pause");
//	return 0;
//}