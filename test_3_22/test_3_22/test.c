#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//��������               ���������ͱ��룬���򲻽��б���

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
//дһ���꣬���Խ�һ�������ֵ�����λ��ż��λ������
//
//01010101
//10101010


//#define SWAP(num) ((((num)&0xaaaaaaaa)>>1)|(((num)&0x55555555)<<1))
//
//int main() 
//{
//	int num;
//	scanf("%d", &num);
//	printf("����Ϊ: %d", SWAP(num));
//	return 0;
//}


////дһ���꣬����ṹ����ĳ����������׵�ַ��ƫ�ƣ�������˵��
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