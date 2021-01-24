#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//创建一个整形数组，完成对数组的操作
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。

//void init(int* arr,int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int* arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void reverse(int* arr, int sz)
//{
//	int* ptr = &arr[sz-1];
//	while (arr < ptr)
//	{
//		int* p=NULL;
//		*p = *ptr;
//		*ptr = *arr;
//		*arr = *p;
//		arr++, ptr--;
//	}
//}
//int main()
//{
//	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//init(arr,sz);
//	//print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	return 0;
//}
//
//



//实现一个对整形数组的冒泡排序
//void bobble_sort(int* arr,int sz)
//{
//	for (int i = 0; i < sz-1; i++)//每一趟排序
//	{
//		for (int j = 0; j < sz - 1 - i; j++)//
//		{
//			if (arr[j]<arr[j + 1])
//			{
//				int b = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = b;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bobble_sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//void print(int* arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr+i));
//	}
//}
//
//int main()
//{
//	int arr[] = { 0, 1, 2, 3, 4, 5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}





//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//void swap(int* str,int* ptr, int sz)
//{
//	int a;
//	for (int i = 0; i < sz; i++)
//	{
//		a = *(ptr+i);
//		*(ptr + i) = *(str + i);
//		*(str + i) = a;
//	}
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 5, 4, 3, 2, 1 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	swap(arr1, arr2,sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

//编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//要求：不能使用C函数库中的字符串操作函数。char arr[] = "abcdef";逆序之后数组的内容变成：fedcba
//abcde f
//abcd e
//abc d
//ab c
//a b
//a
//...

//void pp(char* str)
//{
//	int sz = 0;
//	char* ptr = NULL;
//	while (*str != '\0')//求字符串长度
//	{
//		sz++;
//	}
//	ptr =str+ sz;
//}

//int reverse_string(char* str,int a)
//{
//	
//	char* ptr = str+a;
//	int b = *ptr;      //首尾元素的交换
//	*ptr = *str;
//	*str = b;
//	if (str < ptr)//死循环
//	{
//		return reverse_string(str + 1,a-1);//str向后
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%s\n", reverse_string(arr,sz-2));
//	return 0;
//}


//char reverse_string(char* str,char* ptr)
//{
//	char b = *ptr;      //首尾元素的交换
//	*ptr = *str;
//	*str = b;
//	if ((str >= ptr)||(ptr-str==1))
//	{
//		return 0;
//	}
//	return reverse_string(str + 1, ptr - 1);
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	char* ptr = arr + sz - 2;
//	reverse_string(arr, ptr);
//	printf("%s\n",arr );
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%s", arr);
//	return 0;
//}
