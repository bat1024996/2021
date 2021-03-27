#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;


//int* singleNumbers(int* nums, int numsSize){
//	int ret = 0;
//	int *arr = (int*)malloc(sizeof(int)* 2);
//	//*returnSize = 2;
//	for (int i = 0; i<numsSize; ++i)
//	{
//		ret ^= nums[i];
//	}
//	//异或的结果为两个数字异或的结果
//	int pos = 0;
//	while ((((ret >> pos)) & 1) != 1)
//	{
//		pos++;
//	}
//	arr[0] = 0;
//	for (int j = 0; j<numsSize; ++j)       //将两个数字分开
//	{
//		if (((nums[j] >> pos) & 1) == 1)
//		{
//			arr[0] ^= nums[j];
//		}
//	}
//	arr[1] = ret^arr[0];
//	return arr;
//}
//
//int main()
//{
//	int a[] = { 4, 1, 6, 1 };
//	singleNumbers(a, 4);
//	return 0;
//}

//int main()
//{
//	//int a = 00000000000000000000000000001010;       //八进制
//	//cout << a<<endl;
//	//int b = 01010;
//	//cout << b;
//
//	int a = 5;
//	cout << ~a;
//	//00000101
//	//
//	//cout << pow(2, a);
//	return 0;
//}


