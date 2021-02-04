#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>

//int main()
//{
//
//	char killer = 'A';
//	for (; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//		{
//			printf("killer is %c\n", killer);
//		}
//	}
//	return 0;
//}

//猜名次

//int main()
//{
//
//	int A, B, C, D, E;
//	for (A = 1; A <= 5; A++)
//	{
//		for (B = 1; B <= 5; B++)
//		{
//			for (C = 1; C <= 5; C++)
//			{
//				for (D = 1; D <= 5; D++)
//				{
//					for (E = 1; E <= 5; E++)
//					{
//						if ((B == 2) + (A == 3) == 1 && (B == 2) + (E == 4) == 1
//							&& (C == 1) + (D == 2) == 1 && (C == 5) + (D == 3) == 1 && (E == 4) + (A == 1) == 1)
//						{
//							if (A*B*C*D*E != 120)
//								continue;
//							else
//								printf("A=%d,B=%d,C=%d,D=%d,E=%d\n", A, B, C, D, E);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}


//#define N 10
//int main()
//{
//	int i, j, n;
//	int arr[N][N];
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			arr[i][j] = 1;
//		}
//	}
//	for (i = 2; i < n; i++)
//	{
//		for (j = 1; j < i; j++)
//		{
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//

//int cmp(const void*p1, const void* p2)//比较函数
//{
//	return (*(int*)p1) - (*(int*)p2);
//}
//void Swap(void* p1, void*p2, int sz)//交换函数
//{
//	int i;
//	char tmp;
//	for (i = 0; i < sz; i++)
//	{
//		tmp = *((char*)p1 + i);
//		*((char*)p1 + i) = *((char*)p2 + i);
//		*((char*)p2 + i) = tmp;
//	}
//}
//void bobble_sort(void*ptr, int n, int sz, int(*cmp)(void*, void*))
//{
//	int i =0, j = 0;
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (cmp((char*)ptr + j*sz, (char*)ptr + (j + 1)*sz)>0)
//			{
//				Swap((char*)ptr + j*sz, (char*)ptr + (j + 1)*sz,sz);
//			}
//		}
//	}
//}
//
//
//int main()
//{
//	int arr[] = { 2, 4, 3, 1, 7, 8, 9, 5, 0, 6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i;
//	bobble_sort(arr, sz, sizeof(int), cmp);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//判断一个字符串是否为旋转字符串


#include<stdlib.h>
#include<string.h>
void reverse(char* start, char* end)
{
	while (start < end)
	{
		char tmp = *start;
		*start = *end;
		*end = tmp;
		start++, end++;
	}
}
void left_rotate(char* str, int k)
{
	int len = strlen(str);
	reverse(str, str + k - 1);
	reverse(str + k, str + len - 1);
	reverse(str, str + len - 1);
}
int is_rotate(char*dest, char*src)
{
	if (strlen(dest) != strlen(src))
	{
		return 0;
	}
	if (!strcmp(dest, src))
	{
		return 1;
	}
	int k = strlen(dest);
	k--;
	while (k--)
	{
		left_rotate(src, 1);
		if (!strcmp(dest, src))
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	char dest[100];
	char src[100];
	scanf("%s", &dest);
	scanf("%s", &src);
	printf("%d\n", is_rotate(dest, src));

	return 0;
}

//
//#include<string.h>
//void rotateleft(char *src, int n, int i)
//{
//	char tmp[10] = { 0 };
//	char arr[10] = { 0 };
//	strcpy(tmp, src);
//	strcat(tmp, src);
//	strncpy(arr, tmp + i, n);
//	printf("%s\n", arr);
//}
//int main()
//{
//	char src[] = "ABCD";
//	int sz = sizeof(src) / sizeof(src[0]);
//	int n;
//	scanf("%d", &n);
//	rotateleft(src, sz - 1, n);
//	return 0;
//}


////杨氏矩阵查找
////int arr[3][3] = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };
//int find_num(int arr[3][3], int row, int col,int k)
//{
//	int x = 0, y = col - 1;
//	while (x < row&&y >= 0)
//	{
//		if (arr[x][y] == k)
//		{
//			printf("下标为 %d %d\n", x, y);
//			return 1;
//		}
//		else if (arr[x][y]>k)
//			y--;		
//		else
//			x++;		
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };
//	int ret = find_num(arr, 3, 3, 7);
//	if (ret == 1)
//		printf("找到了\n");
//	else
//		printf("找不到\n");
//	return 0;
//}
