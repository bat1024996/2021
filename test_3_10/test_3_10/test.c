#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

////模拟实现atoi
////atoi
////将字符串转化为数字，从起始位置开始，遇到非数字和非（-，+）停止。
////int main()
////{
////	char arr[] = "1234 haha23";
////	char arr2[] = "ab1234";
////	int i = atoi(arr);
////	printf("%d\n", i);              //1234
////	printf("%d\n", atoi(arr2));      //0
////	printf("%d\n", atoi("-23ab"));  //-23
////	printf("%d\n", atoi(",12ag."));    //0
////	printf("%d\n", atoi("+23ga"));     //23
////	printf("%d\n", atoi("  23ga"));  //23
////	printf("%d\n", atoi("  2+3ga"));
////	return 0;
////}

//
//#include<ctype.h>
//
//int atoi(const char *p)
//{
//	char *str = p;
//	if (isdigit(*str) || *str == '-' || *str == '+')
//	{
//		while(isdigit(*str))
//		{
//			str++;
//		}
//		*str = '\0';
//	}
//
//}
//
//int main()
//{
//	printf("%d\n", atoi("23bss"));
//	return 0;
//}


////模拟实现strncat
//
//char *my_strncat(char *dest, const char* src, size_t sz)
//{
//	char *ptr = dest;
//	char *str = (char*)src;
//	while (*ptr)
//	{
//		ptr++;
//	}
//	while ((*ptr++ = *str++) && (--sz))
//	{
//		;
//	}
//	return dest;
//}
//
//int main()
//{
//	char arr1[20] = "abcdef	";
//	char arr2[] = "world";
//	//printf("%s\n", strncat(arr1, arr2,4));
//
//	printf("%s\n", my_strncat(arr1, arr2, 4));
//	return 0;
//}


////模拟实现strncpy
//
//char *my_strncpy(char* dest,const  char* src, size_t sz)
//{
//	char* ptr = dest;
//	char* str = (char*) src;
//	while ((*ptr++ = *str++) && (--sz))
//	{
//		;
//	}
//	return dest;
//}
//int main()
//{
//	char arr1[20] = "abcdefg";
//	char arr2[] = "hello";
//	//printf("%s\n", strncpy(arr1, arr2, 3));     //不拷贝'\0'
//
//	printf("%s\n", my_strncpy(arr1, arr2, 3));
//	return 0;
//}

//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//编写一个函数找出这两个只出现一次的数字。

//异或  ，相同两个数异或为0，0异或任何数为任何数本身
int main()
{
	//printf("%d\n", 0^0);    
	
	
	return 0;
}