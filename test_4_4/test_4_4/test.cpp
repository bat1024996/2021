#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;

//int singleNumber(int* nums, int numsSize){
//	//统计二进制的每一位
//	int count[32] = { 0 };
//	int ret = 0;
//	int i, j;
//	for (i = 0; i<32; ++i)
//	{
//		for (j = 0; j<numsSize; ++j)
//		{
//			count[i] += (nums[j] >> i) & 1;          //第i个二进制位有多少1
//		}
//		//结果为3n,3n+1
//	}
//	//for (i = 0; i<32; ++i)     
//	for (i = 32; i >= 0;--i)
//	{
//		ret = 2 * ret + count[i] % 3;
//	}
//	return ret;
//}
//int main()
//{
//	int arr[] = { 1, 1, 1, 2 };
//	singleNumber(arr, 4);
//	
//	return 0;
//}


//实现希尔排序
//void ShellInsert(int *drr, int size, int dk)
//{
//	int temp = 0;
//	int i, j;
//	for ( i = 0; i < dk; ++i)
//	{
//		for ( ; i+dk < size; i = i + dk)
//		{
//			if (drr[i]>drr[i + dk])
//			{
//				temp = drr[i + dk];
//				//进行直接插入
//				j = i ;
//				while ((j>=0)&&(drr[j]>temp))
//				{
//					drr[j + dk] = drr[j];
//					j -= dk;
//				}
//				drr[j + dk] = temp;
//			}
//
//		}
//	}
//}
//
//void ShellSort(int *arr, int size)
//{
//	//分组间隔
//	int set[] = { 4, 2, 1 };
//	int setSize = sizeof(set) / sizeof(set[0]);
//	for (int i = 0; i < setSize; ++i)
//	{
//		//解决好传参问题
//		ShellInsert(arr, size, set[i]);
//	}
//}
//
//int main()
//{
//	int srr[] = { 21, 23, 98, 56, 11, 34, 45, 65, 2, 12, 34 };
//	int size = sizeof(srr) / sizeof(srr[0]);
//
//	ShellSort(srr, size);
//
//	for (auto elm : srr)
//	{
//		cout << elm << ",";
//	}
//	return 0;
//}


//void swap(int **ptr, int **str)
//{
//	int **p = ptr;
//	ptr = str;
//	str = p;
//}
//void swap2(int **ptr, int** str)
//{
//	*str = *ptr;
//}
//
//void swap3(int *ptr, int* str)
//{
//	str = ptr;
//}
//int main()
//{
//	int a = 1, b = 2;
//
//	int *arr=&a;
//	int *nums=&b;
//
//	swap(&arr, &nums);
//
//
//	//cout << *arr <<" "<< *nums << endl;
//
//	//swap2(&arr, &nums);
//	//swap3(arr, nums);
//	//cout << *arr << " " << *nums << endl;
//
//
//	return 0;
//}
//
//


