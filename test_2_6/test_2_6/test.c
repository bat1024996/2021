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
//	printf("a=%d,b=%d\n", a, b);//��������ʱ���β���ʵ�ε�һ����ʱ����
//	Swap2(&a, &b);				//��������ʱ��Ϊ�βο���һ����ʱ�ռ䣬����ִ����ʱ���β�����
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

//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ�� ���磺 ���룺1234����� 1 2 3 4.
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

//��д��������������ʱ���������ַ����ĳ���
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


//ð������
//bobble_sort(int arr[],int sz)
//{
//	int i = 0, j = 0;
//	for (j = 0; j < sz - 1; j++)//ִ��ÿһ��
//	{
//		for (i = 0; i < sz - 1-j; i++)//ִ��һ��
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

