#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void start()
{
	printf("#####��Ϸ��ʼ####\n");
	printf("##1.play 2.end##\n");
	printf("################\n");
}

void game()
{
	int i=0;
	int ret = rand()%100;
	//printf("%d \n", ret);
	printf("������\n");
	do
	{
		scanf("%d", &i);
		if (i < ret)
		{
			printf("��С��\n");
		}
		else if (i>ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
		}

	}while (i != ret);
	
}

int main()//��������Ϸ

{
	int input = 0;
	start();
	srand((unsigned)time(NULL));//����ת��
	do
	{
		printf("������input>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:game();
			break;
		case 0:printf("�˳���Ϸ\n");
			break;
		default:printf("ѡ���������ѡ��\n");
			break;	
		}
	} while (input);
	return 0;
}