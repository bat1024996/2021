
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//递归方式实现打印一个整数的每一位.如1234，打印1 2 3 4；

//int Print(int i)
//{
//	if (i < 10)
//		return (i % 10);
//	return Print(i / 10);
//}

//void Print(int i)
//{
//	if (i > 9)
//	{
//		Print(i / 10);
//	}
//	printf("%d ", i % 10);
//	
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	Print(i);
//	return 0;
//}
//
////(123) 4
////(12) 3 4
////(1) 2 3 4


//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）

//递归
//int Sulp1(int n)
//{
//	if (n == 1)
//		return 1;
//	return n*Sulp1(n - 1);
//	
//}
////非递归
//int Sulp2(int n)
//{
//	int s = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		s *= i;
//	}
//	return s;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d\n", Sulp1(n));
//	printf("%d\n", Sulp2(n));
//	return 0;
//}


//递归和非递归分别实现strlen函数
//递归
//int my_strlen1(char* ptr)
//{
//	if (*ptr == 0)
//		return 0;
//	return 1 + my_strlen1(ptr+1);
//}
////非递归
//int my_strlen2(char* ptr)
//{
//	int i = 0;
//	while (*ptr != 0)
//	{
//		i++;
//		ptr++;
//	}
//	return i;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	printf("%d\n", my_strlen1(arr));
//	printf("%d\n", my_strlen2(arr));
//
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
//
//int reverse_string(char* str)
//{
//	pp(str);
//	char* ptr = NULL;
//	char* p = NULL;
//	ptr -= 1;		//ptr向前
//	*p = *ptr;      //首尾元素的交换
//	*ptr = *str;
//	*str = *p;
//	if (str < ptr)
//	{
//		return reverse_string(str + 1);//str向后
//	}
//	return 0;
//}

int main()
{
	char arr[] = "abcdef";
	printf("%s\n", reverse_string(arr));
	return 0;
}


//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//输入：1729，输出：19

//static int s;//静态变量s
//s = 0;
//void DigitSum(int i)
//{
//	if (i > 9)
//	{
//		DigitSum(i/10);
//	}
//	s += i % 10;//将各个位相加
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	DigitSum(n);
//	printf("%d\n", s);
//	return 0;
//}



//编写一个函数实现n的k次方，使用递归实现

//int my_pow(int n, int k)
//{
//	if (k == 1)
//	{
//		return n;
//	}
//	return n*my_pow(n, k - 1);
//}
//
//int main()
//{
//	int n, k;
//	scanf("%d%d", &n, &k);
//	printf("%d\n", my_pow(n, k));
//	return 0;
//}


//递归和非递归分别实现求第n个斐波那契数
//1 1 2 3 5 8 13 21 34 55 

//递归
//int fac1(int n)
//{
//	if (n <= 2)
//		return 1;
//	return fac1(n - 1) + fac1(n - 2);
//}
////非递归
//int fac2(int n)
//{
//	int a=1, b=1, c=1;
//	while (n-2)
//	{
//		a = b;
//		b = c;
//		c = a + b;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", fac1(n));
//	printf("%d\n", fac2(n));
//	return 0;
//}
