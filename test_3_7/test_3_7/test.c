#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#include<stddef.h>
//结构体内存对齐规则

//struct S
//{
//	char c1;
//	int a;
//	char c2;
//	double b;
//}s1;
//
////ofsetof计算偏移量
//int main()
//{
//	printf("%d\n", offsetof(struct S, c1));
//	printf("%d\n", offsetof(struct S, a));
//	printf("%d\n", offsetof(struct S, c2));
//	printf("%d\n", offsetof(struct S, b));
//	printf("%d\n", sizeof(struct S));
//
//	return 0;
//}

//#pragma pack(2)     //修改默认对齐数
//struct S
//{
//	char c1;
//	int a;
//	double s;
//	
//};
//#pragma back()     //还原默认对齐数
//int main()
//{
//	printf("%d\n", sizeof(struct S));  //14
//
//	return 0;
//}

//union s
//{
//	char a;
//	int b;
//};
//
//int main()
//{
//	union s a;
//	
//	return 0;
//}

//int main()
//{
//	unsigned char puc[4];
//	struct tagPIM
//	{
//		unsigned char ucPim1;
//		unsigned char ucData0 : 1;
//		unsigned char ucData1 : 2;
//		unsigned char ucData2 : 3;
//	}*pstPimData;
//	pstPimData = (struct tagPIM*)puc;
//	memset(puc, 0, 4);
//	pstPimData->ucPim1 = 2;
//	pstPimData->ucData0 = 3;
//	pstPimData->ucData1 = 4;
//	pstPimData->ucData2 = 5;
//	printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
//	return 0;
//}

