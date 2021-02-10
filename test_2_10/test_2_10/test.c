#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	int n, i;
//	int a = 0, b = 100;
//	scanf("%d", &n);
//	while(scanf("%d", &i) != '\n')
//	{
//		if (i>a)
//		{
//			a = i;
//		}
//		if (i<b)
//			b = i;
//	}
//	printf("%d\n", a - b);
//	return 0;
//}


//int main()
//{
//	int n, i;
//	int flag = 1;
//	int arr[50] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i<n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i<n; i++)
//	{
//		for (int j = 0; j<i; j++)
//		{
//			if (arr[j]<arr[j + i])//不是降序排列
//				flag = 0;
//			break;
//		}
//	}
//	for (i = 0; i<n; i++)
//	{
//		for (int j = 0; j<i; j++)
//		{
//			if (arr[j]>arr[j + i])//不是升序排列
//				flag = 0;
//			break;
//		}
//	}
//	if (flag)
//		printf("sorted\n");
//	else
//		printf("unsorted\n");
//	return 0;
//}

////判断是否有序
//int main()
//{
//	int n, i,j;
//	int flag = 1;
//	int arr[50] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i<n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i<n; i++)
//	{
//		for ( j = 0; j<i; j++)
//		{
//			if (arr[j]<arr[j + 1])//不是降序排列
//			{
//				for (j = 0; j < i; j++)
//				{
//					if (arr[j]>arr[j + 1])//不是升序排列
//					{
//						flag = 0;
//						goto cheak;
//					}
//				}
//			}
//		}
//	}
//	cheak:
//	if (flag)
//		printf("sorted\n");
//	else
//		printf("unsorted\n");
//	return 0;
//}


//int main()
//{
//	int n, i, k, p;
//	int arr[50] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i<n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &k);
//	for (i = 0; i<n; i++)
//	{
//		if (k>arr[i])
//		{
//			p = i;
//
//		}
//	}
//	for (i = 0; i<n; i++)
//	{
//		if (i == p)
//			printf("%d %d ", arr[p], k);
//		else
//			printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//#define MAX 55
//int a[MAX];
//int main()
//{
//	int cnt = 0; //记录num输出的次数 
//	int flag = 0; //检测序列中是否存在比num更大的数字 
//	int n, i, num;
//	scanf("%d", &n);
//	for (i = 0; i<n; i++)
//		scanf("%d", &a[i]);
//	scanf("%d", &num);
//	for (i = 0; i<n; i++)
//	{
//		if (num<a[i])
//		{
//			flag = 1;
//			if (cnt == 1)
//			{
//				printf("%d ", a[i]);
//				continue;
//			}
//			printf("%d %d ", num, a[i]);
//			cnt++;
//		}
//		else printf("%d ", a[i]);
//	}
//	/* 序列中没有比num更大的数字，将num在最后输出 */
//	if (flag == 0) printf("%d", num);
//	printf("\n");
//	return 0;
//}

////结构体内存对齐

//struct S1
//{
//	char a;
//	int b;
//	char c;
//};
//struct S2
//{
//	char a;
//	char c;
//	int b;
//};
//int main()
//{
//	struct S1 t1 = { 0 };
//	struct S2 t2 = { 0 };
//	printf("%d\n%d\n", sizeof(t1), sizeof(t2));//12 8
//	return 0;
//}
//


int main()
{
	
	return 0;
}
