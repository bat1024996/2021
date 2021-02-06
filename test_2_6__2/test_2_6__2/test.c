#define _CRT_SECURE_NO_WARNINGS


#include"game.h"

void menu()
{
	printf("*************************************\n");
	printf("********  1.play     0.exit   *******\n");
	printf("*************************************\n");
}
//游戏的算法实现
void game()
{
	//数组--存放棋盘信息
	char board[ROW][COL] = { 0 };
	int ret = 0;
	//初始化棋盘
	Intboard(board, ROW, COL);
	//显示棋盘
	Display_board(board, ROW, COL);
	while (1)
	{
		//玩家走
		Playermove(board, ROW, COL);
		Display_board(board, ROW, COL);
		printf("*************************************\n");
		ret = Checkwin(board, ROW, COL);
		if (ret !='C')
			break;

		//电脑走
		Computermove(board, ROW, COL);
		Display_board(board, ROW, COL);
		printf("*************************************\n");
		ret = Checkwin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
		printf("玩家赢\n");
	if (ret == '#')
		printf("电脑赢\n");
	if (ret == 'Q')
		printf("平局\n");
}


void test()
{
	menu();
	int input = 0;
	do
	{
		printf("请选择》");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	
	} while (input);
}

int main()
{
	srand((unsigned int)time(NULL));
	test();
	return 0;
}