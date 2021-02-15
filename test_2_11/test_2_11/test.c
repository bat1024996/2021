#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()//143
//{
//	int i, j, count = 0;
//	for (i = 100; i<1000; i++)
//	{
//		for (j = 2; j<=i / 2; j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (j > i / 2)
//			//printf("%d ", i);
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//#include <stdio.h>
//#include <math.h>
//
//int main(void)
//{
//	int count = 0;
//	int i, j, isprime;
//
//	for (i = 100; i < 1000; i++)
//	{
//		isprime = 1;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (0 == i % j)
//			{
//				isprime = 0;
//				break;
//			}
//		}
//		if (isprime)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	//printf("%d\n", count);
//
//	return 0;
//}


//int main()
//{
//	int n, m;
//	int i, j;
//	int ii=0, jj=0;//记得为变量赋初值
//	int arr[10][10];
//	int max;
//	scanf("%d%d", &n, &m);
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j<m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//
//			if ((i == 0) && (j == 0))
//				max = arr[i][j];
//			else  if (arr[i][j]>max)
//			{
//				max = arr[i][j];
//				ii = i + 1;
//				jj = j + 1;
//			}
//		}
//	}
//	printf("%d %d", ii, jj);
//	return 0;
//}




//输出一行，为正整数n表示为六进制的结果
//120 ->320
//递归实现

//void Fun(int n)
//{
//	//int i, j;
//	if (n / 6 != 0)
//		Fun(n / 6);
//
//	printf("%d", n % 6);
//	
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Fun(n);
//	return 0;
//}


//int max3(int x, int y, int z)
//{
//	if (x < z && y < z)
//	{
//		return z;
//	}
//	if (x < y && z < y)
//	{
//		return y;
//	}
//	if (y < x && z < x)
//	{
//		return x;
//	}
//	return 0;
//}
//int main(void)
//{
//	float m;
//	int a, b, c;
//
//	scanf("%d %d %d", &a, &b, &c);
//	m = (float)max3(a + b, b, c) / (max3(a, b + c, c) + max3(a, b, b + c));
//	printf("%.2f\n", m);
//
//	return 0;
//}
//

//查找数字
//第一行，一个整数，表示n（1 <= n <= 100）。
//第二行，共输入n个整数，两个整数之间用空格分隔。
//第三行，输入一个整数，表示要查找的整数x。
//#include<stdlib.h>
//
//int main()
//{
//	int n, x;
//	int count = 0;
//	scanf("%d", &n);
//	int *p =(int*) malloc(n*sizeof(int));
//	if (p == NULL)
//	{
//		exit(-1);
//	}
//	else
//	{
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", p + i);
//		}
//		scanf("%d", &x);
//		for (int i = 0; i < n; i++)
//		{
//			if (*(p + i) == x)
//				count++;
//		}
//		printf("%d", count);
//
//	}
//	return 0;
//}

//有序插入一个数
//#include <stdio.h>
//#define N 50
//
//int main(void)
//{
//	int i, j, k, t, n, a[N + 1];
//
//	scanf("%d", &n);
//	getchar();
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	getchar();
//	scanf("%d", &j);
//	for (i = 0; i < n; i++)
//	{
//		if (j <= a[i])
//		{
//			for (k = n - 1; k >= i; k--)
//			{
//				a[k + 1] = a[k];//数组向后移动;
//			}
//			a[i] = j;//放置添加的数;
//			break;
//		}
//	}
//	if (i == n)//如果要添加的数比原数组所有元素都大;
//	{
//		a[i] = j;//就放置到数组末尾;
//	}
//	for (i = 0; i < n + 1; i++)
//	{
//		printf("%d ", a[i]);
//	}
//
//	return 0;
//}

