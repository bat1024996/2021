#pragma once

#include"SListNode.h"

void test1()
{
	SListNode *SL=NULL;

	SlistPushBack(&SL, 0);
	SlistPushBack(&SL, 1);
	SlistPushBack(&SL, 2);
	SlistPushBack(&SL, 3);
	SlistPrint(SL);

	SlistPushFront(&SL, 4);
	SlistPushFront(&SL, 5);
	SlistPushFront(&SL, 6);
	SlistPrint(SL);

	SlistPopBack(&SL);
	SlistPopBack(&SL);
	SlistPrint(SL);

	SlistPopFront(&SL);
	SlistPopFront(&SL);
	SlistPrint(SL);



}

int main()
{
	test1();
	return 0;
}