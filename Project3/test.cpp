//#include<stdio.h>
//#include<windows.h>
//struct stu
//{
//	int num;
//	char arr[0];
//};
//int main()
//{
//	printf("%d\n", sizeof(struct stu));
//
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//#include<stdlib.h>
//#include<assert.h>
//#pragma warning(disable:4996)
//int main()
//{
//    char arr[32] = "we are happy";
//    char delim[] = " ";
//    char* p= strtok(arr, delim);
//    while (p)
//    {
//        printf("%s\n", p);
//        p = strtok(NULL, delim);
//        
//    }
//    //printf("%s\n", p);
//    system("pause");
//    return 0;
//}
#include<stdio.h>
#include<stdlib.h>
#include<vld.h>
int main()
{
	int* p = (int*)malloc(sizeof(int));
	*p = 100;

	return 0;
}