#include"dlist.h"

void test1()
{
	DListNode *Dlist=ListCreate();

	ListPushBack(Dlist, 1);
	ListPushBack(Dlist, 2);
	ListPushBack(Dlist, 3);
	ListPushBack(Dlist, 4);
	ListPushBack(Dlist, 5);

	ListPrint(Dlist);

	ListPushFront(Dlist, 6);
	ListPushFront(Dlist, 7);
	ListPushFront(Dlist, 8);
	ListPushFront(Dlist, 9);

	ListPrint(Dlist);

	ListDestory(Dlist);
}

int main()
{
	test1();
	return 0;
}