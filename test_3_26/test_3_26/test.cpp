#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;

//int main()
//{
//	int i = 0, &r = i;     //i为int型，i=0;   r为i的引用
//	auto a = r;             //a为int型，a=0;
//
//	const int ci = i, &cr = ci;              //ci为const int型，ci=0;  cr是const int型，对ci的引用
//	auto b = ci;                //b为const int型
//	auto c = cr;               //c为const int型
//	auto d = &i;                //d为int* 类型
//	auto e = &ci;                //e为const int*类型
//
//	const auto f = ci;       //
//	auto &g = ci;
//	const auto &j = 42;
//	auto k = ci, &l = i;
//	//auto &m = ci, &p = &ci;          //err
//
//	a = 42;
//	b = 42;
//	c = 42;
//
//	
//
//	return 0;
//}

//int main()
//{
//	/*const int a = 0;
//	int r = a;*/
//
//	int a = 2,b=3;
//	int *p = &a;
//	decltype(p)ptr = &b;              //ptr为int*类型
//	decltype(*p)str = b;             //str为int&类型
//	decltype(*p+1)s = b;             //s为int&类型
//
//	return 0;
//}
//


int* singleNumbers(int* nums, int numsSize){
	int ret = 0;
	int *arr = (int*)malloc(sizeof(int)* 2);
	//*returnSize = 2;
	for (int i = 0; i<numsSize; ++i)
	{
		ret ^= nums[i];
	}
	//异或的结果为两个数字异或的结果
	int pos = 0;
	while ((((ret >> pos)) & 1) != 1)
	{
		pos++;
		break;
	}
	for (int j = 0; j<numsSize; ++j)       //将两个数字分开
	{
		if (((ret >> pos) & 1 )== 1)
		{
			arr[0] ^= nums[j];
		}
	}
	arr[1] = ret^arr[0];
	return arr;
}

int main()
{
	int a[] = { 4, 1, 6, 1 };
	singleNumbers(a, 4);
	return 0;
}