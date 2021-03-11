#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//模拟实现atoi
#include<ctype.h>
//int my_atoi(char *p)
//{
//	int num=0;
//	while (*p)
//	{
//		if (!isdigit(*p))
//			break;
//		num = 10*num+ (*p)-48;           //字符0对应的ASCII为48
//		p++;
//	}
//	return num;
//}
//
//int main()
//{
//	char arr[] = "23skj";
//	printf("%d\n", atoi(arr));
//
//	printf("%d\n", my_atoi(arr));
//	return 0;
//}
//

//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//编写一个函数找出这两个只出现一次的数字。

//异或，相同数字异或为0；0异或任何数都是其本身

//void get_TwoNum(int* arr,int sz)
//{
//	int p = 0;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		p ^= *(arr + i);            //得到的结果为 两个只出现一次的数字相异或的值
//	}
//	//010110        //异或的结果，一个数的位为1，另一个数对应位上为0
//	//将两个数分开，进行两次异或
//	int n=0;
//	int srr[2] = { 0 };
//	while (++n)
//	{
//		//如何实现分组？
//		if (p & 1)           //找到一个二进制位为1的
//		{
//			for (i = 0; i < sz; i++,arr++)      //对原数组进行遍历
//			{
//				//对应二进制位为1
//				if (*arr >> (n - 1) & 1)
//					srr[0] ^= *arr;
//				//对应二进制位为0
//				else
//					srr[1] ^= *arr;               //将srr数组写为arr数组，调试半天时间
//			}
//			printf("%d %d\n", srr[0], srr[1]);
//			break;               //跳出循环
//		}
//		else
//			p =p>>1;
//	}
//}
//int main()
//{
//	int arr[10] = { 1, 5, 6, 6, 7, 9, 5, 7, 3, 9 };
//
//	get_TwoNum(arr,10);
//
//	return 0;
//}