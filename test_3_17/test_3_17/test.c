#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int solve(int* a, int aLen) 
//{
//	// write code here
//	int i = 0;
//	int n = 0, ret = 0;
//	for (i = 0; i<aLen; i++)
//	{
//		n ^= a[i];           
//		ret = n^i;           //�߼�����
//	}                        
//	return ret^aLen;
//
//}

//int solve(int* a, int aLen)
//{
//	// write code here
//	int i = 0;
//	int n = 0;
//	for (i = 0; i<aLen; i++)            //��2��
//	{
//		n ^= a[i];
//	}
//	for (i = 0; i<=aLen; i++)
//	{
//		n ^= i;
//	}
//	return n;
//}
//
//int solve(int* a, int aLen) 
//{
//	// write code here
//	int i = 0;
//	int n = 0, ret = 0;
//	for (i = 0; i<aLen; i++)
//	{
//		ret^= a[i] ^ i;           //���Ļ������
//	}                        
//	return ret^aLen;
//}
//
//
//int main()
//{
//	int a[3] = { 0, 1, 3 };           //2
//	int ch=solve(a, 3);
//	printf("%d", ch);
//	return 0;
//}


//һ�����������������������֮�⣬���������ֶ����������Ρ���д�����ҳ�������ֻ����һ�ε�����
//
//������ǰ�������ں�
//����������1 2 3 2 5 3
//����� 1 5
//�ù�ϣ��ʵ��

//int* FindNumsAppearOnce(int* array, int arrayLen, int* returnSize)
//{
//	int *p = (int*)malloc(sizeof(int)*(arrayLen - 2));
//	if (p = NULL)
//		return 0;
//	//�������Թ�ϣ�����ʽ�洢
//	int i = 0;
//	for (i = 0; i < arrayLen; i++)
//	{
//		p[*array%(arrayLen-2)]=*array;
//	}
//	//Ҫ�����ͻ����
//	
//
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 2, 5, 3 };
//	int * p=FindNumsAppearOnce(arr, 6, 2);
//	printf("%d\n", *p);
//	return 0;
//}


