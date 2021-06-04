#pragma once

#include<iostream>
using std::cin;
using std::cout;
using std::endl;

class Data
{
public:
	// ���캯��(ȱʡд��ͷ�ļ���������)
	Data(int year = 0, int month = 1, int day = 1);
	
	// �������캯��
	Data(const Data& d);

	void Print();

	Data operator+(int day);
	Data operator-(int day);

	Data& operator+=(int day);
	Data& operator-=(int day);

	bool operator>(const Data& d);
	bool operator<(const Data& d);
	bool operator==(const Data& d);

	// ++d
	Data& operator++();

	// d++
	Data operator++(int);

	// --d
	Data& operator--();
	// d--
	Data operator--(int);

	// �������
	int operator-(const Data& d);
private:
	int _year;
	int _month;
	int _day;

};


