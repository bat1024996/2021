#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;

//int main()
//{
//	int i = 0, &r = i;     //iΪint�ͣ�i=0;   rΪi������
//	auto a = r;             //aΪint�ͣ�a=0;
//
//	const int ci = i, &cr = ci;              //ciΪconst int�ͣ�ci=0;  cr��const int�ͣ���ci������
//	auto b = ci;                //bΪconst int��
//	auto c = cr;               //cΪconst int��
//	auto d = &i;                //dΪint* ����
//	auto e = &ci;                //eΪconst int*����
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
//	decltype(p)ptr = &b;              //ptrΪint*����
//	decltype(*p)str = b;             //strΪint&����
//	decltype(*p+1)s = b;             //sΪint&����
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
	//���Ľ��Ϊ�����������Ľ��
	int pos = 0;
	while ((((ret >> pos)) & 1) != 1)
	{
		pos++;
		break;
	}
	for (int j = 0; j<numsSize; ++j)       //���������ַֿ�
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