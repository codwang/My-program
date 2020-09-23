//#include<stdio.h>
//#include<windows.h>
//#include<string.h>
//#include<stdlib.h>
//#pragma warning (disable:4996)
//#define SIZE 10
//typedef struct stu
//{
//	char name[16] ;
//	char sex[16];
//	int age;
//	char phone[32];
//	char address[32];
//};
//void Menu()//菜单
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
//	printf("**********8.退出系统******************\n");
//	printf("**************************************\n");
//	printf("**************************************\n");
//	printf("请选择->\n");
//}
//void Init(stu* p)
//{
//	for (int i = 0; i < SIZE; i++)
//	{
//		p[i] = { "0","0",0,"0","0" };
//	}
//}
//void Add( stu *p)//添加联系人信息
//{
//	printf("请输入要添加的信息：\n");
//	char input[4];
//	int i = 0;
//	do
//	{
//		printf("请输入第%d个联系人信息\n", i + 1);
//		char name_t[16]; scanf("%s", &name_t);
//		char sex_t[16]; scanf("%s", &sex_t);
//		int age_t; scanf("%d", &age_t);
//		char phone_t[32]; scanf("%s", &phone_t);
//		char address_t[32]; scanf("%s", &address_t);
//		strcpy(p[i].name, name_t);
//		strcpy(p[i].sex, sex_t);
//		p[i].age = age_t;
//		strcpy(p[i].phone, phone_t);
//		strcpy(p[i].address, address_t);
//		printf("录入完毕！是否继续录入？y or n\n");
//		scanf("%s",&input);
//		i++;
//	} while (strcmp(input, "y") == 0&&i<SIZE);
//}
//void Search(stu* p) //查找指定联系人信息
//{
//	printf("请输入要查找的联系人的名称：\n");
//	char name_t[16];//名字
//	scanf("%s",name_t);
//	for (int i = 0; i < SIZE; i++)
//	{
//
//		if (strcmp(p[i].name, name_t) == 0)
//		{
//			printf("查找成功！\n");
//			printf("%s,%s,%d,%s,%s\n", p[i].name, p[i].sex, p[i].age, p[i].phone, p[i].address);
//		}
//	}
//
//}
//void Delete(stu* p)//删除指定联系人信息
//{
//	printf("请输入要删除的联系人名称：");
//	char name_t[16];//名字
//	scanf("%s", name_t);;
//	int i = 0;
//	for ( i = 0; i < SIZE; i++)
//	{
//
//		if (strcmp(p[i].name, name_t) == 0)
//		{
//			for (i; i < SIZE-1 ; i++)
//			{
//				strcpy(p[i].name, p[i + 1].name);
//				strcpy(p[i].sex, p[i + 1].sex);
//				p[i].age = p[i + 1].age;
//				strcpy(p[i].phone, p[i + 1].phone);
//				strcpy(p[i].address, p[i + 1].address);
//			}
//			p[i] = { "0","0",0,"0","0" };
//		}
//	}
//	printf("删除成功！\n");
//}
//void ALLDelete(stu* p)//清空所有联系人信息
//{
//	for (int i = 0; i < SIZE; i++)
//	{
//		p[i] = { "0","0",0,"0","0" };
//	}
//	printf("已清空所有联系人信息!\n");
//}
//void Sort(stu* p)//以名字排序所有联系人
//{
//	int i = 0;
//	for (; i < SIZE; i++)
//	{
//		for (int j = 0; j < SIZE; j++)
//			if (strcmp(p[j].name, p[j + 1].name) == 1)
//			{
//				char name_t[16];
//				char sex_t[16];
//				int age_t;
//				char phone_t[32];
//				char address_t[32];
//				strcpy(name_t, p[j].name);
//				strcpy(p[j].name, p[j + 1].name);
//				strcpy(p[j + 1].name, name_t);
//
//				strcpy(sex_t, p[j].sex);
//				strcpy(p[j].sex, p[j + 1].sex);
//				strcpy(p[j + 1].sex, sex_t);
//
//				age_t = p[j].age; //18
//				p[j].age = p[j + 1].age;//19
//				p[j + 1].age = age_t;//18
//
//				strcpy(phone_t, p[j].phone);
//				strcpy(p[j].phone, p[j + 1].phone);
//				strcpy(p[j + 1].phone, phone_t);
//
//				strcpy(address_t, p[j].address);
//				strcpy(p[j].address, p[j + 1].address);
//				strcpy(p[j + 1].address, address_t);
//			}
//	}
//	printf("排序完成！\n");
//}
//void Show( stu *p )//显示所有联系人信息
//{
//	int i = 0;
//	for (; i <SIZE ; i++)
//	{
//		if (strcmp(p[i].name, "0") != 0)
//		{
//			printf("%s,%s,%d,%s,%s\n", p[i].name, p[i].sex, p[i].age, p[i].phone, p[i].address);
//		}
//		
//	}	
//}
//void Rework(stu* p) //修改联系人信息
//{
//	printf("请输入要修改联系人的名称：\n");
//	char name_t[16];//名字
//	scanf("%s",name_t);
//	for(int i=0;i<SIZE;i++)
//	{
//	
//		 if (strcmp(p[i].name, name_t) == 0)
//		{
//			printf("请输入要修改的信息：\n");
//			printf("sex or age or phone or address\n");
//			while (1)
//			{
//				char print[10];
//				scanf("%s",print);//输入要改的名称
//				if (strcmp(print, "sex") == 0)
//				{
//					printf("请输入要改的内容：");
//					char sex_t[16];
//					scanf("%s",sex_t);
//					strcpy(p[i].sex, sex_t);
//					printf("修改成功！\n");
//					break;
//				}
//				if (strcmp(print, "age") == 0)
//				{
//					printf("请输入要改的内容：");
//					int age_t;
//					scanf("%d", &age_t);
//					p[i].age = age_t;
//					printf("修改成功！\n");
//					break;
//				}
//				if (strcmp(print, "phone") == 0)
//				{
//					printf("请输入要改的内容：");
//					char phone_t[32];
//					scanf("%s",phone_t);
//					strcpy(p[i].phone, phone_t);
//					printf("修改成功！\n");
//					break;
//				}
//				if (strcmp(print, "address") == 0)
//				{
//					printf("请输入要改的内容：");
//					char address_t[32];
//					scanf("%s",address_t);
//					strcpy(p[i].address, address_t);
//					printf("修改成功！\n");
//					break;
//				}
//			}
//		}
//	
//	} 
//}
//int main()
//{
//	stu student[SIZE] = {};
//	Init(student);
//	int flag=0;
//	while (!flag)
//	{
//		Menu();
//		int input;
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Add(student);//添加联系人信息
//			break;
//		case 2:
//			Delete(student);//删除指定联系人信息
//			break;
//		case 3:
//			Search(student); //查找指定联系人信息
//			break;
//		case 4:
//			Rework(student);//修改指定联系人信息
//			break;
//		case 5:
//			Show(student);//显示所有联系人信息
//			break;
//		case 6:
//			ALLDelete(student);//清空所有联系人信息
//			break;
//		case 7:
//			Sort(student);//以名字排序所有联系人
//			break;
//		case 8:
//			flag = 1;
//			printf("已退出通讯录系统！\n");
//			break;
//		default:
//			printf("您的输入有误请重新输入！");
//		}
//	}
//	system("pause");
//	return 0;
//}