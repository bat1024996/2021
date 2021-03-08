#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//面试题：判断大小端
//小端：01 00 00 00
//大端：00 00 00 01

//法一
//int check_sys()
//{
//	int x = 1;
//	char*p = (char*)&x;
//	return *p;
//}

//int main()
//{
//	if (check_sys() == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	
//	return 0;
//}

//法二
//union U
//{
//	char p;
//	int x;
//};
//int main()
//{
//	union U s;
//	s.x = 1;
//	if (s.p == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	
//	return 0;
//}
//
//int main()
//{
//	////顶层const
//	//const char *p = "abcd";    //p是一个指向字符串常量的指针
//	////*p = c;			//error，常量字符串，p指向的内容不能改
//	//p = "cdef";			//p可以改
//
//	//底层const
//	char * const p = "abcd";
//	
//
//	printf("%s\n", p);
//	return 0;
//}

//指针数组
//存放指针的数组

//int *arr[4];    //arr是一个数组名，有4个元素，每个元素是指向整形的指针
//char** p[3];
//
//int arr[10];
//int (*p)[10]=&arr;       //数组指针----指向数组的指针
////p是指针，类型为int(* )[10]
//
//char pc[5];
//char(*ptr)[5] = &pc;
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int(*p)[10] = &arr;
//	printf("%p\n", p);
//	printf("%p\n", p+1);		//p 为指向数组的指针，p+1等同于&arr+1；
//	
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p)[i]);  //p指向整个数组, p=&arr， *p<==>arr
//		//(*p)[i]
//		//*(*(p+0)+i)
//		//p[0][i]
//	}
//
//	return 0;
////}
//void print(int(*p)[5])          //二维数组传参，传递的时一维数组，用数组指针接收
//{
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
//	print(arr);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int *const p = &a;
//	a = 2;
//	printf("%d ", a);
//	return 0;
//}

