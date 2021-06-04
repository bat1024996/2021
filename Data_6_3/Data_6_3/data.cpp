#pragma once

#include"data.h"

inline int GetmonthDay(int year,int month)
{
	static int arr[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
		return 29;
	return arr[month];
}

inline int GetYearDay(int year,int month)
{
	if (month > 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
		return 366;
	return 365;
}

// ���캯��
Data::Data(int year,int month ,int day)
{
	// ������ڵĺϷ���
	if (year >= 0
		&& (month > 0 && month <= 12)
		&& day > 0 && day <= GetmonthDay(year, month))
	{
		_year = year;
		_month = month;
		_day = day;
	}
	
}

// �������캯��
Data::Data(const Data& d)
{
	_year = d._year;
	_month = d._month;
	_day = d._day;
}

void Data::Print()
{
	cout << _year << "-" << _month << "-" << _day << endl;
}


Data& Data::operator+=(int day)
{
	if (day<0)
	{
		// �Ӹ�����
		*this -= (-day);
	}
	else
	{
		int ret = _day + day;
		while (ret > GetmonthDay(_year, _month))
		{
			++_month;
			if (_month > 12)
			{
				++_year;
				_month = 1;
			}
			ret = ret - GetmonthDay(_year, _month);
		}
		_day = ret;
	}
	return *this;
}

Data Data::operator+(int day)
{
	Data d(*this);
	// ���� +=
	d += day;

	return d;
}

Data& Data::operator-=(int day)
{
	if (day < 0)
	{
		//  ��������
		*this += (-day);
	}
	else
	{
		int ret = _day;
		while (ret < day)
		{
			--_month;
			if (_month == 0)
			{
				--_year;
				_month = 12;
			}
			ret += GetmonthDay(_year, _month);
		}
		_day = ret - day;

	}
	return *this;
}

Data Data::operator-(int day)
{
	Data d(*this);
	d += day;

	return  d;
}

// ++d
Data& Data::operator++()
{
	// ����ǰ���
	*this += 1;

	return *this;
}

// d++
Data Data::operator++(int)
{
	Data d(*this);
	*this += 1;
	
	return d;
}

// --d
Data& Data::operator--()
{
	*this -= 1;
	return *this;
}

// d--
Data Data::operator--(int)
{
	Data d(*this);
	*this -= 1;

	return d;
}


bool Data::operator>(const Data& d)
{
	if (_year > d._year)
		return true;
	else if(_year == d._year)
	{
		if (_month > d._month)
			return true;
		else if (_month == d._month)
		{
			if (_day > d._day)
				return true;
		}
	}
	return false;
}

bool Data::operator==(const Data& d)
{
	return _year == d._year
		&&_month == d._month
		&&_day == d._day;
}

bool Data::operator<(const Data& d)
{
	/*if (_year < d._year)
		return true;
	else if (_year == d._year)
	{
		if (_month < d._month)
			return true;
		else if (_month==d._month)
		{
			if (_day < d._day)
				return true;
		}
	}
	return false;*/

	// ���� d1>d2
	// return ((const Data)d>(*this));
	return !(*this > d);
}


int Data::operator-(const Data& d1)
{
	Data d(*this);
      //Ĭ��d>d1
	
		int ret = 0;
		while (d._day < d1._day)
		{
			if (--d._month == 0)       // d._month�Ѿ��Լ�
				--d._year;
			else
				d._day += GetmonthDay(d._year, d._month);
		}
		ret = d._day - d1._day;
		while (d._month != d1._month)
		{
			if (--d._month == 0)
				--d._year;
			else
				ret += GetmonthDay(d._year, d._month);
		}
		while (d._year != d1._year)
		{
			--d._year;
			ret += GetYearDay(d._year, d._month);
		}
		return ret;
	
	
		
}