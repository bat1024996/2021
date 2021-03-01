#define _CRT_SECURE_NO_WARNINGS	

//#include<stdio.h>
#include<iostream>
using namespace std;

//有n个数，确定其中第k个大的数字
//算法1
//int get_k1(int arr[], int sz, int k)
//{
//	int i, j, a;
//	for (i = 0; i < sz-1; i++)
//	{
//		for (j = 0; j < sz-1-i; j++)   //冒泡排序,复杂度O(n^2)
//		{
//			if (arr[j]<arr[j + 1])
//			{
//				a = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = a;
//			}
//		}
//	}
//	return arr[k - 1];//排序后找出第k大的数字
//}
////算法2
//int get_k2(int arr[], int sz, int k)
//{
//
//}
//int main()
//{
//	int arr[10] = { 1, 5, 8, 6, 3, 2, 4, 9, 7, 0 };
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d", &k);
//	cout<<get_k1(arr, sz, k)<<endl;
//	cout << get_k2(arr, sz, k) << endl;
//
//	return 0;
//}

//求解最大子序列问题



int main()
{
	char arr1[20] = "******************";
	char* arr2 = "hello world";
	//strcpy(arr1, arr2);
	//printf("%s\n", arr1);
	//模拟实现strcpy
	return 0;
}