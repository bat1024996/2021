#include"seqlist.h"

void test1()
{
	Seqlist s;
	SeqlistInit(&s);
	SeqlistPushBack(&s, 1);
	SeqlistPushBack(&s, 2);
	SeqlistPushBack(&s, 3);
	SeqlistPushBack(&s, 4);
	SeqlistPrint(&s);

	SeqlistPushFront(&s,5);
	SeqlistPushFront(&s,6);
	SeqlistPrint(&s);

	SeqlistPopBack(&s);
	SeqlistPrint(&s);

	SeqlistPopFront(&s);
	SeqlistPrint(&s);

	SeqlistDestory(&s);
}

int main()
{
	test1();
	return 0;
}