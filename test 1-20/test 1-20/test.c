#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void start()
{
	printf("#####游戏开始####\n");
	printf("##1.play 2.end##\n");
	printf("################\n");
}

void game()
{
	int i=0;
	int ret = rand()%100;
	//printf("%d \n", ret);
	printf("猜数字\n");
	do
	{
		scanf("%d", &i);
		if (i < ret)
		{
			printf("猜小了\n");
		}
		else if (i>ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
		}

	}while (i != ret);
	
}

int main()//猜数字游戏

{
	int input = 0;
	start();
	srand((unsigned)time(NULL));//类型转换
	do
	{
		printf("请输入input>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:game();
			break;
		case 0:printf("退出游戏\n");
			break;
		default:printf("选择错误，重新选择\n");
			break;	
		}
	} while (input);
	return 0;
}