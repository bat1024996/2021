#include"stack.h"

void StackInit(Stack* ps)
{
	ps->capacity = 10;

	//Õ»¿Õ¼äÎª10
	ps->arr = (DataType*)malloc(sizeof(DataType)* ps->capacity);
	if (!ps->arr)
	{
		printf("malloc failed\n");
		exit(-1);
	}
	ps->top = -1;
}

void StackDestroy(Stack* ps)
{
	free(ps->arr);
	ps->arr = NULL;
}


int StackSize(Stack* ps)
{
	return ps->top + 1;
}

void StackPush(Stack* ps, DataType data)
{
	if (StackSize(ps) < ps->capacity)
	{
		ps->arr[++ps->top] = data;
	}
	else
	{
		printf("Stack over flow\n");
		exit(-1);
	}
}

int StackEmpty(Stack* ps)
{
	return ps->top == -1;
}


void StackPop(Stack* ps)
{
	if (StackEmpty(ps))
	{
		printf("Stack is empty\n");
	}
	else
	{
		printf("%d\n", ps->arr[ps->top--]);
	}
}



