#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;
#include<string>


//int main()
//{
//	//int a;
//	//cin >> a;
//	
//	string a;
//	cin >> a;
//	cout << a << endl;
//	cout << sizeof(a) << endl;
//	return 0;
//}


int main()
{
	//nullptr;           //c++�еĿ�ָ�룬NULL��Ԥ�����ǻᱻ����Ϊ0

	//int a = 1;
	//int *p = &a;
	//int *&r = p;                 //p������Ϊint*��r�Ƕ�ָ��p������
	//*r = 2;
	//cout << a << endl;

	////����const
	//int i = 3;
	//const int a=i;
	//extern const int b;           //�������ļ���ʹ�õ�const


	//int &r1 = 3;              //warning: �ǳ������õĳ�ʼֵ����Ϊ��ֵ
	//const int &r2=3;             //�Գ���������

	/*int i = 2;
	int &r = i;*/

	int a = 1;
	int b = 2;
	const int *p1 = &a;    //�ײ�const�����ܸı�p1ָ������ݣ�a����ֵ�������Ըı�p1��ָ��
	int *const p2 = &b;    //����const��const����p2��p2�ǳ���ָ�룬���ܸı�p2��ָ�����ݣ�
	                       //           �����Ըı�p2ָ�����ݣ�b����ֵ
	const int *const p3 = &b;
	//ʲô�������޸�

	//�ڴ���ʱ������const��������Ӱ�죬���ײ�const���յĶ����������ͬ��const�ʸ�
	
	constexpr int a = 2;
	//constexpr   �������ʽ

	//constexpr����ָ��

	constexpr int *p = nullptr;  //constexpr����һ��ָ�룬�޶���constexprֻ��ָ����Ч����ָ����ָ�Ķ����޹�
	//��ʱ��p��һ������ָ�룬
	

	constexpr int i = 3;
	
	constexpr const int *p = &i;        //

	const int *p = &a;
	return 0;
}