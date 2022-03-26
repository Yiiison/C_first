#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"三子棋头文件(声明与定义).h"

//主菜单
void menu()
{
	printf("***************************\n");
	printf("***************************\n");
	printf("*****     1.play      *****\n");
	printf("*****     2.exit      *****\n");
	printf("***************************\n");
	printf("***************************\n");
	printf("***************************\n");
}
//游戏界面
void play()
{
//储存数据
	char Q[H][L];
//初始化棋盘

	cleanQ(Q,H, L);
//打印棋盘

	displayQ(Q, H,L);
//接受游戏状态
	char ret = 0;
	while (1)
	{
		//玩家下棋
		Pmove(Q, H, L);
			
		displayQ(Q, H, L);
		//判断玩家是否赢
		ret = IsWin(Q, H, L);
		if (ret != 'C')
			break;
		//电脑走
		Cmove(Q, H, L);

		displayQ(Q, H, L);

		ret = IsWin(Q, H, L);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
	{
		printf("玩家赢了\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢了\n");
	}
	else
	{
		printf("平局\n");
	}




}


int main()
{
	int i = 0;
	do {
		menu();
		printf("请选择\n");
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			printf("开始游戏\n");
			play();
//开始游戏
			break;
		case 2:
			printf("退出游戏\n");
				break;
		default:
			printf("请重新输入\n");
			break;
		}

	}while (i);
	return 0;
}
