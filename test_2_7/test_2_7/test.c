#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//print1���������
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
////������ָ����գ�����ָ��ָ�����һά����
//void print2(int(*p)[5], int row, int col)
//{
//	int i, j;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			//printf("%d ", *(p[i] + j));
//			printf("%d ", *(*(p + i) + j));
//			//pΪ��һ�еĵ�ַ��p+i�ҵĵ�i�еĵ�ַ��*(p+i)�ҵĵ�i��
//			//*(p+i)+j�ҵĵ�i��j��Ԫ�صĵ�ַ���������ҵĸ�Ԫ��
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
//	//��ά���鴫�Σ����ݵ�����Ԫ�صĵ�ַ������һ�еĵ�ַ
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
//				break;//˫��forѭ���У�break������ѭ��������ѭ����Ӱ��
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


