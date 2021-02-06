#define _CRT_SECURE_NO_WARNINGS


#include"game.h"

void menu()
{
	printf("*************************************\n");
	printf("********  1.play     0.exit   *******\n");
	printf("*************************************\n");
}
//��Ϸ���㷨ʵ��
void game()
{
	//����--���������Ϣ
	char board[ROW][COL] = { 0 };
	int ret = 0;
	//��ʼ������
	Intboard(board, ROW, COL);
	//��ʾ����
	Display_board(board, ROW, COL);
	while (1)
	{
		//�����
		Playermove(board, ROW, COL);
		Display_board(board, ROW, COL);
		printf("*************************************\n");
		ret = Checkwin(board, ROW, COL);
		if (ret !='C')
			break;

		//������
		Computermove(board, ROW, COL);
		Display_board(board, ROW, COL);
		printf("*************************************\n");
		ret = Checkwin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
		printf("���Ӯ\n");
	if (ret == '#')
		printf("����Ӯ\n");
	if (ret == 'Q')
		printf("ƽ��\n");
}


void test()
{
	menu();
	int input = 0;
	do
	{
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
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