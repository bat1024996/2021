#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<assert.h>
//Nice2016面试题，陷入死循环


//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i <= 11; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}


//函数指针

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int (*pf)(int,int ) = &Add;
//	int ret = pf(2, 3);
//	return 0;
//}

//#define  NULL  ((void*)0)
//
//int main()
//{
//	/*int a = 2;
//	char ch = 'a';
//
//	char *p1 = &ch;
//	int *p2 = &a;
//
//	printf("%p\n", p1);
//	printf("%p\n", p1+1);
//
//	printf("%p\n", p2);
//	printf("%p\n", p2+1);*/
//
//	return 0;
//}

//int StrToInt(char* string)
//{
//	assert(string);
//
//	int number = 0;
//	while (*string != 0)
//	{
//		number = number * 10 + *string - '0';
//		++string;
//	}
//	return number;
//}
//
//
//int main()
//{
//	StrToInt(NULL);
//	return 0;
//}


//int main()
//{
//	int arr[5];
//
//	//初始化数组
//	//方法1
//	for (int *vp = &arr[5]; vp > &arr[0];)
//	{
//		*--vp = 0;
//	}
//
//	//方法2
//	for (int *vp = &arr[4]; vp >= &arr[0]; vp--)
//	{
//		*vp = 0;
//	}
//
//	return 0;
//}
//



