#include"data.h"

void test1()
{
	Data d1(2021, 6, 3);
	d1.Print();

	Data d2 = d1 + 240;
	d2.Print();
	d1.Print();

	//Data d2;
}

void test2()
{
	Data d1(2021, 6, 3);

	d1 -= -10;
	d1.Print();
	d1 += -20;
	d1.Print();
	
}

void test3()
{
	Data d1(2021, 6, 3);
	++d1;
	d1.Print();

	d1++;
	d1.Print();

	--d1;
	d1.Print();

	d1--;
	d1.Print();
}

void test4()
{
	Data d1(2021, 6, 3);

	Data d2(2021, 6, 2);
	cout << (d1 > d2) << endl;
	cout << (d1 < d2) << endl;

}

void test5()
{
	Data d1(2021, 6, 3);
	Data d2(2002, 2, 14);

	cout << (d1 - d2) << endl;

}
int main()
{
	// test1();
	// test2();
	// test3();
	 // test4();
	test5();

	return 0;
}