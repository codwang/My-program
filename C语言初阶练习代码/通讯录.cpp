//#include<stdio.h>
//#include<windows.h>
//#define SIZE 1000
//////ʵ��һ��ͨѶ¼��
//////ͨѶ¼���������洢1000���˵���Ϣ��ÿ���˵���Ϣ�������������Ա����䡢�绰��סַ
//////�ṩ������
//////�����ϵ����Ϣ
//////ɾ��ָ����ϵ����Ϣ
//////����ָ����ϵ����Ϣ
//////�޸�ָ����ϵ����Ϣ
//////��ʾ������ϵ����Ϣ
//////���������ϵ��
//////����������������ϵ��
//typedef struct stu {
//	char name[16];//����
//	char sex[5];//�Ա�
//	int age;//����
//	char phone[16];//�绰
//	char address[32];//סַ
//}student[SIZE],*p;
//void Show()
//{
//	printf("**************************************\n");
//	printf("**************************************\n");
//	printf("*****************ͨѶ¼***************\n");
//	printf("**********1.�����ϵ����Ϣ************\n");
//	printf("**********2.ɾ��ָ����ϵ����Ϣ********\n");
//	printf("**********3.����ָ����ϵ����Ϣ********\n");
//	printf("**********4.�޸�ָ����ϵ����Ϣ********\n");
//	printf("**********5.��ʾ������ϵ����Ϣ********\n");
//	printf("**********6.���������ϵ��************\n");
//	printf("**********7.����������������ϵ��******\n");
//	printf("**************************************\n");
//	printf("**************************************\n");
//	printf("��ѡ��->\n");
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
//	printf("������ɣ�\n");
//}
//void Show(stu* p)//��ʾ������ϵ����Ϣ
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
//	student[0] = { "zhangsan","men",18,"1233","����ʡ������" };
//	student[1] = { "lisi","women",19,"365949","����ʡ������" };
//	student[2] = { "wangwu","women",25,"258896","����ʡ������" };
//	student[3] = { "baijf","men",19,"258896","����ʡ������" };
//	student[4] = { "aisad","women",19,"258896","����ʡ������" };
//	Show(student);
//	Sort(student);
//	Show(student);
//	system("pause");
//	return 0;
//}