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
	//nullptr;           //c++中的空指针，NULL在预编译是会被解析为0

	//int a = 1;
	//int *p = &a;
	//int *&r = p;                 //p的类型为int*，r是对指针p的引用
	//*r = 2;
	//cout << a << endl;

	////顶层const
	//int i = 3;
	//const int a=i;
	//extern const int b;           //声明多文件可使用的const


	//int &r1 = 3;              //warning: 非常量引用的初始值必须为左值
	//const int &r2=3;             //对常量的引用

	/*int i = 2;
	int &r = i;*/

	int a = 1;
	int b = 2;
	const int *p1 = &a;    //底层const，不能改变p1指向的内容（a）的值，但可以改变p1的指向
	int *const p2 = &b;    //顶层const，const修饰p2，p2是常量指针，不能改变p2的指向（内容）
	                       //           但可以改变p2指向内容（b）的值
	const int *const p3 = &b;
	//什么都不能修改

	//在传参时，顶层const几乎不受影响，但底层const接收的对象必须有相同的const资格
	
	constexpr int a = 2;
	//constexpr   常量表达式

	//constexpr修饰指针

	constexpr int *p = nullptr;  //constexpr定义一个指针，限定符constexpr只对指针有效，对指针所指的对象无关
	//此时，p是一个常量指针，
	

	constexpr int i = 3;
	
	constexpr const int *p = &i;        //

	const int *p = &a;
	return 0;
}