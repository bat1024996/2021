#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;
#include<cstring>


//int main()
//{
//	int a = 0x80000000;
//	a <<= 1;
//	//cout << a;        //0
//	int b = 0x80000001;
//	cout << b;
//	return 0;
//}

//int main()
//{
//	char a1[16] = "����";         //ÿ������ռ2���ַ��ռ䣬���Խ��бȽ�
//	char a2[] = "ЦЦ";
//	cout << strcmp(a1, a2)<<endl;
//	cout << sizeof(a1) << endl;
//	cout << strcpy(a1, a2) << endl;
//	return 0;
//}

//ֱ�Ӳ�������
//char *InsertSort(int *arr, int sz)
//{
//	int i, j;
//	int temp = 0;
//	for (i = 0; i < sz-1; ++i)
//	{
//		temp = arr[i];
//		for (j = i + 1; j>0;--j)
//		{
//			if (arr[j] < arr[i])
//			{
//				arr[j + 1] = arr[j];
//			}
//			else
//			{
//				arr[j] = temp;
//			}
//		}
//	}
//}

int main()
{
	int arr[] = { 4,1, 2, 3, 7, 8 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	//InsertSort(arr, sz);
	int i, j;
	int temp = 0;
	for (i = 1; i < sz ; ++i)        
	{
		temp = arr[i];
		for ( j=i-1; (j>=0)&&(arr[j]>temp); --j)  //Ԫ�ؽ���ֱ��temp<=arr[j]
		{
				arr[j+1] = arr[j];		
		}
		//��ʱ��j�����һ��
		arr[j+1] = temp;
	}
	//�õ��Ը���һ�����Ĺ���
	for (auto ret : arr)
		cout << ret << ",";
	return 0;
}


