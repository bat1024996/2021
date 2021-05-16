#include"sort.h"

//直接插入排序
//void InsertSort(int *arr, int sz)
//{
//	for (int i = 1; i < sz; ++i)
//	{
//		int tmp = arr[i];
//		while (i >0 && arr[i - 1]>tmp)
//		{
//			arr[i] = arr[i - 1];
//			--i;
//		}
//		arr[i] = tmp;
//	}
//}

void InsertSort(int *arr, int sz)
{
	for (int i = 0; i < sz - 1; ++i)
	{
		int end = i;
		int tmp = arr[end + 1]; 
		//往有序区间[0,end]里面插入tmp
		while (end >= 0 && arr[end] > tmp)
		{
			arr[end + 1] = arr[end];
			--end;
		}
		arr[end + 1] = tmp;
	}

}

void PrintArr(int *arr, int sz)
{
	for (int i = 0; i < sz; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void ShellSort(int *arr, int sz)
{
	int gap = sz;
	while (gap>1)
	{
		gap = gap / 3 + 1;
		for (int i = 0; i<sz - gap; ++i)
		{
			int end = i;
			int tmp = arr[end + gap];
			while ((end >= 0) && (arr[end] > tmp))
			{
				arr[end + gap] = arr[end];
				end -= gap;
			}
			arr[end + gap] = tmp;
		}
	}
}

void Swap(int *p, int *q)
{
	int tmp = *p;
	*p = *q;
	*q = tmp;
}

//排升序，建大堆
void AdjustDown(int* arr, int sz, int i)
{
	int parents = i;
	int child = 2 * i + 1;
	while (child < sz)
	{
		if ((child+1<sz) && (arr[child + 1]>arr[child]))
			++child;
		if (arr[parents] < arr[child])
		{
			Swap(&arr[parents], &arr[child]);
			parents = child;
			child = 2 * parents + 1;
		}
		else
		{
			break;
		}
	}
}

void HeapSort(int* arr, int sz)
{
	//建堆
	for (int i = (sz - 1 - 1) / 2; i >= 0; --i)
	{
		AdjustDown(arr, sz, i);
	}
	int n = sz - 1;
	while (n)
	{
		Swap(&arr[0], &arr[n]);
		AdjustDown(arr, n, 0);
		--n;
	}

}

void SelectSort(int *arr, int sz)
{
	int min, max;
	min = max = 0;
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		for (int i = left; i <=right; ++i)
		{
			if (arr[i]>arr[max])
				max = i;
			if (arr[i] < arr[min])
				min = i;
		}
		//有一种特殊情况，最大的在最左边，
		Swap(&arr[left], &arr[min]);
		if (max == left)
		{
			Swap(&arr[right], &arr[min]);
		}
		else
		{
			Swap(&arr[right], &arr[max]);
		}

		++left, --right;
	}
}

void TestOP()
{
	srand((unsigned int)time(0));
	const int N = 10000000;
	int* a1 = (int*)malloc(sizeof(int)*N);
	int* a2 = (int*)malloc(sizeof(int)*N);
	int* a3 = (int*)malloc(sizeof(int)*N);
	int* a4 = (int*)malloc(sizeof(int)*N);
	int* a5 = (int*)malloc(sizeof(int)*N);
	int* a6 = (int*)malloc(sizeof(int)*N);
	for (int i = 0; i < N; ++i)
	{
		a1[i] = rand();
		a2[i] = a1[i];
		a3[i] = a1[i];
		a4[i] = a1[i];
		a5[i] = a1[i];
		a6[i] = a1[i];
	}
	int begin1 = clock();
	//InsertSort(a1, N);
	int end1 = clock();

	int begin2 = clock();
	ShellSort(a2, N);
	int end2 = clock();

	int begin3 = clock();
	//SelectSort(a3, N);
	int end3 = clock();

	int begin4 = clock();
	HeapSort(a4, N);
	int end4 = clock();

	int begin5 = clock();
	QuickSort(a5, 0, N - 1);
	int end5 = clock();

	int begin6 = clock();
	MergeSort(a6, N);
	int end6 = clock();

	printf("InsertSort:%d\n", end1 - begin1);
	printf("ShellSort:%d\n", end2 - begin2);
	printf("SelectSort:%d\n", end3 - begin3);
	printf("HeapSort:%d\n", end4 - begin4);
	printf("QuickSort:%d\n", end5 - begin5);
	printf("MergeSort:%d\n", end6 - begin6);

	free(a1);
	free(a2);
	free(a3);
	free(a4);
	free(a5);
	free(a6);
}

void BobbleSort(int *arr, int sz)
{
	
	/*for (int i = 0; i < sz; ++i)
	{
		int flag = 1;
		for (int j = 0; j < sz - i-1; ++j)
		{
			if (arr[j]>arr[j + 1])
			{
				Swap(&arr[j], &arr[j + 1]);
				flag = 0;
			}
		}
		if (flag)
			break;
	}*/

	for (int end = sz; end > 0; --end)
	{
		int flag = 1;
		for (int j = 0; j < end-1; ++j)
		{
			if (arr[j]>arr[j + 1])
			{
				Swap(&arr[j], &arr[j + 1]);
				flag = 0;
			}
		}
		if (flag)
			break;
	}
}



//对快排的优化
//三数取中
int GetMidKeyi(int *arr, int begin, int end)
{
	//方法2
	//形成arr[begin]>arr[mid]>arr[end]的顺序,

	//注意if语句的顺序,否则排不了顺序
	int mid = (begin + end) >> 1;
	if (arr[begin] < arr[mid])
		Swap(&begin, &mid);
	if (arr[begin] < arr[end])
		Swap(&begin, &end);
	if (arr[mid] < arr[end])
		Swap(&mid, &end);
	return mid;

	//方法1
	//int mid = (begin + end) >> 1;
	//if (arr[begin] > arr[mid])
	//{
	//	if (arr[mid] > arr[end])
	//		return mid;
	//	if (arr[begin] > arr[end])
	//		return end;
	//	return begin;
	//}
	//else
	//{
	//	if (arr[mid] < arr[end])
	//		return mid;
	//	if (arr[begin]>arr[end])
	//		return begin;
	//	return end;
	//}
		
}



//左右指针法
int PartSort1(int* arr, int begin, int end)
{
	int left = begin;
	int right = end;
	int keyi = left;
	//int keyi = GetMidKeyi(arr, begin, end);
	//三数取中，默认放到最左边
	//Swap(&arr[left], &arr[keyi]);

	while (left < right)
	{
		//right先走
		//找大
		while ((left<right) && (arr[right] >= arr[keyi]))
		{
			--right;
		}
		//找小
		while ((left<right) && (arr[left] <= arr[keyi]))
		{
			++left;
		}
		Swap(&arr[right], &arr[left]);
	}
	//left和right相遇
	Swap(&arr[keyi], &arr[left]);
	return left;
}


//挖坑法
int PartSort2(int *arr, int begin, int end)
{
	int left = begin;
	int right = end;

	int keyi = GetMidKeyi(arr, begin, end);
	Swap(&arr[keyi], &arr[left]);
	keyi = left;

	while (left < right)
	{
		//找小
		while ((left < right) && (arr[keyi] <= arr[right]))
		{
			--right;
		}
		
		//Swap(&arr[keyi], &arr[right]);
		//keyi = right;
		//放到左边的坑中,右边形成新的坑
		arr[left] = arr[right];

		//left找大
		while ((left < right) && (arr[keyi] >= arr[left]))
		{
			++left;
		}
		//Swap(&arr[keyi], &arr[left]);
		//keyi = left;
		//放到右边的坑中，左边形成新的坑
		arr[right] = arr[left];

	}
	arr[left] = arr[keyi];
	//left和right相遇
	return left;
}

//前后指针法
int PartSort3(int *arr, int begin, int end)
{
	int keyi = GetMidKeyi(arr, begin, end);
	Swap(&arr[keyi], &arr[begin]);
	keyi = begin;
	int cur = begin + 1;
	int prev = begin;
	while (cur <= end)
	{
		//找小，把小的移到前面
		if (arr[cur] < arr[keyi] && ++prev != cur)
		{
			Swap(&arr[cur], &arr[prev]);
		}

		++cur;
	}
	Swap(&arr[keyi], &arr[prev]);
	return prev;
}


void QuickSort(int *arr, int begin,int end)
{
	//终止条件
	if (end<=begin)         //画图
		return;
	
	//小区间优化，减少递归的次数
	if (end - begin > 100)
	{
		int meeti = PartSort3(arr, begin, end);

		//递归
		QuickSort(arr, begin, meeti - 1);
		QuickSort(arr, meeti + 1, end);

	}

	//如果这个区间较小，在用分治递归已不太划算
	else
	{
		InsertSort(arr + begin, end - begin + 1);
	}

}

//快排的非递归实现
//用栈存储begin和end



//归并排序
void _MergeSort(int *arr, int left, int right, int* p)
{
	if (left >= right)
		return;

	int mid = (left + right) >> 1;
	_MergeSort(arr, left, mid, p);
	_MergeSort(arr, mid + 1, right, p);

	int begin1 = left, end1 = mid;
	int begin2 = mid + 1, end2 = right;

	int i = left;
	while (begin1 <= end1&&begin2 <= end2)
	{
		if (arr[begin1] < arr[begin2])
			p[i++] = arr[begin1++];
		else
			p[i++] = arr[begin2++];
	}
	while (begin1<=end1)
		p[i++] = arr[begin1++];
	while (begin2 <= end2)
		p[i++] = arr[begin2++];
	//拷贝回去
	for (int j = left; j <= right; ++j)
	{
		arr[j] = p[j];
	}
}

void MergeSort(int *arr, int sz)
{
	int *p = (int*)malloc(sizeof(int)*sz);
	if (!p)
	{
		printf("malloc failed\n");
		exit(1);
	}

	_MergeSort(arr, 0, sz - 1, p);

	free(p);
}

void _Merge(int *arr,int *p, int begin1, int end1, int begin2,int end2)
{
	int j = begin1;       //记录起始位置
	int i = begin1;
	while (begin1 <= end1&&begin2 <= end2)
	{
		if (arr[begin1] < arr[begin2])
			p[i++] = arr[begin1++];
		else
			p[i++] = arr[begin2++];
	}
	while (begin1 <= end1)
		p[i++] = arr[begin1++];
	while (begin2 <= end2)
		p[i++] = arr[begin2++];
	//拷贝回去
	for ( ; j <= end2; ++j)
	{
		arr[j] = p[j];
	}
}

//非递归实现
void MergeSortNonR(int *arr, int sz)
{

	int *p = (int*)malloc(sizeof(int)*sz);
	if (!p)
	{
		printf("malloc failed\n");
		exit(1);
	}
	int gap = 1;
	while (gap < sz)
	{
		for (int i = 0; i < sz; i += 2*gap)
		{
			int begin1 = i, end1 = i + gap - 1;
			int begin2 = i + gap, end2 = i + 2 * gap - 1;
			if (begin2>=sz)      //第二个区间begin2越界，第一个区间可能越界或
				                //不越界，不进行归并
				break;
			//begin2不越界，end2越界,第二个区间部分越界
			if (end2 >= sz)
				end2 = sz - 1;
			_Merge(arr, p, begin1,end1,begin2,end2);
		}
		gap *= 2;
	}

	free(p);
}

//计数排序
void CountSort(int *arr, int sz)
{
	int max, min;
	max = min = arr[0];
	for (int i = 0; i < sz; ++i)
	{
		if (arr[i]>max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];
	}
	int range = max - min + 1;
	int *count = (int*)malloc(sizeof(int)*range);
	memset(count, 0, sizeof(int)*range);

	for (int i = 0; i < sz; ++i)
	{
		//相对映射
		++count[arr[i] - min];
	}

	int j = 0;
	int i = 0;
	while (j < range)
	{
		while (count[j])
		{
			arr[i++] = j + min;
			--count[j];
		}
		++j;
	}

	free(count);
}