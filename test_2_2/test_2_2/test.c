#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//int cmp_int(const void* e1, const void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//}
//
//void test1()
//{
//	//qsort ������������
//	int arr[] = { 1, 5, 2, 4, 3, 9, 8, 6, 7, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//int cmp_stu_by_name(const void*e1, const void*e2)
//{
//	return strcmp( ((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//void test2()
//{
//	ʹ��qsort��������ṹ��
//	struct Stu arr[] = { { "zhangsan", 20 }, { "lisi", 31 }, {"wangwu", 15} };
//	�������������򣿻��ǰ������䣿
//	������
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
//	����������
//	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
//}
//
//
////void qsort(void *base, - ���������ݵ���ʼλ��
////	      size_t num, 
////		  size_t width, 
////		  int(*cmp)(const void *e1, const void *e2)
////		  );
//
//void _swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//int main()
//{
//	int arr[] = { 1, 5, 2, 4, 3, 9, 8, 6, 7, 0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);//�ų�����
//	print_arr(arr, sz);
//
//	return 0;
//}
//
//
//void bubble_sort(void* base, size_t sz, size_t width, int(*cmp)(const void*e1, const void*e2))
//{
//	size_t i = 0;
//	//����
//	for (i = 0; i < sz - 1; i++)
//	{
//		size_t j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//����2��Ԫ�صıȽ�
//			//base[j] base[j+1] 
//			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)
//			{
//				//���������˳��ͽ���
//				_swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
//			}
//		}
//	}
//}









//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void _swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//void bubble_sort(void* base, size_t sz, size_t width, int(*cmp)(const void*e1, const void*e2))
//{
//	size_t i = 0;
//	//����
//	for (i = 0; i < sz - 1; i++)
//	{
//		size_t j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//����2��Ԫ�صıȽ�
//			//base[j] base[j+1] 
//			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)
//			{
//				//���������˳��ͽ���
//				_swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1, 5, 2, 4, 3, 9, 8, 6, 7, 0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);//�ų�����
//	print_arr(arr, sz);
//
//	return 0;
//}
////
