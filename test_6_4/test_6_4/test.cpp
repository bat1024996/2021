#include<iostream>
using namespace std;

//class Date
//{
//public:
//	// ��ʼ���б�
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
//	// ����
//	const int _n;        // const����
//	int& _ref;           // ����
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
//	// ��Ա������ʼ����˳����ǳ�Ա����������˳�����ʼ���б��˳���޹�
//
//	// �õ�ϰ���ǣ���ʼ���б��˳��ͳ�Ա����������˳��һ��
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
//	// explicit ʹ��ʽת���޷�����
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
//	// ������ʽ����ת��
//
//	A aa = 2;       //���캯��    �﷨���壺�ȹ��죬�ڿ�������
//
//	A a(3);
//
//	A(4);        // ��������������������ֻ����һ��
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
//	// ���ڹ��캯����ʼ��
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