#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//#define rol 3
//#define cow 3

//int main()
//{
//	char arr[] = "abc defgx yz";//��ν��ո��滻Ϊ%20
//	int sz = sizeof(arr);
//	for (int i = 0; i < sz - 1; i++)
//	{
//		if (*(arr + i) == ' ')
//			*(arr + i) = '%20';
//	}
//	printf("%s\n", arr);
//
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	if (a = 0)			//���ʽa=0�Ľ��Ϊ0�����ʽΪ��
//	{
//		printf("%d", a - 10);
//	}
//	else
//		printf("%d", a++);
//	return 0;
//}

//int Fac(int n)//1 1 2 3 5 8 13 21 34 55 
//{
//	
//	int i=0, a, b, c;
//	a = 1, b = 1;
//	if (n < 3)
//		return 1;
//	while (i<n-2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		i++;
//	}
//	return c;
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", Fac(n));
//
//	return 0;
//}

//int get_min(int a[], int k)
//{
//	int min = a[0];
//	for (int i = 0; i < k; i++)
//	{
//		if (a[i] < a[0])
//			min = a[i];
//	}
//	return min;
//}
//int main()
//{
//	int a[] = { 6, 3, 5, 2, 7, 4, 8, 3, 8 };
//	int k;
//	scanf("%d", &k);
//	printf("%d",get_min(a, k));
//	
//
//}


//int get_num(int arr[], int sz)
//{
//
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 2, 2, 2, 5, 4, 2 };//��������Ԫ���г��ִ�������sz/2������
//
//	int sz = sizeof(arr);
//	printf("%d", get_num(arr, sz));
//	return 0;
//}


 //���ַ������ҵ�ֻ����һ�ε��ַ�
#include<string.h>
//char get_char(char arr[], int len)
//{
//	int i, j;
//	for (i = 0; i < len; i++)
//	{
//		for (j = i + 1; j < len; j++)		//����������ʱ�临�Ӷ�Ϊn^2
//		{
//			if (arr[i] == arr[j])
//				break;
//			if (j == len - 1)
//				return arr[i];
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char arr[] = "abaccdeff";
//	int len = strlen(arr);
//	printf("%c\n", get_char(arr, len));
//
//	return 0;
//}




