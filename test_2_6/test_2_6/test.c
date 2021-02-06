#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//void Swap2(int*ptr, int *str)
//{
//	int tmp = *ptr;
//	*ptr = *str;
//	*str = tmp;
//}
//
//int main()
//{
//	int a = 1, b = 2;
//	//Swap1(a, b);
//	printf("a=%d,b=%d\n", a, b);//函数传参时，形参是实参的一份临时拷贝
//	Swap2(&a, &b);				//函数调用时，为形参开辟一份临时空间，函数执行完时，形参销毁
//	printf("a=%d,b=%d\n", a, b);
//
//}

//get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int main()
//{
//	int a = 1;
//	int b = 3;
//	int ret = get_max(a, b);
//	printf("%d\n", ret);
//	return 0;
//}

//接受一个整型值（无符号），按照顺序打印它的每一位。 例如： 输入：1234，输出 1 2 3 4.
//1234
//123 4
//12 3
//1 2
//1
//
//void get_print(int n)
//{
//	if (n > 9)
//	{
//		 return get_print(n / 10);//error
//	}
//	printf("%d ", n);
//	
//}

//void get_print(int n)
//{
//	if (n > 9)
//	{
//		 get_print(n / 10);//
//	}
//	printf("%d ", n%10);
//
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	get_print(a);
//	return 0;
//}

//编写函数不允许创建临时变量，求字符串的长度
//int my_strlen(char*ptr)
//{
//	if (*ptr != '\0')
//	{
//		return 1 + my_strlen(++ptr);
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//	char *p = "abcdefg";
//	int ret=my_strlen(p);
//	printf("%d\n", ret);
//	return 0;
//}
//#define num 2
//int main()
//{
//	  const num = 2;
//	int n = 10;
//	//int arr[n] = { 0 };
//	int arr[num] = { 0 };
//	
//	return 0;
//}


//冒泡排序
//bobble_sort(int arr[],int sz)
//{
//	int i = 0, j = 0;
//	for (j = 0; j < sz - 1; j++)//执行每一趟
//	{
//		for (i = 0; i < sz - 1-j; i++)//执行一趟
//		{
//			if (arr[i] < arr[i + 1])
//			{
//				int tmp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bobble_sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

