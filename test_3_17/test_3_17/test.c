#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int solve(int* a, int aLen) 
//{
//	// write code here
//	int i = 0;
//	int n = 0, ret = 0;
//	for (i = 0; i<aLen; i++)
//	{
//		n ^= a[i];           
//		ret = n^i;           //逻辑错误
//	}                        
//	return ret^aLen;
//
//}

//int solve(int* a, int aLen)
//{
//	// write code here
//	int i = 0;
//	int n = 0;
//	for (i = 0; i<aLen; i++)            //分2步
//	{
//		n ^= a[i];
//	}
//	for (i = 0; i<=aLen; i++)
//	{
//		n ^= i;
//	}
//	return n;
//}
//
//int solve(int* a, int aLen) 
//{
//	// write code here
//	int i = 0;
//	int n = 0, ret = 0;
//	for (i = 0; i<aLen; i++)
//	{
//		ret^= a[i] ^ i;           //异或的混合运算
//	}                        
//	return ret^aLen;
//}
//
//
//int main()
//{
//	int a[3] = { 0, 1, 3 };           //2
//	int ch=solve(a, 3);
//	printf("%d", ch);
//	return 0;
//}


//一个整型数组里除了两个数字之外，其他的数字都出现了两次。请写程序找出这两个只出现一次的数字
//
//测试在前，开发在后
//测试用例：1 2 3 2 5 3
//输出： 1 5
//用哈希表实现

//int* FindNumsAppearOnce(int* array, int arrayLen, int* returnSize)
//{
//	int *p = (int*)malloc(sizeof(int)*(arrayLen - 2));
//	if (p = NULL)
//		return 0;
//	//将数组以哈希表的形式存储
//	int i = 0;
//	for (i = 0; i < arrayLen; i++)
//	{
//		p[*array%(arrayLen-2)]=*array;
//	}
//	//要解决冲突问题
//	
//
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 2, 5, 3 };
//	int * p=FindNumsAppearOnce(arr, 6, 2);
//	printf("%d\n", *p);
//	return 0;
//}


