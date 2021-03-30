#include"seqlist.h"

void SeqlistInit(Seqlist *ps)
{
	ps->arr = NULL;
	ps->sz = 0;
	ps->capacity = 0;
}

//检查容量，不够则扩容
void Check_capacity(Seqlist *ps)
{
	if (ps->capacity == ps->sz)
	{
		//第一次开辟4个空间，以2倍扩容
		ps->capacity = (ps->capacity == 0) ? 4 : 2 * (ps->capacity);
		ps->arr = (SeqlistDatetType*)realloc(ps->arr,
			                             sizeof(SeqlistDatetType)*(ps->capacity));
		if (ps->arr== NULL)
		{
			printf("realloc failed\n");
			exit(-1);
		} 
	}
}


void SeqlistPushBack(Seqlist *ps, SeqlistDatetType x)
{
	Check_capacity(ps);
	ps->arr[ps->sz] = x;
	ps->sz++;

}

void SeqlistPrint(Seqlist *ps)
{
	for (int i = 0; i < ps->sz; ++i)
	{
		printf("%d ", ps->arr[i]);
	}
	printf("\n");
}

void SeqlistPopBack(Seqlist *ps)
{
	ps->sz -= 1;
}

void SeqlistPushFront(Seqlist *ps, SeqlistDatetType x)
{
	Check_capacity(ps);
	int end = ps->sz;
	ps->sz += 1;
	while (end)
	{
		ps->arr[end] = ps->arr[end - 1];
		--end;
	}
	ps->arr[0] = x;
}

void SeqlistPopFront(Seqlist *ps)
{
	//将数据往前移，将头元素覆盖
	for (int i = 0; i < ps->sz - 1; ++i)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->sz -= 1;
}