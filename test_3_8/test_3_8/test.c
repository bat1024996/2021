#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//�����⣺�жϴ�С��
//С�ˣ�01 00 00 00
//��ˣ�00 00 00 01

//��һ
//int check_sys()
//{
//	int x = 1;
//	char*p = (char*)&x;
//	return *p;
//}

//int main()
//{
//	if (check_sys() == 1)
//		printf("С��\n");
//	else
//		printf("���\n");
//	
//	return 0;
//}

//����
//union U
//{
//	char p;
//	int x;
//};
//int main()
//{
//	union U s;
//	s.x = 1;
//	if (s.p == 1)
//		printf("С��\n");
//	else
//		printf("���\n");
//	
//	return 0;
//}
//
//int main()
//{
//	////����const
//	//const char *p = "abcd";    //p��һ��ָ���ַ���������ָ��
//	////*p = c;			//error�������ַ�����pָ������ݲ��ܸ�
//	//p = "cdef";			//p���Ը�
//
//	//�ײ�const
//	char * const p = "abcd";
//	
//
//	printf("%s\n", p);
//	return 0;
//}

//ָ������
//���ָ�������

//int *arr[4];    //arr��һ������������4��Ԫ�أ�ÿ��Ԫ����ָ�����ε�ָ��
//char** p[3];
//
//int arr[10];
//int (*p)[10]=&arr;       //����ָ��----ָ�������ָ��
////p��ָ�룬����Ϊint(* )[10]
//
//char pc[5];
//char(*ptr)[5] = &pc;
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int(*p)[10] = &arr;
//	printf("%p\n", p);
//	printf("%p\n", p+1);		//p Ϊָ�������ָ�룬p+1��ͬ��&arr+1��
//	
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p)[i]);  //pָ����������, p=&arr�� *p<==>arr
//		//(*p)[i]
//		//*(*(p+0)+i)
//		//p[0][i]
//	}
//
//	return 0;
////}
//void print(int(*p)[5])          //��ά���鴫�Σ����ݵ�ʱһά���飬������ָ�����
//{
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
//	print(arr);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int *const p = &a;
//	a = 2;
//	printf("%d ", a);
//	return 0;
//}

