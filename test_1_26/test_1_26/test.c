#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	int i = 10;
//	i = i-- - --i * (i = -3) * i++ + ++i;
//	printf("i = %d\n", i);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%d %d", --a, ++a);
//	return 0;
//}

//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun();
//	printf("%d\n", answer);//输出多少？
//	return 0;
//}

//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int count = 0;
//	int c = a^b;
//	/*while (((c >> 1) & 1) == 1)
//	{
//		count++;
//	}*/
//	for (int i = 0; i < 32; i++)
//	{
//		if ((c >> i) & 1)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	for (int i = 1; i < 32; i += 2)
//	{
//		((a >> i) & 1) == 1 ? printf("1") : printf("0");
//	}
//	printf("\n");
//	for (int i = 0; i < 32; i += 2)
//	{
//		((a >> i) & 1) == 1 ? printf("1") : printf("0");
//	}
//
//	return 0;
//}

//输入一个整数，输出该数32位二进制表示中1的个数。其中负数用补码表示。
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) == 1)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}





