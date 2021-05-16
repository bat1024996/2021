
#include"sort.h"

void TestInsertSort()
{
	int arr[] = { 7, 4, 5, 9, 8, 2, 6, 3 ,2 ,5 , 1 };

	InsertSort(arr, sizeof(arr) / sizeof(arr[0]));
	printf("InsertSort ");
	//PrintArr(arr, sizeof(arr) / sizeof(arr[0]));
}

void TestShellSort()
{
	int arr[] = { 7, 4, 5, 9, 8, 2, 6, 3, 2, 5, 1 };
	ShellSort(arr, sizeof(arr) / sizeof(arr[0]));
	printf("ShellSort ");
	//PrintArr(arr, sizeof(arr) / sizeof(arr[0]));

}


void TestHeapSort()
{
	int arr[] = { 7, 4, 5, 9, 8, 2, 6, 3, 2, 5, 1 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	HeapSort(arr, sz);
	//PrintArr(arr, sz);

}

void TestSelectSort()
{
	int arr[] = { 7, 4, 5, 9, 8, 2, 6, 3, 2, 5, 1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	SelectSort(arr, sz);
	PrintArr(arr, sz);
}

void TestQuickSort()
{
	int arr[] = { 7, 4, 5, 9, 8, 2, 6, 3, 2, 5, 1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	QuickSort(arr,0,sz-1);
	PrintArr(arr, sz);

}

void TestBobbleSort()
{
	int arr[] = { 7, 4, 5, 9, 8, 2, 6, 3, 2, 5, 1};
	int sz = sizeof(arr) / sizeof(arr[0]);
	BobbleSort(arr, sz);
	PrintArr(arr, sz);
}

void TestMergeSort()
{
	int arr[] = { 7, 4, 5, 8, 6, 3, 2, 1, 3, 2, 6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	MergeSortNonR(arr, sz);
	PrintArr(arr, sz);
}

void TestCountSort()
{
	int arr[] = { 7, 4, 5, 8, 6, 3, 2, 1, 3, 2, 6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	CountSort(arr, sz);
	PrintArr(arr, sz);

}


int main()
{
	//TestInsertSort();
	//TestShellSort();
	//TestHeapSort();
	//TestSelectSort();
	//TestOP();

	//TestQuickSort();
	//TestBobbleSort();
	//TestMergeSort();
	TestCountSort();

	return 0;

}