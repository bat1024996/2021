#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//void fun(struct stu *p)
//{
//	printf("%s",(*p).name);
//	return;
//}
//int main()
//{
//	struct stu students[3] = { { 9801, "zhang", 20 },{ 9802, "wang", 19 },{ 9803, "zhao", 18 }};
//	fun(students + 1);
//	return 0;
//}


//写一个函数打印arr数组的内容，不使用数组下标，使用指针。arr是一个整形一维数组。

//void print(int* str,int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(str + i));
//	}
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//	return 0;
//}

//int main()
//{
//	printf("%d ", sizeof("I am"));//5
//	return 0;
//}



//写一个函数，可以逆序一个字符串的内容
//void unolder(char* str, int len)
//{
//	char* ptr = str + len-1;
//	while (str<ptr)
//	{
//		char a = *str;
//		*str = *ptr;
//		*ptr = a;
//		str++;
//		ptr--;
//	}
//}
//
//int main()
//{
//	char arr[] = "I am a student";
//	int len = strlen(arr);
//	unolder(arr, len);
//	printf("%s\n", arr);
//	return 0;
//}

//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，

//例如：2 + 22 + 222 + 2222 + 22222


//int main()
//{
//	int a;//2+22+222+2222+22222
//	scanf("%d", &a);
//	int sum = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		sum += a;
//		a = a * 10 + 2;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//求出0～100000之间的所有“水仙花数”并输出。

//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
//如:153＝1^3＋5^3＋3^3，则153是一个“水仙花数
#include<math.h>
//int is_number(int a)
//{
//	int arr[6] = { 0 };
//	int b=0;
//	int i = 0;
//	for ( i = 0; i < 6; i++)
//	{
//		arr[i] = a % 10;
//		a /= 10;
//		if (a==0)
//		{
//			i += 1;
//			break;
//		}
//	}
//	for (int j = 0; j < i; j++)
//	{
//		b += (int)pow(arr[j], i);
//	}
//	/*if (b == a)
//		return 1;
//	else
//		return 0;*/
//	return b;
//
//}
//
//int main()
//{
//	int n = 0;
//	for (n = 0; n <= 100000; n++)
//	{
//		if (is_number(n)==n)
//		{
//			printf("%d ", n);
//		}
//	}
//	/*int n = 153;
//	if (is_number(n)==n)
//	{
//		printf("%d ", n);
//	}*/
//	return 0;
//}



//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）

//int main()
//{
//	int money;
//	scanf("%d", &money);
//	int a = money / 1;;
//	int sum = 0;
//	while (a != 0)
//	{
//		sum += a;
//		a /= 2;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}
//
