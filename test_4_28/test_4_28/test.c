#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<string.h>

typedef int HPDataType;

typedef struct hp
{
	HPDataType *arr;
	int size;
	int capacity;
}Heap;


// 堆的构建
void HeapCreate(Heap* hp, HPDataType* a, int n);
// 堆的销毁
void HeapDestory(Heap* hp);
// 堆的插入
void HeapPush(Heap* hp, HPDataType x);
// 堆的删除
void HeapPop(Heap* hp);
// 取堆顶的数据
HPDataType HeapTop(Heap* hp);
// 堆的数据个数
int HeapSize(Heap* hp);
// 堆的判空
int HeapEmpty(Heap* hp);

void Swap(HPDataType* p1, HPDataType*p2)
{
	HPDataType tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void AdjustDown(int *arr,int sz,int n)
{
	assert(arr);
	int parents = n;
	int child = 2 * parents + 1;
	while (child < sz)
	{
		if ((arr[child]<arr[child + 1]) && (child + 1 < sz))
			++child;
		if (arr[child] > arr[parents])
			Swap(&arr[child], &arr[parents]);
		parents = child;
		child = 2 * parents + 1;
	}
}

void CreatBigHeap(Heap *pl)
{
	//建大堆
	int n = pl->size;
	for (int i = (n - 1 - 1) / 2; i >= 0; --i)
	{
		AdjustDown(pl->arr , n, i);
	}
}

void HeapCreate(Heap* php, HPDataType* a, int n)
{
	assert(php);
	php->size = n;
	php->capacity = n;
	php->arr = (HPDataType*)malloc(sizeof(HPDataType*)*php->capacity);
	if (!php->arr)
	{
		printf("malloc failed\n");
		exit(-1);
	}
	memcpy(php->arr, a, sizeof(HPDataType)*n);
	
	CreatBigHeap(php);
	
}

void HeapPush(Heap* php, HPDataType data)
{
	++php->capacity;
	HPDataType *p = (HPDataType*)realloc(php->arr, sizeof(HPDataType)*php->capacity);
	if (!p)
	{
		printf("realloc failed\n");
		exit(-1);
	}
	php->arr = p;
	php->arr[php->size++] = data;

	CreatBigHeap(php);
}

void HeapPrint(Heap *php)
{
	for (int i = 0; i < php->size; ++i)
	{
		printf("%d ", php->arr[i]);
	}
	printf("\n");

}

void HeapPop(Heap* php)
{
	assert(php);
	Swap(&php->arr[0], &php->arr[php->size-1]);
	--php->size;
	AdjustDown(php->arr, php->size, 0);

}

HPDataType HeapTop(Heap* php)
{
	assert(php);
	return php->arr[0];
}


int HeapSize(Heap* php)
{
	assert(php);
	return php->size;
}

int HeapEmpty(Heap* php)
{
	assert(php);
	return php->size == 0;
}

void HeapDestory(Heap* php)
{
	assert(php);
	free(php->arr);
	php->arr = NULL;
	php->size = php->capacity = 0;
}

//void PrintTopK(int* arr, int sz, int k)
//{
//	//选出第k小的
//	Heap hp;
//	HeapCreate(&hp, arr, k+1);
//	for (int i = 0; i < sz-k; ++i)
//	{
//		hp.arr[0] = arr[i + k +1];
//		AdjustDown(&hp.arr, k+1, 0);
//	}
//	for (int j = 1; j < k+1;++j)
//		printf("%d ", hp.arr[j]);
//
//	
//	HeapDestory(&hp);
//
//}

void PrintTopK(int* arr, int sz, int k)
{
	//选出第k小的
	Heap hp;
	HeapCreate(&hp, arr, k);
	for (int i = k - 1; i < sz; ++i)
	{
		if (arr[i] < hp.arr[0])
		{
			hp.arr[0] = arr[i];
			AdjustDown(&hp.arr, k, 0);
		}
	}
	for (int j = 0; j < k; ++j)
		printf("%d ", hp.arr[j]);


	HeapDestory(&hp);

}


int main()
{
	int arr[] = { 27, 15, 19, 18, 28, 34, 65, 49, 25, 37 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Heap hp;
	HeapCreate(&hp, arr, sz);

	HeapPush(&hp, 10);
	HeapPush(&hp, 20);
	HeapPush(&hp, 30);
	HeapPrint(&hp);

	HeapPop(&hp);
	HeapPop(&hp);
	HeapPrint(&hp);

	//printf("%d\n", HeapTop(&hp));

	HeapDestory(&hp);

	PrintTopK(arr, sz, 3);  //第3小的数
	

	return 0;
}