#include"seqlist.h"

void test1()
{
	Seqlist s;
	SeqlistInit(&s);
	SeqlistPushBack(&s, 1);
	SeqlistPushBack(&s, 2);
	SeqlistPushBack(&s, 3);
	SeqlistPushBack(&s, 4);
	SeqlistPushBack(&s, 5);
	SeqlistPushFront(&s, 6);

    SeqlistPrint(&s);

	SeqlistPopBack(&s);
	SeqlistPopFront(&s);

	SeqlistPrint(&s);


	//�����ڴ�й©��ע���ͷ�
	free(s.arr);
	s.arr = NULL;
}
int main()
{
	test1();
	return 0;
}