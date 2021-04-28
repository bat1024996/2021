#include<iostream>
using namespace std;

void Swap(int *p1, int *p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

//向下调整算法，建大堆
void AdjustDown(int *arr, int sz, int n)
{
	int parents = n;
	int child = 2 * parents + 1;
	while (child < sz)
	{
		if ((child+1<sz)&&(arr[child] <arr[child + 1]))
			++child;          //保证child是两个还在中最大的一个
		if (arr[parents] < arr[child])
			Swap(&arr[parents], &arr[child]);
		parents = child;
		child = 2 * parents + 1;

	}
}

void HeapSort(int *arr, int size)
{
	int end = size - 1;
	while (end>0)
	{
		Swap(&arr[0], &arr[end]);
		//AdjustDown(arr, size, 0);          //error
		AdjustDown(arr, end, 0);
		--end;
	}
}

int main()
{

	//int arr[] = { 27, 15, 19, 18, 28, 34, 65, 49, 25, 37 };

	int arr[] = { 27, 25, 19, 39, 28, 34, 37, 18, 15, 65 };
	int size = sizeof(arr) / sizeof(arr[0]);
	for (int i = (size - 1 - 1) / 2; i >= 0; --i)
	{
		AdjustDown(arr, size, i);
	}
	HeapSort(arr, size);

	return 0;
}