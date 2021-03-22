#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//条件编译               满足条件就编译，否则不进行编译

//#define _DEBUG_ 0
//
//int main()
//{
//	printf("haha\n");
//#if _DEBUG_ 	
//	printf("hehe\n");
//#elif 0
//	printf("no\n");
//#endif
//
//	return 0;
//}

///*int main()
//{
//#ifndef POINT              
//	printf("haha\n");
//#endif
//	printf("xixi\n");
//	return 0;
//}


//#ifdef
//#ifndef
//#if defined( )
//#if !defined(*/


//#pragma once
//写一个宏，可以将一个整数字的奇数位和偶数位交换。
//
//01010101
//10101010


//#define SWAP(num) ((((num)&0xaaaaaaaa)>>1)|(((num)&0x55555555)<<1))
//
//int main() 
//{
//	int num;
//	scanf("%d", &num);
//	printf("逆序为: %d", SWAP(num));
//	return 0;
//}


////写一个宏，计算结构体中某变量相对于首地址的偏移，并给出说明
////#include<stddef.h>
//
//#define OFFSETOF(type,date) (int)&(((type*)0)->date)
//struct S
//{
//	char a;
//	double b;
//	int c;
//};
//int main()
//{
//	//struct S s;
//	printf("%d\n", OFFSETOF(struct S, a));
//	printf("%d\n", OFFSETOF(struct S, b));
//	printf("%d\n", OFFSETOF(struct S, c));
//
//	return 0;
//}