#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//ģ��ʵ��atoi
#include<ctype.h>
//int my_atoi(char *p)
//{
//	int num=0;
//	while (*p)
//	{
//		if (!isdigit(*p))
//			break;
//		num = 10*num+ (*p)-48;           //�ַ�0��Ӧ��ASCIIΪ48
//		p++;
//	}
//	return num;
//}
//
//int main()
//{
//	char arr[] = "23skj";
//	printf("%d\n", atoi(arr));
//
//	printf("%d\n", my_atoi(arr));
//	return 0;
//}
//

//һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ�
//��дһ�������ҳ�������ֻ����һ�ε����֡�

//�����ͬ�������Ϊ0��0����κ��������䱾��

//void get_TwoNum(int* arr,int sz)
//{
//	int p = 0;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		p ^= *(arr + i);            //�õ��Ľ��Ϊ ����ֻ����һ�ε�����������ֵ
//	}
//	//010110        //���Ľ����һ������λΪ1����һ������Ӧλ��Ϊ0
//	//���������ֿ��������������
//	int n=0;
//	int srr[2] = { 0 };
//	while (++n)
//	{
//		//���ʵ�ַ��飿
//		if (p & 1)           //�ҵ�һ��������λΪ1��
//		{
//			for (i = 0; i < sz; i++,arr++)      //��ԭ������б���
//			{
//				//��Ӧ������λΪ1
//				if (*arr >> (n - 1) & 1)
//					srr[0] ^= *arr;
//				//��Ӧ������λΪ0
//				else
//					srr[1] ^= *arr;               //��srr����дΪarr���飬���԰���ʱ��
//			}
//			printf("%d %d\n", srr[0], srr[1]);
//			break;               //����ѭ��
//		}
//		else
//			p =p>>1;
//	}
//}
//int main()
//{
//	int arr[10] = { 1, 5, 6, 6, 7, 9, 5, 7, 3, 9 };
//
//	get_TwoNum(arr,10);
//
//	return 0;
//}