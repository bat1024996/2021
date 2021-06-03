#include<iostream>
using namespace std;

class Data
{
public:
	// ���캯��
	Data(int year = 0, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	// ���������
	bool operator==(Data d)
	{
		return  _year == d._year
			&& _month == d._month
			&& _day == d._day;
	}

	// �������캯��
	// �������������á� ��ֵ�ǿ�������һֱ�ݹ���ÿ������캯��
	Data(const Data& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}

	// ����������ֵ
	/*void operator=(const Data& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}*/


	// ֧��������ֵ
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