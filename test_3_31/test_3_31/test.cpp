#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;

//int removeDuplicates(int* nums, int numsSize){
//	//这是一个有序数列
//	int *ptr = nums + 1;
//	int *str = nums;
//	for (int i = 0; i<numsSize - 1; ++i)
//	{
//		if (*ptr>*str)
//		{
//			++str;
//			*str = *ptr;
//		}
//		++ptr;
//	}
//	return str - nums + 1;
//}
//int main()
//{
//	int arr[] = { 0, 0, 1, 1, 1, 2, 2, 3, 3, 4 };
//	int ret=removeDuplicates(arr, 10);
//	cout << ret;
//	return 0;
//}

