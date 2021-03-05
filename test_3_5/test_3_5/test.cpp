#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>

//sprintf()函数
//int main()
//{
//	char *s=NULL;								//error
//	sprintf(s, "%d", 123);
//	printf("%s", s);
//	getchar();
//	return 0;
//
//}

//int main()
//{
//	char s[20];
//	int ret=sprintf(s, "%d", 123);
//	//printf("%s", s);
//	printf("%d", ret);
//	return 0;
//}
#include<cassert>
#include<iostream>
using namespace std;
#include<string>

//char* my_strcpy(char *dest, char* src)
//{
//	assert(dest&&src);
//	char *p = dest;
//	/*while (*dest != '\0')  //代码调整
//	{
//		*dest = *src;
//		dest++, src++;
//	}*/
//
//	while (*dest++ = *src++)      //++的优先级高于*
//	{							//拷贝字符串，包括 \0
//		;
//	}
//	return p;
//}
//
//int main()
//{
//	char arr[] = "hello bytedance";
//	char s[] = "123456789123456789";
//	//printf("%s",my_strcpy(s, arr));
//	cout << my_strcpy(s, arr)<<endl;
//	//printf("%s", arr);
//	return 0;
//}
//

//char* my_strcat(char *dest, char* src)
//{
//	assert(src&&dest);
//	char *p = dest;
//	while (*dest != '\0')
//	{
//		dest++;								//找到指向dest中的'\0'的指针
//	}
//	while (*dest++=*src++)			//拷贝字符串，包括'\0'
//	{
//		;
//	}
//	return p;
//}
//int main()
//{
//	char arr[30] = "what are you ";
//	char s[] = "doing now?";
//	//cout<<strcat(arr, s);
//
//	cout << my_strcat(arr, s);
//	return 0;
//}

//int my_strcmp(char*p1, char* p2)
//{
//	assert(p1&&p2);
//	while (*p1==*p2)     //相等跳过，继续找下一对
//	{
//		p1++, p2++;
//	}
//	return *p1 - *p2;      //作差返回，
//}
//int main()
//{
//	char arr1[] = "shjthihk";
//	char arr2[] = "shjthisujto";
//	//cout<<strcmp(arr1, arr2);   //C语言规定返回值不一定为-1,1,0
//	
//	cout<<my_strcmp(arr1, arr2);
//	return 0;
//}

//char* my_strncpy(char*dest, char *src, int sz)
//{
//	assert(dest&&src);
//	char *p = dest;
//	int n = 0;
//	while (*dest++ = *src++)
//	{
//		n++;
//		if (n == sz)           //未遇到'\0'，就停止了
//			return p;
//	}
//	//src遇到了'\0'
//	while (n++ < sz-1)		//已拷贝'\0'，但是n没有自增
//	{
//		*dest++ = '\0';
//	}
//	return p;
//}
//int main()
//{
//	char arr1[30] = "abcdefghi";
//	char arr2[] = "hell";
//	//cout<<strncpy(arr1, arr2, 3);	//只拷贝3个字符，不包括'\0'
//
//	cout<<my_strncpy(arr1, arr2,6 );
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "*****\0******";
//	char arr2[] = "hello world";
//	cout << strncat(arr1, arr2, 4);
//	return 0;
//}

//int main()
//{
//	cout<<strncmp("abcdef", "abcgkjo", 4);
//	return 0;
//}

//char* my_strstr(char* dest, char* src)   
//{
//	//char *p = dest;
//	assert(dest&&src);
//	char *p = NULL;
//	char *ptr = src;
//	while (*dest&&*src)
//	{
//		p = dest;
//		if (*dest == *src)
//		{
//			while (*dest++ == *src++)   //设计不完美，不要用dest和src自增
//			{							//否则还要返回
//				;
//			}
//			if (!*(src-1))
//				return p;
//		}
//		dest = p + 1;
//		src = ptr;
//	}
//	return 0;
//
//	/*while (*dest&&*src)
//	{
//		if (*dest++ = *src++)
//		{
//			p = dest - 1;     
//		}
//		if (!*(src-1))
//			return p;
//		src = ptr;
//		dest = p+1;
//	}*/
//
//}

//char* my_strstr(const char*dest, const char* src)			//src和dest不自增，只是提供数据
//{
//	assert(dest&&src);
//	char*p = (char*)dest;
//	char*s = (char*)src;
//
//	while (*p&&*s)
//	{
//		while (*p&&*s && (*p == *s))
//		{
//			p++;
//			s++;
//		}
//		if (*s)
//			return 
//	}
//}

//int main()
//{
//	char arr1[] = "halaro, the world ,are you ok?";
//	char arr2[] = "al";
//	char arr3[] = "asaaals";
//	//cout<<strstr(arr1, arr2)<<endl;
//
//	cout << my_strstr(arr1, arr2) << endl;
//	cout << my_strstr(arr3, arr2);
//		
//	return 0;
//}

//char* my_strtok(char* dest, char* p)
//{
//	
//}
//
//int main()
//{
//	char arr1[] = "hello@bit.edu.com?are you";
//	char arr2[] = "@.?";
//	////
//	//for (char* ret = strtok(arr1, arr2); ret != NULL; ret = strtok(NULL, arr2))
//	//{
//	//	cout << ret << endl;
//	//}
//	//
//
//	my_strtok(arr1, arr2);
//	return 0;
//}

int main()
{
	cout << strerror(0) << endl;
	cout << strerror(1) << endl;
	cout << strerror(2) << endl;
	cout << strerror(3) << endl;
	return 0;
}