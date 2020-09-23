//#include<stdio.h>
//#include<Windows.h>
//#include<stdlib.h>
//#include<time.h>
//#pragma warning(disable:4996)
//void Menu()
//{
//	printf("****************************\n");
//	printf("***1.开始游戏    2.Exit*****\n");
//	printf("****************************\n");
//	printf("请选择>：");
//
//}
//void Game()
//{
//	printf("欢迎进入猜数字游戏！！！\n");
//	srand((unsigned int)time(NULL));
//	int data = rand() % 100 + 1;
//	int num = 0;
//	printf("规则：计算机会随机生成1-100之间的数字，看你能不能猜对，快来试试吧！\n");
//	printf("Start   Guess：");
//	for (;;)
//	{
//
//		scanf("%d", &num);
//
//
//		if (num < data)
//		{
//			printf("抱歉，你猜小了！！！\n");
//			printf("Guess  again:");
//		}
//		else if (num > data)
//		{
//			printf("抱歉，你猜大了！！！\n");
//			printf("Guess  again:");
//		}
//		else {
//			printf("恭喜你，猜对了。这个数字是%d\n", data);
//			printf("游戏结束!!!\n");
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
//			printf("要不要再来一把？\n");
//			break;
//		case 2:
//			printf("Game Over!\n");
//			quit = 1;
//			break;
//		default:
//			printf("你的输入有误，请重新输入！\n");
//		}
//
//	}
//	system("pause");
//	return 0;
//}