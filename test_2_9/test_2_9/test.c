#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<string.h>

//int main()
//{
//	const char*str1 = "abcdef";
//	const char*str2 = "bbb";
//	if (strlen(str2) - strlen(str1)>0)
//	{
//		printf("str2>str1\n");//strlen返回值为无符号整形
//	}
//	else
//	{
//		printf("srt1>str2\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n, i, j;
//	int arr[40] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i<n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i<n - 1; i++)
//	{
//		for (j = 0; j<n - 1 - i; j++)
//		{
//			if (arr[j]<arr[j + 1])
//			{
//				int t = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = t;
//			}
//		}
//	}
//	for (i = 0; i<5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	char a, b;
//	/*scanf("%c%c", &a, &b);
//	if (islower(a))*/
//
//
//	return 0;
//}

//int main()
//{
//	char arr[30];
//	gets(arr);
//	int a = 0, b = 0;
//	char*p = arr;
//	while (*p != '0')
//	{
//		if (*p = 'A')
//			a++;
//		else
//			b++;
//	}
//	if (a<b)
//		printf("B\n");
//	if (a>b)
//		printf("A\n");
//	else
//		printf("E\n");
//
//	return 0;
//}

//int main()
//{
//	int i, j, n;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i<n; i++)
//		{
//			for (j = 0; j<n; j++)
//			{
//				if (i<n - j-1)//条件判断
//				{
//					printf("  ");
//				}
//				else
//					printf("* ");
//			}
//			printf("\n");
//
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i, j;
//		for (i = 0; i<n; i++)//一行一行的打印
//		{
//			for (j = 0; j<n - i - 1; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j<i + 1; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//}


//打印菱形图形

//int main()
//{
//	int a;
//	while (scanf("%d", &a)!=EOF)
//	{
//		for (int i = 0; i <= a; ++i)//a+1行 上半部分
//		{
//			for (int k = 0; k<a - i; ++k)//空格
//				printf(" ");
//			for (int j = 0; j <= i; ++j)//*与空格
//				printf("* ");
//			printf("\n");
//		}
//		for (int i = a; i>0; --i)//a行   下半部分
//		{
//			for (int k = 0; k <= a - i; ++k)
//				printf(" ");
//			for (int j = 0; j<i; ++j)
//				printf("* ");
//			printf("\n");
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int n, i, j;
//	while (~scanf("%d", &n))
//	{
//		for (i = 0; i<n; i++)
//		{
//			for (j = 0; j<i; j++)
//				printf(" ");
//			printf("* ");
//			printf("\n");
//		}
//	}
//	return 0;
//}



