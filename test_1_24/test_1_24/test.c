#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//����һ���������飬��ɶ�����Ĳ���
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�

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



//ʵ��һ�������������ð������
//void bobble_sort(int* arr,int sz)
//{
//	for (int i = 0; i < sz-1; i++)//ÿһ������
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





//������A�е����ݺ�����B�е����ݽ��н�����������һ����
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

//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//Ҫ�󣺲���ʹ��C�������е��ַ�������������char arr[] = "abcdef";����֮����������ݱ�ɣ�fedcba
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
//	while (*str != '\0')//���ַ�������
//	{
//		sz++;
//	}
//	ptr =str+ sz;
//}

//int reverse_string(char* str,int a)
//{
//	
//	char* ptr = str+a;
//	int b = *ptr;      //��βԪ�صĽ���
//	*ptr = *str;
//	*str = b;
//	if (str < ptr)//��ѭ��
//	{
//		return reverse_string(str + 1,a-1);//str���
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
//	char b = *ptr;      //��βԪ�صĽ���
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
