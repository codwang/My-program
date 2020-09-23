//#include<stdio.h>
//#include<windows.h>
//#define SIZE 1000
//////实现一个通讯录；
//////通讯录可以用来存储1000个人的信息，每个人的信息包括：姓名、性别、年龄、电话、住址
//////提供方法：
//////添加联系人信息
//////删除指定联系人信息
//////查找指定联系人信息
//////修改指定联系人信息
//////显示所有联系人信息
//////清空所有联系人
//////以名字排序所有联系人
//typedef struct stu {
//	char name[16];//名字
//	char sex[5];//性别
//	int age;//年龄
//	char phone[16];//电话
//	char address[32];//住址
//}student[SIZE],*p;
//void Show()
//{
//	printf("**************************************\n");
//	printf("**************************************\n");
//	printf("*****************通讯录***************\n");
//	printf("**********1.添加联系人信息************\n");
//	printf("**********2.删除指定联系人信息********\n");
//	printf("**********3.查找指定联系人信息********\n");
//	printf("**********4.修改指定联系人信息********\n");
//	printf("**********5.显示所有联系人信息********\n");
//	printf("**********6.清空所有联系人************\n");
//	printf("**********7.以名字排序所有联系人******\n");
//	printf("**************************************\n");
//	printf("**************************************\n");
//	printf("请选择->\n");
//}
//
//int main()
//{
//	Show();
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <windows.h>
//#pragma warning(disable:4996)
//#define SIZE 5
//typedef struct stu
//{
//	char name[16];
//	char sex[16];
//	int age;
//	char phone[32];
//	char address[32];
//};
//void Sort(stu* p)
//{
//	 
//	int i = 0;
//	for (; i < SIZE; i++)
//	{
//		for(int j=0;j<SIZE;j++)
//		if (strcmp(p[j].name, p[j + 1].name) == 1)
//		{
//			char name_t[16];
//			char sex_t[16];
//			int age_t;
//			char phone_t[32];
//			char address_t[32];
//			strcpy(name_t, p[j].name);
//			strcpy(p[j].name, p[j + 1].name);
//			strcpy(p[j + 1].name, name_t);
//
//			strcpy(sex_t, p[j].sex);
//			strcpy(p[j].sex, p[j + 1].sex);
//			strcpy(p[j + 1].sex, sex_t);
//
//			age_t = p[j].age; //18
//			p[j].age =p[j+1].age;//19
//			p[j+1].age = age_t;//18
//
//			strcpy(phone_t, p[j].phone);
//			strcpy(p[j].phone, p[j + 1].phone);
//			strcpy(p[j+ 1].phone, phone_t);
//
//			strcpy(address_t, p[j].address);
//			strcpy(p[j].address, p[j + 1].address);
//			strcpy(p[j + 1].address, address_t);
//		 }
//		 
//	}
//	printf("排序完成！\n");
//}
//void Show(stu* p)//显示所有联系人信息
//{
//	int i = 0;
//	for (; i < SIZE; i++)
//	{
//		printf("%s,%s,%d,%s,%s\n", p[i].name, p[i].sex, p[i].age, p[i].phone, p[i].address);
//	}
//}
//int main()
//{
//
//	stu student[SIZE] = {};
//	student[0] = { "zhangsan","men",18,"1233","陕西省宝鸡市" };
//	student[1] = { "lisi","women",19,"365949","陕西省宝鸡市" };
//	student[2] = { "wangwu","women",25,"258896","陕西省宝鸡市" };
//	student[3] = { "baijf","men",19,"258896","陕西省宝鸡市" };
//	student[4] = { "aisad","women",19,"258896","陕西省宝鸡市" };
//	Show(student);
//	Sort(student);
//	Show(student);
//	system("pause");
//	return 0;
//}