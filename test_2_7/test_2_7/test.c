#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//print1用数组接收
//void print1(int arr[3][5], int row, int col)
//{
//	int i, j;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
////用数组指针接收，数组指针指向的是一维数组
//void print2(int(*p)[5], int row, int col)
//{
//	int i, j;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			//printf("%d ", *(p[i] + j));
//			printf("%d ", *(*(p + i) + j));
//			//p为第一行的地址，p+i找的第i行的地址，*(p+i)找的第i行
//			//*(p+i)+j找的第i行j列元素的地址，解引用找的该元素
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
//	//二维数组传参，传递的是首元素的地址，即第一行的地址
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);
//
//	return 0;
//}


//int main()
//{
//	/*char a;
//	while (scanf("%c", &a) != EOF)
//	{
//		printf("%c \n", a);
//	}*/
//	char ch;
//	while ((ch = getchar()) != EOF&&ch!='\n')
//	{
//		putchar(ch);
//	}
//	return 0;
//}


//EOF


//int main()
//{
//	int i, j;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 3)
//				break;//双层for循环中，break跳出内循环，对外循环不影响
//			printf("%d ", j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	printf("%d ", ~(-1));//EOF
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(!c));
//	return 0;
//}


