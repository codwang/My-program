//#include<stdio.h>
//#include<Windows.h>
//#include<stdlib.h>
//#include<time.h>
//#pragma warning(disable:4996)
//void Menu()
//{
//	printf("****************************\n");
//	printf("***1.��ʼ��Ϸ    2.Exit*****\n");
//	printf("****************************\n");
//	printf("��ѡ��>��");
//
//}
//void Game()
//{
//	printf("��ӭ�����������Ϸ������\n");
//	srand((unsigned int)time(NULL));
//	int data = rand() % 100 + 1;
//	int num = 0;
//	printf("���򣺼�������������1-100֮������֣������ܲ��ܲ¶ԣ��������԰ɣ�\n");
//	printf("Start   Guess��");
//	for (;;)
//	{
//
//		scanf("%d", &num);
//
//
//		if (num < data)
//		{
//			printf("��Ǹ�����С�ˣ�����\n");
//			printf("Guess  again:");
//		}
//		else if (num > data)
//		{
//			printf("��Ǹ����´��ˣ�����\n");
//			printf("Guess  again:");
//		}
//		else {
//			printf("��ϲ�㣬�¶��ˡ����������%d\n", data);
//			printf("��Ϸ����!!!\n");
//			break;
//		}
//
//	}
//}
//
//int main()
//{
//	int quit = 0;
//
//	while (!quit)
//	{
//		Menu();
//		int select = 0;
//		scanf("%d", &select);
//		switch (select)
//		{
//		case 1:
//			Game();
//			printf("Ҫ��Ҫ����һ�ѣ�\n");
//			break;
//		case 2:
//			printf("Game Over!\n");
//			quit = 1;
//			break;
//		default:
//			printf("��������������������룡\n");
//		}
//
//	}
//	system("pause");
//	return 0;
//}