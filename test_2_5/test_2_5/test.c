
#include<stdio.h>
#include<assert.h>

//模拟实现strstr函数

//char* my_strstr(const char *str, const char *substr)
//{
//	assert(str != NULL);
//	assert(substr != NULL);
//	char *s1;
//	char *s2;
//	char *cur = (char *)str;
//	while (*cur)
//	{
//		s1 = cur;//记录起始地址
//		s2 = (char *)substr;//记录子串起始地址
//		while (*s1&&*s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;
//		}
//		cur++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char *str1 = "abcdefghhppo";
//	char *str2 = "def";
//	char *ret = my_strstr(str1, str2);
//	if (ret == NULL)
//	{
//		printf("不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}



//模拟实现strcat函数

//char* my_strcat(char* dest, char* src)
//{
//	char *cp = dest;
//	assert(src && dest);
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return cp;
//}
//
//int main()
//{
//	char arr1[15] = "abcd";
//	char *arr2 = "ef";
//	printf("%s\n", my_strcat(arr1, arr2));
//	return 0;
//}

////模拟实现strcmp函数
//int my_strcmp(char* arr1, char* arr2)
//{
//	assert(arr1 && arr2);
//	while (*arr1++ == *arr2++)
//	{
//		if (*arr1 == '\0')
//			break;
//	}
//	return *arr1 - *arr2;
//}
//
//int main()
//{
//	char arr1[] = "abcde";
//	char arr2[] = "abcd";
//	int ret = my_strcmp(arr1, arr2);
//	printf("%d\n", ret);
//}
//


//模拟实现strcpy函数
//char* my_strcpy(char* dest, const char* src)
//{
//	char *cp = dest;
//	assert(src && dest);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return cp;
//}
//
//int main()
//{
//	char arr[80] = { "abcdef" };
//	printf("%s\n", my_strcpy(arr, "hello world"));
//	return 0;
//}


//模拟实现strlen函数

//int my_strlen(char *arr)    //指针求长度
//{
//	char *p = arr;
//	while (*p)
//	{
//		p++;
//	}
//	return p - arr;
//}
//	int main()
//{
//	int ret = my_strlen("hello bit");
//	printf("%d\n", ret);
//	return 0;
//}


//void * my_memmove(void * dst, const void *src, int size){
//	const char *str_src = (const char *)src;
//	char* str_dst = (char*)dst;
//	if (str_dst > str_src)
//	{
//		for (int end = size - 1; end >= 0; --end)
//		{
//			*(str_dst + end) = *(str_src + end);
//		}
//	}
//	if (str_dst < str_src)
//	{
//		for (int start = 0; start < size - 1; ++start)
//		{
//			*(str_dst + start) = *(str_src + start);
//		}
//	}
//	return dst;
//}
//
//int main(){
//	char str[100] = "hello world";
//	my_memmove(str + 6, str, 12);
//	printf("%s\n", str);
//	char str2[100] = "      hello world";
//	my_memmove(str2, str2 + 6, 11);
//	printf("%s\n", str2);
//	return 0;
//}


//memcpy模拟
//void*  my_memcpy(void * dst, void * src, int size)
//{
//	assert(dst);
//	assert(src);
//	char *str_dst = (char *)dst;
//	char *str_src = (char *)src;
//	for (int i = 0; i < size; ++i)
//	{
//		str_dst[i] = str_src[i];
//	}
//}
//
//int main(){
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int b[5];
//	my_memcpy(b, a, sizeof(int)* 5);
//	for (int i = 0; i < 5; ++i)
//	{
//		printf("%d ", b[i]);
//	}
//	printf("\n");
//	double c[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
//	double d[5];
//	my_memcpy(d, c, sizeof(double)* 5);
//	for (int i = 0; i < 5; ++i)
//	{
//		printf("%f ", d[i]);
//	}
//	printf("\n");
//	return 0;
//}



//int 型
int cmp(const void *a, const void *b)
{
	return *(int*)a - *(int*)b;
}
int main()
{
	int a[10] = { 100, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	qsort(a, 10, sizeof(a[0]), cmp);
}

//char类型
int cmp(const void *a, const void *b)
{
	return *(char*)a - *(char*)b;
}
int main()
{
	char a[20] = "yhsfxkbva";
	qsort(a, strlen(a), sizeof(a[0]), cmp);
	for (int i = 0; i<20; i++)
		printf("%c ", a[i]);
}
//double 类型


double in[100] = {2.3,3.14,3.5 };
int cmp(const void *a, const void *b)
{
	return *(double*)a>*(double*)b;
}
int main(){
	qsort(in, 100, sizeof(in[0]), cmp);
}