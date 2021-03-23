#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//enum             //枚举类型的优点：可以提供作用域为函数内部的常量，const和宏是无法做到的，枚举变量不会占用对象存储空间
//{                //缺点：枚举类型定义的变量只能为int型。
//	a,
//	b = 2,
//	c
//};
//
//int main()
//{
//	//a = 2;            //a为枚举常量
//
//	int arr[c];          
//	return 0;
//}


//char *get(void)
//{
//	char arr[4] = "bit";
//	return arr;          //返回局部变量或临时变量的地址warning
//}
//int main()
//{
//	get();
//	return 0;
////}



int main()
{
	char a[1000];
	int i=0;
	for (i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
	}
	printf("%d\n", strlen(a));
	
	return 0;
}