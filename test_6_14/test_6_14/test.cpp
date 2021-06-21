#include<iostream>
using namespace std;

//void Qsort(int* arr, int left, int right)
//{
//	if (right<=left)
//		return;
//	int  p = left,e = right;
//	while (left < right)
//	{
//		while (arr[right] >= arr[p] && --right>p );
//		while (arr[left] <= arr[p] && ++left<e);
//		if (left < right)
//			swap(arr[left], arr[right]);
//	}
//	swap(arr[right], arr[p]);
//	Qsort(arr, p, right-1);
//	Qsort(arr, right + 1, e);
//}

//int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//int *a = (int*)malloc(sizeof(arr));
//
//void Merge_sort(int *arr, int left, int right)
//{
//	int mid = left + (right - left) / 2;
//	if (left >= right)
//		return;
//	Merge_sort(arr, left, mid);
//	Merge_sort(arr, mid + 1, right);
//	
//
//}
//
//int main()
//{
//	//Qsort(arr,0,sizeof(arr) / sizeof(arr[0])-1);
//
//	Merge_sort(arr, 0, sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}

//int guess(int n)
//{
//	int key = 2;
//	if (n == key)
//		return 0;
//	else
//		return n > key ? 1 : -1;
//}
//
//class Solution {
//public:
//	int guessNumber(int n) {
//		int left = 1, right = n;
//		int mid = n >> 1;
//		while (guess(mid))
//		{
//			// 太大了
//			if (guess(mid) == 1)
//			{
//				right = mid - 1;
//				mid = (left + right) / 2;
//			}
//			// 小了
//			else
//			{
//				left = mid + 1;
//				mid = (left + right) / 2;
//			}
//		}
//		return mid;
//	}
//};
//
//
//int main()
//{
//	Solution s;
//	cout << s.guessNumber(10) << endl;
//	return 0;
//}


//void Quick_sort(int *arr, int l, int r)
//{
//	if (l >= r)
//		return;
//	int pl = l, pr = r, key = arr[pl];
//	while (l < r)
//	{
//		while (arr[r] >= key && --r > pl);
//		while (arr[l] <= key && ++l < pr);
//		if (l<r)
//			swap(arr[l], arr[r]);
//	}
//	swap(arr[r], arr[pl]);
//
//	Quick_sort(arr, 0, r - 1);
//	Quick_sort(arr, r + 1, l);
//
//}
//const int N = 100010;
//int q[N];
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i<n; ++i) scanf("%d", &q[i]);
//	Quick_sort(q, 0, n - 1);
//
//	for (int i = 0; i<n; ++i) cout << q[i] << " ";
//	cout << endl;
//
//	return 0;
//}
//

//#include<time.h>
//
//int main()
//{
//	int i = 4, j = 9;
//	srand((unsigned)time(NULL));
//
//	int k = 10;
//	while (k--)
//		cout << rand() % (j - i + 1) + i<<" ";
//	cout << endl;
//
//	return 0;
//}

//int main()
//{
//	printf("%d", 1234^5678);
//
//	return 0;
//}

//
//void Quick_sort(int *arr, int l, int r)
//{
//	if (l >= r)
//		return;
//
//	int pl = l, pr = r;
//	int x = arr[pl];
//	while (l<r)
//	{
//		while (arr[l] <= x&&++l<pr);
//		while (arr[r] >= x&&--r>pl);
//		if (l<r)
//			swap(arr[l], arr[r]);
//	}
//	swap(arr[pl], arr[r]);
//
//
//
//	Quick_sort(arr, pl, l - 1);
//
//
//	Quick_sort(arr, l + 1, pr);
//
//}
//
//
//int main()
//{
//	int n=10;
//	int arr[] = { 49, 59, 88, 37, 98, 97, 68, 54, 31, 3 };
//
//	//for (int i = 0; i<n; ++i)
//	//{
//	//	scanf("%d", &arr[i]);
//	//}
//
//	Quick_sort(arr, 0, n - 1);
//
//	for (int i = 0; i<n; ++i) cout << arr[i] << " ";
//	cout << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//#include<string>
//#include<algorithm>
//
//
//#include<sstream>
//int main()
//{
//	int n=120;
//	// cin >> n;
//	
//	string s1, s2;
//	for (int i = 65; i <= n; ++i)
//	{
//	
//		stringstream ss;
//		ss << i;
//		ss >> s1;
//		
//		s2 = s1;
//		reverse(s2.begin(), s2.end());
//		if (s1.compare(s2) == 0)
//			cout << i << endl;
//	}
//	return 0;
//}

//
//int main()
//{
//	int *p = (int*)malloc(sizeof(int)* 16);
//	cout << sizeof(p) << endl;
//
//	free(p);
//	return 0;
//}

//int main()
//{
//	int *ptr = new int[10];
//
//	//for (int i = 0; i < 10; ++i)
//		//ptr[i] = i;
//
//	
//	delete[] ptr;
//
//
//	int *str = (int*)calloc(4, sizeof(int));
//
//	return 0;
//}

//
//struct ListNode
//{
//	// struct ListNode* _next;  //C
//	// 在c++里面当做类使用
//	ListNode* _next;
//	ListNode* _prev;
//	int _val;
//
//	ListNode()
//		:_next(nullptr)
//		, _prev(nullptr)
//		, _val(0)
//	{
//	}
//};
//
//
//class Test
//{
//public:
//	Test()
//		: _data(0)
//	{
//		cout << "Test():" << this << endl;
//	}
//	~Test()
//	{
//		cout << "~Test():" << this << endl;
//	}
//private:
//	int _data;
//};
//
//int main()
//{
//	//// 申请单个Test类型的空间
//	//Test* p1 = (Test*)malloc(sizeof(Test));
//	//free(p1);
//	//// 申请10个Test类型的空间
//	//Test* p2 = (Test*)malloc(sizeof(Test) * 10);
//	//free(p2);
//
//	Test* p1 = new Test[4];
//
//	delete p1;
//	return 0;
//}
//

//
//int main()
//{
//	//struct ListNode* n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
//
//	//ListNode *node = new ListNode;
//
//	//delete node;
//
//	/*int *arr = new int[4]{1, 2, 3};
//
//	for (int i = 0; i < 4; ++i)
//		cout << arr[i] << " ";
//	cout << endl;
//	delete[] arr;*/
//
//	//int *p = new int(0);
//	//cout << p << endl;
//	//cout << *p << endl;
//	//delete p;
//
//	//int *ptr = (int*)malloc(sizeof(int)*1024*1024*1024*4);
//	
//	//free(ptr);
//
//	//int *p = (int*)malloc(sizeof(int)* 0xffffffff);
//
//	//free(p);
//
//	return 0;
//}
//
//#include<string>
//
//class Solution {
//public:
//	int StrToInt(string str) {
//		int n = 0;
//		if(*str)
//		string::iterator it = str.begin();
//		while (it != str.end())
//		{
//			if ((*it != '+'&&*it != '-') && (!isdigit(*it)))
//				break;
//			else if (isdigit(*it))
//			{
//				n = n * 10 + (*it - 48);
//			}
//			++it;
//
//		}
//		if (str[0] == '-')
//			return -n;
//		return n;
//	}
//};
//
//
//int main()
//{
//	Solution s;
//	cout<<s.StrToInt("1a33");
//
//	return 0;
//}

//#include<math.h>
//
//int main()
//{
//	int n=3;
//	//while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 0; i<n; ++i)
//		{
//			for (int j = 0; j<2*n+1; ++j)
//			{
//				if (i + j >= n - 1 && j - i <= 2)
//					cout << "*";
//				else
//					cout << " ";
//			}
//			cout << endl;
//		}
//	}
//	return 0;
//}

//
//int main()
//{
//	//int *arr = (int*)operator new(sizeof(int)*4);
//	//// 相当于调用malloc
//
//	//operator delete(arr);
//	//// 相当于调用free
//	char *p = new char[4];
//
//	delete[] p;
//
//	/*try
//	{
//		int *arr = (int*)operator new(0xefffffff);
//	}
//	catch (exception& e)
//	{
//		cout << e.what() << endl;
//	}*/
//	
//	
//
//	return 0;
//}


//
//// 归并排序
//
//void Merge_sort(int *arr,int *p, int l1, int r1,int l2,int r2)
//{
//	if (l1 >= r2)
//		return;
//	Merge_sort(arr, p, l1, (l1 + r1) / 2, (l1 + r1) / 2 + 1, r1);
//	Merge_sort(arr, p, l2, (l2 + r2) / 2, (l2 + r2) / 2 + 1, r2);
//
//	int i = l1, j = l2,k = l1;
//
//	while (i <= r1 && j <= r2)       
//	{
//		if (arr[i] <= arr[j])
//		{
//			p[k++] = arr[i];
//			++i;
//		}
//		else
//		{
//			p[k++] = arr[j];
//			++j;
//		}
//	}
//	if (i > r1)
//	{
//		while (j <= r2)
//		{
//			p[k++] = arr[j++];
//		}
//	}
//	else
//	{
//		while (i <= r1)
//		{
//			p[k++] = arr[i++];
//		}
//	}
//
//	for (int i = l1; i <= r2; ++i)
//		arr[i] = p[i];
//}

//int tmp[10];
//
//void Merge_sort(int *arr, int l, int r)
//{
//	if (l >= r)
//		return;
//	int mid = l + r >> 1;
//	Merge_sort(arr, l, mid);
//	Merge_sort(arr, mid + 1, r);
//
//	int i = l, j = mid + 1, k = 0;
//	while (i <= mid && j <= r)
//	{
//		if (arr[i] <= arr[j]) tmp[k++] = arr[i++];
//		else tmp[k++] = arr[j++];
//	}
//	while (i <= mid)
//		tmp[k++] = arr[i++];
//	while (j <= r)
//		tmp[k++] = arr[j++];
//		
//	for (int i = 0; i < k ;++i)
//		arr[l++] = tmp[i];
//


//}
//int tmp[10];
//
//void Merge_sort(int *arr, int l, int r)
//{
//	if (l >= r)
//		return;
//	int mid = (l + r) >> 1;
//	Merge_sort(arr, l, mid);
//	Merge_sort(arr, mid + 1, r);
//
//	int i = l, j = mid + 1, k = 0;
//	while (i <= mid && j <= r)
//	{
//		if (arr[i] <= arr[j]) tmp[k++] = arr[i++];
//		else tmp[k++] = arr[j++];
//	}
//	while (i <= mid) tmp[k++] = arr[i++];
//	while (j <= r)  tmp[k++] = arr[j++];
//
//	for (i = 0; i<k; ++i)
//		arr[l++] = tmp[i];
//
//}
//int main()
//{
//	int arr[] = {1,5,2,6,3};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	// int *p = new int[sz];
//	// memset(p, 0, sz*sizeof(int));
//	// Merge_sort(arr, p, 0, (sz - 1) / 2, (sz - 1) / 2 + 1, sz - 1);
//
//	Merge_sort(arr, 0, sz - 1);
//	// delete[] p;
//	return 0;
//}
//

//
//#include<string>
//int main()
//{
//	/*string s1;
//	string s2("hello");
//	string s3(s2);
//	string s4(s2, 0, 3);
//	string s5 = "Fine";
//	string s6 = s2 + s5;
//
//	string s(s5, 1, 2);
//	cout << s << endl;*/
//
//
//
//	return 0;
//}


//class A
//{
//public:
//	A(int a = 0)
//	{
//		_a = a;
//		cout << "A()" << endl;
//	}
//	~A()
//	{
//		cout << "~A()" << endl;
//	}
//private:
//	int _a;
//};
//
//
//int main()
//{
//	
//	//A *p = (A*)malloc(sizeof(A));
//
//	//new(p)A(2);   // 定位new，相当于显示调用构造函数
//
//	//free(p);
//
//	int *p = (int*)malloc(1024 * 1024 * 1024);
//	int *p2 = (int*)malloc(1024 * 1024 * 100);
//	int *p3 = (int*)malloc(1024 * 1024 * 10);
//
//	//free(p);
//	//free(p2);
//	//free(p3);
//
//	// 进程正常结束的程序，发生内存泄漏问题不大，系统会回收。
//
//	// 在长期运行的程序中，内存泄漏会发生问题。
//
//	return 0;
//}

// 模板
// template<class T>
template<typename T>
void Swap(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}
// 函数模板
template<class T>
T Add(const T& a, const T& b)
{
	return a + b;
}
//int main()
//{
//	/*int a = 1, b = 2;
//	Swap(a, b);
//	
//
//	double c = 1.1, d = 2.2;
//	Swap(c, d);
//
//	char s1 = 'a', s2 = 'b';
//	Swap(s1, s2);*/
//	//
//	/*cout << Add(1.1,2.2) << endl;
//	double a = 1.1, b = 2.2;
//	cout << Add(a, b) << endl;
//	cout << Add(1, 2) << endl;
//*/
//	
//	// 显示推演
//	cout << Add<int>(1, 2) << endl;
//	cout << Add<char>(1, 'a') << endl;
//	cout << Add<int>(1, 'a') << endl;
//
//	cout << Add<double>(1, 2.2) << endl;
//	cout << Add<int>(1, 2.2) << endl;
//
//	return 0;
//}

#include<assert.h>
// 类模板
namespace mycode
{
	template<class T>
	class vector
	{
	public:
		vector()
			:_arr(nullptr)
			, _size(0)
			, _capacity(0)
		{
		}
		void Push_back(const T& k)
		{
			if (_size == _capacity)
			{
				int newcapacity = _capacity == 0 ? 4 : _capacity * 2;
				T* tmp = new T[newcapacity];
				if (tmp)
				{
					memcpy(tmp, _arr, sizeof(T)*_size);
					delete[] _arr;
					_arr = tmp;
					_capacity = newcapacity;
				}
			}
			_arr[_size++] = k;
		}

		
		T& operator[](size_t pos)
		{
			assert(pos < _size);
			return _arr[pos];
		}
		int size()
		{
			return _size;
		}

		~vector()
		{
			delete[] _arr;
			_size = _capacity = 0;
			_arr = nullptr;
		}
	private:
		T* _arr;
		int _size;
		int _capacity;
	};
}


//template<class T1, class T2>

//template<typename T1, T2>

//template<typename T1, typename T2>

//template<class T1,T2>
//T1 Add(const T1& a, const T2& b)
//{
//	return a + b;
//}


int main()
{
	cout << Add(1, 2) << endl;
	return 0;
}
//
//int main()
//{
//	// 类模板
//	mycode::vector<int> v1;
//	mycode::vector<double> v2;
//
//	v1.Push_back(1);
//	v1.Push_back(2);
//	v1.Push_back(3);
//	v1.Push_back(4);
//	v1.Push_back(5);
//
//	//cout << v1[4] << endl;
//	//cout << v1[5] << endl;
//	for (int i = 0; i < v1.size(); ++i)
//		v1[i] *= 2;
//	for (int i = 0; i < v1.size(); ++i)
//		cout << v1[i] << " ";
//	cout << endl;
//
//	v2.Push_back(1.1);
//	v2.Push_back(2.1);
//	v2.Push_back(3.1);
//	v2.Push_back(4.1);
//	v2.Push_back(5.1);
//
//	/*for (int i = 0; i < v2.size(); ++i)
//		v2[i] *= 2;*/
//	for (int i = 0; i < v2.size(); ++i)
//		cout << v2[i] << " ";
//	cout << endl;
//	return 0;
//}