//#include<stdio.h>
//#include<windows.h>
//#include<stdlib.h>
//#include<time.h>
//#pragma warning (disable:4996)
//#define ROW 10
//#define COL 10
//#define NUM 10 //部署雷的个数
//void Menu()
//{
//	printf("##############################\n");
//	printf("####欢迎来到我的扫雷游戏######\n"); 
//	printf("##############################\n");
//	printf("##1.开始游戏        2.Exit####\n");
//	printf("##############################\n");
//	printf("Please Select=>:");
//}
//void InitBoard(char board[][COL],int row,int col,char temp)
//{
//	int i = 0; 
//	for (; i < row; i++)
//	{
//		for (int j=0;  j < col; j++)
//		{
//			board[i][j] = temp;	
//		}
//	}
//}
//void SetMine(char mine[][COL], int row, int col)
//{
//	int n = NUM;
//	while (n) {
//		int x = rand() % (row - 2) + 1;
//		int y = rand() % (col - 2) + 1;
//		if (mine[x][y] == '1')
//		{
//			continue;
//		}
//		mine[x][y] = '1';
//		n--;
//	}
//	
//}
//void ShowBoard(char board[][COL], int row, int col)
//{
//	int i = 1;
//		printf("   ");
//	for (; i <= col-2; i++)
//	{
//		printf("%-2d|", i);	
//	}
//	printf("\n");
//	for (i = 1; i <= col - 2; i++) {
//		printf("%3s","----");
//	}
//	printf("---\n");
//	for (i = 1; i <= row - 2; i++)
//	{
//		printf("%2d|", i);
//
//		int j = 1;
//		for (; j <=col - 2; j++)
//		{
//			printf("%-2c|", board[i][j]);
//		}
//		printf("\n");
//		for (j = 1; j <= col - 2; j++)
//		{
//			printf("%3s", "----");
//		}
//		printf("---\n");
//	}
//}
//char  GetNum(char mine[][COL], int x,int  y)
//{
//	return  mine[x-1][y-1] + mine[x-1][y] +mine[x-1][y+1] + mine[x][y-1] +\
//		mine[x][y+1] + mine[x+1][y-1] + mine[x+1][y] + mine[x+1][y+1]-7*'0'; 
//	
//}
//void Game()
//{
//	srand((unsigned long)time(NULL));
//	
//	char board[ROW][COL];
//	char mine[ROW][COL];
//	InitBoard(board,ROW,COL, '*');
//	InitBoard(mine, ROW, COL, '0');
//	SetMine(mine, ROW, COL);
//	int count = (ROW - 2) * (COL - 2) - NUM;
//	system("cls");
//	do {
//		int x = 0;
//		int y = 0;
//		ShowBoard(board,ROW,COL);
//		printf("请输入你要扫的位置->:");
//		scanf("%d %d", &x, &y);
//		if (x<1||x>10||y<1||y>10)
//		{
//			printf("你输入的位置有误，请重新输入：\n");
//			continue;
//		}
//		if (board[x][y] != '*')
//		{
//			printf("你输入的位置有误，请重新输入：\n");
//			continue;
//		}
//		if (mine[x][y] == '0')
//		{
//			count--;
//			char num = GetNum(mine, x, y);
//			board[x][y] = num;
//		}
//		else {
//			printf("你输入的位置(%d,%d),有雷!\n", x, y);
//			break;
//		}
//	} while (count>0);
//	if (count > 0)
//	{
//		printf("Game Over,你被炸死了!\n");
//		
//	}
//	else
//	{
//		printf("Game Over，恭喜你，成功啦!\n");
//	}
//	ShowBoard(mine, ROW, COL);
//}
//int main()
//{
//	
//	int quit = 0;
//	do {
//		int select = 0;
//		Menu();
//		scanf("%d", &select);
//		switch (select)
//		{
//		case 1:
//			Game();
//			printf("当前游戏已结束，是否再来一把?\n");
//			break;
//		case 2:
//			quit = 1;
//			printf("游戏退出!\n");
//			break;
//		default:
//			printf("输入有误，请重新选择!\n");
//			break;
//		}
//	} while (!quit);
//
//	system("pause");
//	return 0;
//}