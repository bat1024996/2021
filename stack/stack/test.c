#include"stack.h"

void test1()
{
	Stack s;
	StackInit(&s);

	StackPush(&s, 1);
	StackPush(&s, 2);
	StackPush(&s, 3);
	StackPush(&s, 4);
	StackPush(&s, 5);

	StackPop(&s);
	StackPop(&s);
	StackPop(&s);
	StackPop(&s);
	StackPop(&s);
	StackPop(&s);

	StackDestroy(&s);
}

int main()
{
	test1();
	return 0;
}