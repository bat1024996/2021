#include<iostream>
using namespace std;

//class Date
//{
//public:
//	// 初始化列表
//	Date(int year = 0, int month = 1, int day = 1)
//		:_year(year)
//		, _month(month)
//		, _day(day)
//		,_n(10)
//		, _ref(year)
//	{
//	}
//
//
//
//private:
//	int _year;
//	int _month;
//	int _day;
//
//	// 声明
//	const int _n;        // const修饰
//	int& _ref;           // 引用
//
//};
//
//int main()
//{
//	Date d1;
//	return 0;
//}


//class A
//{
//public:
//	// 成员变量初始化的顺序就是成员变量声明的顺序，与初始化列表的顺序无关
//
//	// 好的习惯是：初始化列表的顺序和成员变量声明的顺序一致
//	A(int a)
//		:_a1(a)
//		, _a2(_a1)
//	{}
//	void Print() {
//		cout << _a1 << " " << _a2 << endl;
//	}
//private:
//	int _a2;
//	int _a1;
//};
//
//int main() {
//	A aa(1);
//	aa.Print();
//
//	return 0;
//}
//
//int Getmonthday(int year, int month)
//{
//	static int arr[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
//		return 29;
//	return arr[month];
//}
//
//class Date
//{
//public:
//	friend istream& operator>>(istream& in, Date& d);
//	Date(int year = 0, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	int CalDay()
//	{
//		int sum = _day;
//		int month = _month;
//		while (--month)
//		{
//			sum += Getmonthday(_year, month);
//		}
//		return sum;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//
//};
//istream& operator>>(istream& in, Date& d)
//{
//	in >> d._year >> d._month >> d._day;
//
//	return in;
//}
//
//int main()
//{
//	Date d;
//	cin >> d;
//
//	cout << d.CalDay() << endl;
//
//	return 0;
//}



//class A
//{
//public:
//	// explicit 使隐式转换无法发生
//
//	 A(int a)
//		:_a(a)
//	{
//		cout << "A(int a)" << endl;
//	}
//
//	A(const A& aa)
//	{
//		cout << "A(const A& aa)" << endl;
//	}
//	
//	~A()
//	{
//		cout << "~A()" << endl;
//	}
//
//private:
//	int _a;
//};
//
//int main()
//{
//	// 发生隐式类型转换
//
//	A aa = 2;       //构造函数    语法意义：先构造，在拷贝构造
//
//	A a(3);
//
//	A(4);        // 构造匿名对象，声明周期只在这一行
//
//	return 0;
//}
//
//
//
//
//class A
//{
//private:
//	// 不在构造函数初始化
//	static int _n;
//};
//
//int A::_n = 0;
//
//int main()
//{
//	cout << sizeof(A) << endl;
//
//	return 0;
//}



class Add
{
public:
	Add()
	{
		++_i;
		_sum += _i;
	}
	static int& ReturnSum()
	{
		return _sum;
	}
private:
	static int _i;
	static int _sum;
};

int Add::_i = 0;
int Add::_sum = 0;

class Solution {
public:

	int Sum_Solution(int n) {
		Add aa[5];
		return Add::ReturnSum();
	}
};


int main()
{
	Solution s;
	cout << s.Sum_Solution(5) << endl;
	return 0;
}