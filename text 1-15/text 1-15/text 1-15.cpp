#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<windows.h>

//void beep()
//{
//	printf("%c", '\a');//'\a'是蜂鸣器
//}
//
//int main()
//{
//	//printf("Hello!\007\n");
//	//beep();
//	for (int i = 0; i < 10; i++)//听到了10次‘叮咚’
//	{
//		Sleep(3000);//3000毫秒；Linux是秒
//		//包含于头文件<windows.h>
//		beep();
//	}
//	return 0;
//}



//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int i=0;
//	while (i < 10)
//	{
//		i++;
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d ", i);
//		
//	}
//	return 0;
//}


////int main()
//{
//	int j = 0, i = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("haha\n");//仅输入10个haha
//		}
//	}
//	printf("%d %d", i, j);
//	return 0;
//}

//int main()
//{
//	int i , n;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}


//abc acb bac bca cab cba
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	if (b < c)
//	{
//		b = b^c;
//		c = c^b;
//		b = b^c;
//	}
//	if (a < b)
//	{
//		a = a^b;
//		b = b^a;
//		a = a^b;
//	}
//	if (b < c)
//	{
//		b = b^c;
//		c = c^b;
//		b = b^c;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//int main()
//{
//	int i;
//	for (i = 3; i <= 100; i += 3)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}



int main()
{
	int i;
	for (i = 1000; i <= 2000; i++)
	{
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
			printf("%d ", i);
	}
	return 0;
}