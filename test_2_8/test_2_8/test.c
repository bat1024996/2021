#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//void qsort(void *base, 
//			size_t num, 
//			size_t width, 
//			int( *cmp)(void *e1,void *e2));

//练习使用qsort函数

//int cmp_int(const void *e1, const void *e2)
//{
//	return *(int*)e1 - *(int*)e2;//qsort函数默认升序排列
//}
//
//int main()
//{
//	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr,sz,sizeof(int),cmp_int );
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//

//int  cmp_float(const void* e1, const void* e2)
//{
//	return (int )(*(float*)e1 - *(float*)e2);
//}
//
//
//int main()
//{
//	float arr[] = { 9.0, 8.0, 7.0, 6.0, 5.0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(float), cmp_float);
//
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%f ", arr[i]);
//	}
//	return 0;
//}

//struct stu
//{
//	char name[20];
//	int age;
//};
//int cmp_struct_by_age(const void* e1, const void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//
//int main()
//{
//	struct stu s[3] = { { "zhangsan", 20 }, { "lisi", 12 }, { "wangwu", 23 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//
//	qsort(s, sz, sizeof(struct stu), cmp_struct_by_age);
//
//
//	return 0;
//}

////使用bobble_sort函数模拟实现qsort函数
int cmp(const void*e1, const void *e2)
{
	return *(int*)e1 - *(int*)e2;
}

void Swap(void*p1, void*p2, int width)
{
	int i;
	for (i = 0; i < width; i++)
	{
		char tmp = *((char*)p1+i);
		*((char*)p1 + i) = *((char*)p2+i);
		*((char*)p2 + i) = tmp;
	}
}

void bobble_sort(void* base, int sz, int width, int(*cmp)(const void* , const void* ))
{
	int i, j;
	for (i = 0; i < sz-1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)
				Swap((char*)base + j*width, (char*)base + (j + 1)*width,width);
		}
	}
}

int main()
{
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bobble_sort(arr, sz, sizeof(int), cmp);
	return 0;
}