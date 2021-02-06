#include"game.h"

void Intboard(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';//��ʼ������Ϊ�ո�
		}
	}
}
void Display_board(char board[ROW][COL], int row, int col)
{
	//int i = 0;
	//for (i = 0; i < row; i++)
	//{
	//	//��ӡһ�е�����
	//	printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
	//	if (i<row-1)//��ӡ�ָ���
	//		printf("---|---|---\n");
	//}

	int i, j;
	for ( i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (i == 0)
				printf("  %d ",j+1);
		}
		printf("\n");
		printf("%d", i + 1);
		for (j = 0; j < col; j++)
		{
			/*if (i == 0)
				printf(" %d ", j);*/
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		//��ӡ�ָ���
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				if (j == 0)
					printf(" ");
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}


void Playermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�����\n");
	while (1)
	{
		printf("������Ҫ�µ�����>> ");
		scanf("%d%d", &y, &x);//������ѧ����
		if (x > 0 && x <= row&&y > 0 && y <=col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("�����걻ռ�ã�����������\n");
		}
		else
		{
			printf("��������Ƿ������������룡\n");
		}
	}
}

void Computermove(char board[ROW][COL], int row, int col)
{
	printf("������\n");
	int x, y;
	 while (1)
	 {
		 x = rand() % row + 1;
		 y = rand() % col + 1;
		 if (board[x - 1][y - 1] == ' ')
		 {
			 board[x - 1][y - 1] = '#';
			 break;
		 }
	 }
}
int isfull(char board[ROW][COL], int row, int col)
{
	int i, j;
	int flag = 0;
	for (i = 0; i < row; i++)
	{
		
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				flag = 1;
		}
	}
	return flag;
}

int Checkwin(char board[ROW][COL], int row, int col)
{
	int i;
	for (i = 0; i < row; i++)
	{
		//����
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
			return board[i][0];
		//����
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
			return board[0][i];
		if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] != ' ')
			return board[1][1];
		if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] != ' ')
			return board[1][1];
	}
	if (isfull(board, ROW, COL) == 1)
		return 'C';
	return 'Q';
	
	
}






