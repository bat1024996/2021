#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

//写一个函数输出100-200的素数

//int is_prime(int i)
//{
//	int j = 0;
//	for ( j = 2; j <= sqrt(i); j++)
//	{
//		if (i%j == 0)
//			break;
//	}
//	if (j >= sqrt(i))
//		return 1;
//	return 0;	
//}
//int main()
//{
//	int i;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//写函数进行二分查找
//int binary_search(int arr[], int k, int sz )//数组传参只传首元素地址
//{
//	int right = sz - 1;
//	int left = 0;
//	int mid = left + (right - left) / 2;
//	while (left<=right)
//	{
//		if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		if (k>arr[mid])
//		{
//			left = mid + 1;
//		}
//		if(k == arr[mid])
//		{
//			return mid;
//		}
//		mid = left + (right - left) / 2;
//	}
//	return -1;
//	
//		
//}
//
//int main()
//{
//	//有序的
//	int prr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(prr) / sizeof(prr[0]);
//	//二分查找的
//	//找到了，返回下标
//	//找不到，返回 -1
//	int ret = binary_search(prr, k, sz );
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	return 0;
//}


//实现函数判断year是不是润年

//int is_year(int year)
//{
//	return ((year % 4 == 0) && (year%100 != 0)) || (year % 400 == 0);
//}
//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (is_year(year))
//		printf("%d是闰年\n",year);
//	else
//		printf("%d不是闰年\n",year);
//	return 0;
//}

//实现一个函数来交换两个整数的内容

//void swap(int* a, int* b)
//{
//	int t;
//	t = *a;
//	*a = *b;
//	*b = t;
//}
//int main()
//{
//	int a = 20;
//	int b = 30;
//	printf("交换前：a=%d,b=%d\n", a, b);
//	swap(&a, &b);
//	printf("交换后：a=%d,b=%d\n", a, b);
//	return 0;
//}

//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表

//void tab(int k)
//{
//	for (int i = 1; i <= k; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d  ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int k;
//	scanf("%d", &k);
//	tab(k);
//	return 0;
//}

//int get_max(int arr[7])
//{
//	int max = arr[0];
//	for (int i = 0; i < 7; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	return max;
//}
//int get_min(int arr[7])
//{
//	int min = arr[0];
//	for (int i = 0; i < 7; i++)
//	{
//		if (min > arr[i])
//		{
//			min = arr[i];
//		}
//	}
//	return min;
//}
//int main()
//{
//	int arr[7] = { 0 };
//	double sum = 0.0;
//	for (int i = 0; i<7; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max=get_max(arr);
//	int min=get_min(arr);
//	for (int i = 0; i < 7; i++)
//	{
//		sum += arr[i];
//	}
//	printf("%.2lf", (sum - max - min) / 5);
//	return 0;
//}

//int main()
//{
//	int year, month;
//	scanf("%d%d", &year, &month);
//	if (((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) && month == 2)
//		printf("%d\n", 29);
//	return 0;
//}

