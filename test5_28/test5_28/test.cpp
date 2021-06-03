

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int sum = 0;
//
//	int arr[] = { 1, 0, 1 };
//	for (int i = 0; i < sizeof(arr) / sizeof(int); ++i)
//	{
//		sum = sum << 1 + arr[i];  // 结果不正确，优先级问题
//	}
//
//	cout << sum << endl;
//	return 0;
//}

//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//
//
//using std::cin;
//using std::cout;
//using std::endl;
//
//namespace test
//{
//	int scanf = 10;
//	int strlen = 20;
//	int ADD(int a, int b)
//	{
//		return a + b;
//	}
//}
//
//int main()
//{
//	cout << test::scanf << endl;
//	cout << test::strlen << endl;
//	cout << test::ADD(1,2) << endl;
//	return 0;
//}
//




#include<iostream>
using namespace std;
//
//// 缺省参数
//// 必须从右向左缺省，且连续
//
//void F(int a, int b, int c=10);
//
//void F(int a, int b, int c)
//{
//	cout << a << " " << b << " " << c << endl;
//}
//
//int main()
//{
//	F(1,2);
//
//	return 0;
//}


//int Add(char a, char b)
//{
//	return a + b;
//}
//
//int Add(int a, int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	cout << Add(1, 2) << endl;
//	cout << (char)Add((char)1, 'a') << endl;
//
//	return 0;
//}

//void Swap(int& p, int& q)
//{
//	int i = p;
//	p = q;
//	q = i;
//}
//int main()
//{
//
//	int a = 10;
//	//int& b = a;
//
//	int c = 20;
//	// cout <<typeid(b)<< endl;
//	Swap(a, c);
//
//	cout << a << " " << c << endl;
//
//	return 0;
//}


//int Add(int a, int b)
//{
//	int c = a + b;
//	return c;
//}
//
//int main()
//{
//	// 在Add函数栈帧中创建中间量，保存返回值
//	int ret = Add(10, 20);
//
//	// 中间量具有常属性
//	const int& ret = Add(10, 20);
//
//
//	return 0;
//}

//int& Add(int a, int b)
//{
//	int c = a + b;
//	return c;
//}
//
//int main()
//{
//	// 在Add函数栈帧中创建中间量，保存返回值
//	// int ret = Add(10, 20);
//
//	// 中间量具有常属性
//	int& ret = Add(10, 20);
//	Add(1, 3);
//
//	cout << ret << endl;
//
//	return 0;
//}

//void F(int arr[])
//{
//	// 这里的arr不是数组，而是指针，不能使用范围for
//	cout << typeid(arr).name() << endl;
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4 };
//	cout << typeid(arr).name() << endl;
//	// e是拷贝
//	//for (auto e : arr)
//	/*{
//		e = 0;
//	}*/
//
//	// re是引用
//	for (auto& re : arr)
//	{
//		re = 0;
//	}
//
//	F(arr);
//	for (auto e : arr)
//	{
//		
//		cout << e << " ";
//	}
//	return 0;
//}

//void F(int i)
//{
//	cout << "int i" << endl;
//}
//
//void F(int *p)
//{
//	cout << "int *p" << endl;
//}
//int main()
//{
//
//	int *p = nullptr;
//
//	int *q = NULL;
///*
//	cout << typeid(p).name() << endl;
//	cout << typeid(q).name() << endl;*/
//
//	F(0);
//
//	// 传参时传0
//	F(NULL);
//
//	F(nullptr);
//	return 0;
//}




// 内class

//class stu
//{
//public:
//private:
//	char name[20];
//	int age;
//
//};



//class Stack
//{
//private:
//	int _size;
//	int _capacity;
//};
//
//
//int main()
//{
//	Stack st;
//	cout << sizeof(st) << endl;
//	return 0;
//}


//class Time
//{
//public:
//	
//	void Init(int year=0, int month=1, int day=1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Time t;
//	// 
//	t.Init(2021, 5, 31);
//
//
//	
//	return 0;
//}

class A
{
public:
	A(int a=0)
	{
		_a = a;
		cout << "A(int a)构造函数" << endl;
	}

	void Print()
	{
		cout << "_a = " << _a << endl;
	}

private:
	int _a;

};

class Data
{
public:
	Data(int year = 0, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void Print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
		_aa.Print();
	}
	~Data()
	{
		cout << "析构~Data()" << endl;
	}
	
private:
	int _year;
	int _month;
	int _day;
	A _aa;
};



class Stack
{
public:
	Stack(int Initcapacity = 4)
	{
		if (Initcapacity > 0)
		{
			_a = (int*)malloc(sizeof(int)*Initcapacity);
			memset(_a, 0, sizeof(int)*Initcapacity);
			_size = 0;
			_capacity = Initcapacity;
		}
	}

	void Push(int k)
	{
		if (_size<=_capacity)
			_a[_size++] = k;
	}
	void Pop()
	{
		_a[--_size] = 0;
	}
	// 析构函数，清理资源
	~Stack()
	{
		free(_a);
		_a = nullptr;
		_capacity = _size = 0;
	}

private:
	int *_a;
	int _capacity;
	int _size;
};

// 构造函数：如果我们不写构造函数，编译器会自动调用默认构造函数，该构造函数对内置类型不初始化
// 对自定义类型（struct，class）初始化


int main()
{


	return 0;
}

//int main()
//{
//	 // Data t(2021, 5, 29);	
//	
//	 // t.Print();
//
//	 // Data t1;
//	 // t1.Print();
//
//	/*Stack st(10);
//	st.Push(1);
//	st.Push(2);
//	st.Push(3);
//	st.Push(4);
//	st.Push(5);
//	st.Pop();
//	st.Pop();
//	st.Pop();
//*/
//
//	Stack st1;
//
//	Stack st2;
//
//	// 先析构st2，在析构st1
//
//
//	return 0;
//}