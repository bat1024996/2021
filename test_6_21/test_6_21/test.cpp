#include<iostream>
using namespace std;




//void Quick_sort(int *arr, int l, int r)
//{
//	if (l >= r) return;
//	int x = arr[l + r >> 1];
//	int i = l - 1, j = r + 1;
//	while (i<j)
//	{
//		do ++i; while (arr[i] <= x);
//		do --j; while (arr[j] >= x);
//		if (i<j) swap(arr[i], arr[j]);
//	}
//
//	Quick_sort(arr, l, j - 1);
//	Quick_sort(arr, j , r);
//}
//
//int main()
//{
//	int n=2,k=3;
//	
//	int arr[] = {3, 2 };
//	/*for (int i = 0; i<n; ++i)
//		scanf("%d", &arr[i]);
//    */
//
//	awsf
//
//	Quick_sort(arr, 0, n - 1);
//	//printf("%d\n", arr[k - 1]);
//	return 0;
//}

#include<string>
#include<vector>
// �߾��ȼӷ�
//vector<int> Add(vector<int> &A, vector<int> &B)
//{
//	vector<int> tmp;
//	size_t i = 0, t = 0;
//	for (i = 0; i < A.size() && i < B.size(); ++i)
//	{
//		int c = A[i] + B[i] + t;
//		tmp.push_back(c % 10);
//		t = c / 10;
//	}
//	while (i < A.size())
//	{
//		int c = A[i++] + t;
//		tmp.push_back(c % 10);
//		t = c / 10;
//	}
//	while (i < B.size())
//	{
//		int c = B[i++] + t;
//		tmp.push_back(c % 10);
//		t = c / 10;
//	}
//	if (t)      // ���t��Ϊ0�������λ
//		tmp.push_back(t);
//	return tmp;
//}
//
// �Ƚ������Ĵ�С
//int cmp(vector<int>& A, vector<int>& B)
//{
//	if (A.size() != B.size())  return A.size() > B.size();
//	int i;
//	for (i = A.size() - 1; i >= 0 && A[i] != B[i]; --i);
//	return A[i] >= B[i];
//}
// �߾��ȼ���
//vector<int> Sub(vector<int>& A, vector<int>& B)
//{
//	vector<int> tmp;
//	size_t i = 0,t = 0;
//	for (i = 0; i < B.size(); ++i)   //Ĭ��A����B
//	{
//		int c = A[i] - B[i] - t;
//		tmp.push_back((c + 10) % 10);
//		if (c < 0) t = 1;
//		else t = 0;
//	}
//	while (i < A.size())    // ��Aδ������
//	{
//		int c = A[i++] - t;
//		tmp.push_back((c + 10) % 10);
//		if (c < 0) t = 1;
//		else t = 0;
//	}
//	 ������Ҫ��ȥǰ��0,���ٱ���һ��0(���A,B���)
//	while (tmp.size()>1 && tmp.back() == 0)
//		tmp.pop_back();
//	return tmp;
//}
//int main()
//{
//	string a,b;
//	cin >> a >> b;
//	a = "237692", b = "23462384";
//	a = b;
//	vector<int> A, B;
//	for (int i = a.size() - 1; i >= 0; --i) A.push_back(a[i] - 48);
//	for (int i = b.size() - 1; i >= 0; --i) B.push_back(b[i] - 48);
//
//	 auto c = Add(A, B);
//
//	if (cmp(A, B))        //��ֵ
//	{
//		auto c = Sub(A, B);
//		for (int i = c.size() - 1; i >= 0; --i)
//			cout << c[i];
//	}
//	else
//	{
//		auto c = Sub(B, A);
//		cout << "-";
//		for (int i = c.size() - 1; i >= 0; --i)
//			cout << c[i];
//	}
//	cout << endl;
//	return 0;
//}

//// �߾��ȳ˷�
//vector<int> Sup(vector<int>& A, int& b)
//{
//	// Ĭ��A�Ǵ���
//	vector<int> tmp;
//	size_t t = 0, i = 0;
//	for (i = 0; i < A.size(); ++i)
//	{
//		int c = A[i] * b + t;
//		tmp.push_back(c % 10);
//		t = c / 10;
//	}
//	while (t)            //�����λ
//	{
//		tmp.push_back(t % 10);
//		t /= 10;
//	}
//	return tmp;
//}

#include<algorithm>
vector<int> Div(vector<int>& A, int& b,int &r)
{
	vector<int> tmp;
	int t = 0,i = 0;
	for (i = A.size() - 1; i >= 0; --i)
	{
		int c = A[i] + t * 10;
		tmp.push_back(c/b);
		t = c%b;             //����
	}
	r = t;
	// ��Ӽ������ƣ����Ŵ��
	reverse(tmp.begin(), tmp.end());
	while (tmp.size() > 1 && tmp.back() == 0)
		tmp.pop_back();
	return tmp;
}

int main()
{
	string a = "8029000520";
	int b = 123;
	//cin >> a;
	//cin >> b;
	vector<int> A,B;
	for (int i = a.size() - 1; i >= 0; --i)  A.push_back(a[i] - '0');
	int r;    //����
	auto c = Div(A, b,r);
	for (int i = c.size() - 1; i >= 0; --i)
		cout << c[i];
	cout << " " << r << endl;
	return 0;
}

