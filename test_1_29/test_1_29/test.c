#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>
//void print(arr)
//{
//	int i, j;
//	for (i = 0; i < 13; i++)
//	{
//		for (j = 0; j < 13; j++)
//		{
//			if ((j >= abs(i - 6)) && ((j <= 6 + i) || (j <= 18 - i)))
//				arr[i][j] = 
//			else
//				printf(" ");
//		}
//	}
//}

//int main()
//{
//	char arr[13][13] = { 0 };
//	int i, j;
//	for ( i = 0; i < 13; i++)
//	{
//		for (j = 0; j < 13; j++)
//		{
//			//if (((j >= abs(i -6)) && (j <= 6 + i)&&(i<=6)) || (j <= 18 - i))))
//			if (((j>=(6-i) && (j<=6+i) && (i<=6))||((i>6)&&(j>=i-6)&&(j<=18-i))))
//				printf("*");
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}

//ģ��ʵ��strlen����
#include<assert.h>
//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	const char* start = str;
//	while (*str)
//	{
//		str++;
//	}
//	return str - start;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//	return 0;
//}

//char* my_strcpy(char* dest, const char *src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//  //����srcָ������ݵ�destָ��Ŀռ䣬����\0
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	//strcpy - string copy
//	char arr1[20] = "qqqqqqqqqqqqqq";
//	char arr2[] = "abcdef";
//	char*p2 = arr2;
//	//my_strcpy
//	printf("%s\n", my_strcpy(arr1, p2));//abcdef
//
//	return 0;
//}
//
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int a;
//	int *str = arr;
//	int *ptr = arr + sz - 1;
//	while (str < ptr)
//	{
//		if (*str % 2 == 1)
//			str++;
//		if (*ptr % 2 == 0)
//			ptr--;
//		if (str-ptr<0&&*str % 2 == 0 && *ptr % 2 == 1)
//		{
//			a = *str;
//			*str = *ptr;
//			*ptr = a;
//			str++, ptr--;
//		}
//	}
//	for (int i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

