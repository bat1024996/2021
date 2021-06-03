#include<iostream>
using namespace std;

class Data
{
public:
	// 构造函数
	Data(int year = 0, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	// 运算符重载
	bool operator==(Data d)
	{
		return  _year == d._year
			&& _month == d._month
			&& _day == d._day;
	}

	// 拷贝构造函数
	// 参数必须是引用。 传值是拷贝，会一直递归调用拷贝构造函数
	Data(const Data& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}

	// 不能连续赋值
	/*void operator=(const Data& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}*/


	// 支持连续赋值
	Data& operator=(const Data& d)
	{
		if (this != &d)
		{
			_year = d._year;
			_month = d._month;
			_day = d._day;
		}
		return *this;
	}

private:
	int _year;
	int _month;
	int _day;
};





class Stack
{
public:
	
	Stack(int Initcapacity=4)
	{
		if (Initcapacity > 0)
		{
			_a = (int*)malloc(sizeof(int)*Initcapacity);
			memset(_a, 0, sizeof(int)*Initcapacity);
			_capacity = Initcapacity;
			_size = 0;

		}
	}
	~Stack()
	{
		free(_a);
		_a = nullptr;
		_capacity = _size = 0;
	}

	void Push(int k)
	{
		if (_size <= _capacity)
			_a[_size++] = k;
	}

	void Pop()
	{
		if (_size>0)
			_a[--_size] = 0;
	}
private:
	int *_a;
	int _size;
	int _capacity;
};


int main()
{

	Data d(2021, 6, 1);

	// Data t1(2021, 6, 1);
	// cout << (t == t1) << endl;
	// Data t1(t);

	Data d1;
	//d1 = d;

	Data d2;

	d1 = d2 = d;

	
	return 0;
}