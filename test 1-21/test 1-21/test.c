#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

//дһ���������100-200������

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


//д�������ж��ֲ���
//int binary_search(int arr[], int k, int sz )//���鴫��ֻ����Ԫ�ص�ַ
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
//	//�����
//	int prr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(prr) / sizeof(prr[0]);
//	//���ֲ��ҵ�
//	//�ҵ��ˣ������±�
//	//�Ҳ��������� -1
//	int ret = binary_search(prr, k, sz );
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	return 0;
//}


//ʵ�ֺ����ж�year�ǲ�������

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
//		printf("%d������\n",year);
//	else
//		printf("%d��������\n",year);
//	return 0;
//}

//ʵ��һ��������������������������

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
//	printf("����ǰ��a=%d,b=%d\n", a, b);
//	swap(&a, &b);
//	printf("������a=%d,b=%d\n", a, b);
//	return 0;
//}

//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���

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

