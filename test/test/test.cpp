#include<iostream>
using namespace std;



// // Definition for singly-linked list.
// typedef struct ListNode {
//     int val;
//     struct ListNode *next;
// }ListNode;
//
// struct ListNode* oddEvenList(struct ListNode* head){
//	 struct ListNode *p = (struct ListNode*)malloc(sizeof(struct ListNode));
//	 struct ListNode *node = head, *p1 = p;
//
//	 // ��һ�α����ı䣬�Եڶ��α�����Ӱ��
//	 while (node)
//	 {
//		 p1->next = node;
//		 p1 = node;
//		 if (node->next == NULL)
//			 break;
//		 node = node->next->next;
//	 }
//
//	 node = head->next;
//	 while (node)
//	 {
//		 p1->next = node;
//		 p1 = node;
//		 if (node->next == NULL)
//			 break;
//		 node = node->next->next;
//	 }
//	 p1->next = NULL;
//	 return p->next;
// }
//
//
//int main()
//{
//
//	ListNode *head = (ListNode*)malloc(sizeof(ListNode));
//	ListNode* p = head;
//	head->val = 0;
//	for (int i = 0; i < 5; ++i)
//	{
//		ListNode *q = (ListNode*)malloc(sizeof(ListNode));
//		p->next = q;
//		q->val = i+1;
//		p = p->next;
//	}
//	p->next = NULL;
//
//	oddEvenList(head);
//
//	return 0;
//}

class Date
{
public:
	Date(int year = 0, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	//Data operator=(const Data& d)     // ��ᱻ�ı�
	//{
	//	_year = d._year;
	//	_month = d._month;
	//	_day = d._day;

	//	return *this;
	//}

	// ��const����*this
	/*Data operator=(const Data& d) const
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;

		return *this;
	}*/


	//void operator<<(ostream& out)  // void operator<<(Date *this,ostream& out)
	//{
	//	out << _year << "-" << _month << "-" << _day << endl;
	//}

	// ��Ԫ����������
	// ��������ĺ������Է���˽�г�Ա
	friend ostream& operator<<(ostream& out, const Date& d);

	friend istream& operator>>(istream& in, Date& d);

	void Print() const
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}

	//Date* operator&()
	//{
	//	return this;
	//}

	//const Date* operator&() const
	//{
	//	cout << "û��ȡ��ַ��Ȩ��" << endl;

	//	return nullptr;
	//}
private:
	int _year;
	int _month;
	int _day;
};


// д��ȫ�ֵģ���Ϊ����ǰ���λ�ã����� out << d1
ostream& operator<<(ostream& out, const Date& d)
{
	out << d._year << "-" << d._month << "-" << d._day << endl;

	return out;
}

istream& operator>>(istream& in, Date& d)
{
	in >> d._year >> d._month >> d._day;

	return in;
}


int main()
{
	//Date d1(2021, 6, 4);
	//// void operator<<(Date *this,ostream& out)
	////d1 << cout;

	//Date d2;

/*
	Date d1(2021, 6, 4), d2;

	cout << d1<<d2;*/

	Date d1;
	cin >> d1;

	cout << d1;

	return 0;
}

//int main()
//{
//	const Date d1(2021, 6, 4);
//	Date d2;
//
//	cout << "&d1: " << &d1 << endl;
//	cout << "&d2: " << &d2 << endl;
//
//	return 0;
//}


//int main()
//{
//	Data d1(2021, 6, 4);
//	d1.Print();
//
//	Data d2;
//	d1 = d2;
//
//	d1.Print();
//	return 0;
//}