#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//enum             //ö�����͵��ŵ㣺�����ṩ������Ϊ�����ڲ��ĳ�����const�ͺ����޷������ģ�ö�ٱ�������ռ�ö���洢�ռ�
//{                //ȱ�㣺ö�����Ͷ���ı���ֻ��Ϊint�͡�
//	a,
//	b = 2,
//	c
//};
//
//int main()
//{
//	//a = 2;            //aΪö�ٳ���
//
//	int arr[c];          
//	return 0;
//}


//char *get(void)
//{
//	char arr[4] = "bit";
//	return arr;          //���ؾֲ���������ʱ�����ĵ�ַwarning
//}
//int main()
//{
//	get();
//	return 0;
////}



int main()
{
	char a[1000];
	int i=0;
	for (i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
	}
	printf("%d\n", strlen(a));
	
	return 0;
}