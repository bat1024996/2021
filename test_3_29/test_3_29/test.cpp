#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;

//bool hasAlternatingBits(int n){
//	//0101  -5
//	//1010  -a
//	if (((n & 0x55555555) == n) | (n & 0xaaaaaaaa) == n)
//	{
//		return true;
//	}
//	return false;
//}

//bool hasAlternatingBits(int n){
//	//������ȥ������λ���
//	int k = n;
//	int ret = 0;
//	if (n & 1)
//	{
//		//ĩβΪ1����
//		while (n)
//		{
//			ret = 4 * ret + (n & 1);            //error  :17 ����10001
//			n >>= 2;
//		}
//	}
//	else
//	{
//		//ĩβΪ0
//		while (n)
//		{
//			ret = 4 * ret + 2 * ((n >> 1) & 1);
//			n >>= 2;
//		}
//	}
//	if (ret == k)           //err:��ʱ��n�Ѿ��ı���
//	{
//		return true;
//	}
//	return false;
//}
//
//int main()
//{
//	hasAlternatingBits(17);
//	return 0;
//}



