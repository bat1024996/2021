#include"sort.h"

//ֱ�Ӳ�������
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
		//����������[0,end]�������tmp
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

//�����򣬽����
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
	//����
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
		//��һ���������������������ߣ�
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



//�Կ��ŵ��Ż�
//����ȡ��
int GetMidKeyi(int *arr, int begin, int end)
{
	//����2
	//�γ�arr[begin]>arr[mid]>arr[end]��˳��,

	//ע��if����˳��,�����Ų���˳��
	int mid = (begin + end) >> 1;
	if (arr[begin] < arr[mid])
		Swap(&begin, &mid);
	if (arr[begin] < arr[end])
		Swap(&begin, &end);
	if (arr[mid] < arr[end])
		Swap(&mid, &end);
	return mid;

	//����1
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



//����ָ�뷨
int PartSort1(int* arr, int begin, int end)
{
	int left = begin;
	int right = end;
	int keyi = left;
	//int keyi = GetMidKeyi(arr, begin, end);
	//����ȡ�У�Ĭ�Ϸŵ������
	//Swap(&arr[left], &arr[keyi]);

	while (left < right)
	{
		//right����
		//�Ҵ�
		while ((left<right) && (arr[right] >= arr[keyi]))
		{
			--right;
		}
		//��С
		while ((left<right) && (arr[left] <= arr[keyi]))
		{
			++left;
		}
		Swap(&arr[right], &arr[left]);
	}
	//left��right����
	Swap(&arr[keyi], &arr[left]);
	return left;
}


//�ڿӷ�
int PartSort2(int *arr, int begin, int end)
{
	int left = begin;
	int right = end;

	int keyi = GetMidKeyi(arr, begin, end);
	Swap(&arr[keyi], &arr[left]);
	keyi = left;

	while (left < right)
	{
		//��С
		while ((left < right) && (arr[keyi] <= arr[right]))
		{
			--right;
		}
		
		//Swap(&arr[keyi], &arr[right]);
		//keyi = right;
		//�ŵ���ߵĿ���,�ұ��γ��µĿ�
		arr[left] = arr[right];

		//left�Ҵ�
		while ((left < right) && (arr[keyi] >= arr[left]))
		{
			++left;
		}
		//Swap(&arr[keyi], &arr[left]);
		//keyi = left;
		//�ŵ��ұߵĿ��У�����γ��µĿ�
		arr[right] = arr[left];

	}
	arr[left] = arr[keyi];
	//left��right����
	return left;
}

//ǰ��ָ�뷨
int PartSort3(int *arr, int begin, int end)
{
	int keyi = GetMidKeyi(arr, begin, end);
	Swap(&arr[keyi], &arr[begin]);
	keyi = begin;
	int cur = begin + 1;
	int prev = begin;
	while (cur <= end)
	{
		//��С����С���Ƶ�ǰ��
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
	//��ֹ����
	if (end<=begin)         //��ͼ
		return;
	
	//С�����Ż������ٵݹ�Ĵ���
	if (end - begin > 100)
	{
		int meeti = PartSort3(arr, begin, end);

		//�ݹ�
		QuickSort(arr, begin, meeti - 1);
		QuickSort(arr, meeti + 1, end);

	}

	//�����������С�����÷��εݹ��Ѳ�̫����
	else
	{
		InsertSort(arr + begin, end - begin + 1);
	}

}

//���ŵķǵݹ�ʵ��
//��ջ�洢begin��end



//�鲢����
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
	//������ȥ
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
	int j = begin1;       //��¼��ʼλ��
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
	//������ȥ
	for ( ; j <= end2; ++j)
	{
		arr[j] = p[j];
	}
}

//�ǵݹ�ʵ��
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
			if (begin2>=sz)      //�ڶ�������begin2Խ�磬��һ���������Խ���
				                //��Խ�磬�����й鲢
				break;
			//begin2��Խ�磬end2Խ��,�ڶ������䲿��Խ��
			if (end2 >= sz)
				end2 = sz - 1;
			_Merge(arr, p, begin1,end1,begin2,end2);
		}
		gap *= 2;
	}

	free(p);
}

//��������
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
		//���ӳ��
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