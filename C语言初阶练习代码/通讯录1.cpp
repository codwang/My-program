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
//void Menu()//�˵�
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
//	printf("**********8.�˳�ϵͳ******************\n");
//	printf("**************************************\n");
//	printf("**************************************\n");
//	printf("��ѡ��->\n");
//}
//void Init(stu* p)
//{
//	for (int i = 0; i < SIZE; i++)
//	{
//		p[i] = { "0","0",0,"0","0" };
//	}
//}
//void Add( stu *p)//�����ϵ����Ϣ
//{
//	printf("������Ҫ��ӵ���Ϣ��\n");
//	char input[4];
//	int i = 0;
//	do
//	{
//		printf("�������%d����ϵ����Ϣ\n", i + 1);
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
//		printf("¼����ϣ��Ƿ����¼�룿y or n\n");
//		scanf("%s",&input);
//		i++;
//	} while (strcmp(input, "y") == 0&&i<SIZE);
//}
//void Search(stu* p) //����ָ����ϵ����Ϣ
//{
//	printf("������Ҫ���ҵ���ϵ�˵����ƣ�\n");
//	char name_t[16];//����
//	scanf("%s",name_t);
//	for (int i = 0; i < SIZE; i++)
//	{
//
//		if (strcmp(p[i].name, name_t) == 0)
//		{
//			printf("���ҳɹ���\n");
//			printf("%s,%s,%d,%s,%s\n", p[i].name, p[i].sex, p[i].age, p[i].phone, p[i].address);
//		}
//	}
//
//}
//void Delete(stu* p)//ɾ��ָ����ϵ����Ϣ
//{
//	printf("������Ҫɾ������ϵ�����ƣ�");
//	char name_t[16];//����
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
//	printf("ɾ���ɹ���\n");
//}
//void ALLDelete(stu* p)//���������ϵ����Ϣ
//{
//	for (int i = 0; i < SIZE; i++)
//	{
//		p[i] = { "0","0",0,"0","0" };
//	}
//	printf("�����������ϵ����Ϣ!\n");
//}
//void Sort(stu* p)//����������������ϵ��
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
//	printf("������ɣ�\n");
//}
//void Show( stu *p )//��ʾ������ϵ����Ϣ
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
//void Rework(stu* p) //�޸���ϵ����Ϣ
//{
//	printf("������Ҫ�޸���ϵ�˵����ƣ�\n");
//	char name_t[16];//����
//	scanf("%s",name_t);
//	for(int i=0;i<SIZE;i++)
//	{
//	
//		 if (strcmp(p[i].name, name_t) == 0)
//		{
//			printf("������Ҫ�޸ĵ���Ϣ��\n");
//			printf("sex or age or phone or address\n");
//			while (1)
//			{
//				char print[10];
//				scanf("%s",print);//����Ҫ�ĵ�����
//				if (strcmp(print, "sex") == 0)
//				{
//					printf("������Ҫ�ĵ����ݣ�");
//					char sex_t[16];
//					scanf("%s",sex_t);
//					strcpy(p[i].sex, sex_t);
//					printf("�޸ĳɹ���\n");
//					break;
//				}
//				if (strcmp(print, "age") == 0)
//				{
//					printf("������Ҫ�ĵ����ݣ�");
//					int age_t;
//					scanf("%d", &age_t);
//					p[i].age = age_t;
//					printf("�޸ĳɹ���\n");
//					break;
//				}
//				if (strcmp(print, "phone") == 0)
//				{
//					printf("������Ҫ�ĵ����ݣ�");
//					char phone_t[32];
//					scanf("%s",phone_t);
//					strcpy(p[i].phone, phone_t);
//					printf("�޸ĳɹ���\n");
//					break;
//				}
//				if (strcmp(print, "address") == 0)
//				{
//					printf("������Ҫ�ĵ����ݣ�");
//					char address_t[32];
//					scanf("%s",address_t);
//					strcpy(p[i].address, address_t);
//					printf("�޸ĳɹ���\n");
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
//			Add(student);//�����ϵ����Ϣ
//			break;
//		case 2:
//			Delete(student);//ɾ��ָ����ϵ����Ϣ
//			break;
//		case 3:
//			Search(student); //����ָ����ϵ����Ϣ
//			break;
//		case 4:
//			Rework(student);//�޸�ָ����ϵ����Ϣ
//			break;
//		case 5:
//			Show(student);//��ʾ������ϵ����Ϣ
//			break;
//		case 6:
//			ALLDelete(student);//���������ϵ����Ϣ
//			break;
//		case 7:
//			Sort(student);//����������������ϵ��
//			break;
//		case 8:
//			flag = 1;
//			printf("���˳�ͨѶ¼ϵͳ��\n");
//			break;
//		default:
//			printf("���������������������룡");
//		}
//	}
//	system("pause");
//	return 0;
//}