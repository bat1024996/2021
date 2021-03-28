#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;
//
//int main()
//{
//	int a = 5 & (-5);
//	int ret = a&(a - 1);
//	cout <<a<<endl;
//	cout << ret << endl;
//
//	return 0;
//}


//int mySqrt(int x){
//	//sqrt(x)<x/2+1
//	int i = 0;
//	for (i = 0; i<x / 2 + 2; ++i)      
//	{
//		if (i*i == x)
//		{
//			return i;
//		}
//		else if (i*i>x)
//		{
//			return i - 1;
//		}
//	}
//	return 0;
//
//}
//
//int main()
//{
//	mySqrt(1);
//	return 0;
//}

//bool isPowerOfTwo(int n){
//	//int ret=n&(-n);
//	if (n == 0)
//		return false;
//	int k = n&(n - 1);
//	if (k)
//	{
//		return false;
//	}
//	return true;
//}

//bool isPowerOfTwo(int n){
//	if (n == 0)
//		return false;
//	if ((n&(n - 1)) == 0)
//	{
//		return true;
//	}
//	return false;
//}
//
//int main()
//{
//	cout<<isPowerOfTwo(16);
//	return 0;
//}

char firstUniqChar(char* s){
	int arr[26] = { 0 };
	while (*s != '\0')
	{
		++arr[(*s) - 97];
		s++;
	}       //在此处s已经指向了'\0'
	while (*s != '\0')              //不知不觉的改变了循环变量，还以为从开头开始，产生bug
	{
		if (arr[(*s) - 97] == 1)
		{
			return (char)(*s);
		}
		++s;
	}
	return ' ';
}
int main()
{
	char arr[] = "leetlab";
	firstUniqChar(arr);
	return 0;
}