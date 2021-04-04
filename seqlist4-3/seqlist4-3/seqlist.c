#include"seqlist.h"


void SeqlistInit(Seqlist *ps)
{
	ps->arr = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

void SeqlistDestory(Seqlist *ps)
{
	free(ps->arr);
	ps->arr = NULL;
}

void CheckCapacity(Seqlist *ps)
{
	if (ps->size == ps->capacity)
	{
		ps->capacity = (ps->capacity == 0) ? 4 : ps->capacity * 2;
		SeqlistDateType *p = (SeqlistDateType*)realloc(ps->arr,
			                     sizeof(SeqlistDateType)*(ps->capacity));
		if (p == NULL)
		{
			printf("relloc failed!\n");
			exit(1);
		}
		ps->arr = p;
	}
}

void SeqlistPushBack(Seqlist *ps, int x)
{
	CheckCapacity(ps);
	ps->arr[ps->size] = x;
	ps->size += 1;
}

void SeqlistPrint(Seqlist *ps)
{
	for (int i = 0; i < ps->size; ++i)
	{
		printf("%d ", ps->arr[i]);
	}
	printf("\n");
}


void SeqlistPushFront(Seqlist *ps, int x)
{
	//头插与直接插入类似
	CheckCapacity(ps);
	for (int i = ps->size; i > 0;--i)
	{
		ps->arr[i] = ps->arr[i - 1];        //从前往后移动
	}
	ps->arr[0] = x;
	ps->size += 1;
}

void SeqlistPopBack(Seqlist *ps)
{
	ps->size -= 1;
}

void SeqlistPopFront(Seqlist *ps)
{
	//从前往后移，将首位覆盖
	for (int i = 1; i < ps->size; ++i)
	{
		ps->arr[i - 1] = ps->arr[i];
	}
	ps->size -= 1;
}




