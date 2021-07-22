#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//// dfs
//// ��������
//
//const int N = 10010;
//int n;
//int path[N];         // 
//bool st[N];         // ��ǰ���Ƿ��ù�
//
//void dfs(int u)
//{
//	if (u == n)        // �ߵ�����
//	{
//		for (int i = 0; i < n; ++i)
//			printf("%d ", path[i]);
//		puts("");
//		return;
//	}
//	for (int i = 1; i <= n; ++i)
//	{
//		if (!st[i])
//		{
//			path[u] = i;
//			st[i] = true;
//			dfs(u + 1);
//
//			// �ָ�ԭ״
//			path[u] = 0;
//			st[i] = false;        
//		}
//	}
//
//}
//
//int main()
//{
//	scanf("%d", &n);
//
//	dfs(0);
//
//	return 0;
//}


//// �Գ���--����
//
//bool is_prime(int n)
//{
//	if (n < 2)  return false; 
//	// ������Լ�����ǳɶԳ��ֵģ�ֻö��ǰһ�뼴��
//	for (int i = 2; i <= n / i; ++i)      // sqrt()���ú�����i*i���ܴ������
//	{
//		if (n % i == 0)
//			return false;
//	}
//	return true;
//}
//
//
//
//// �ֽ��������������������������ֵĴ���
//
//void divide(int n)
//{
//	for (int i = 2; i <= n / i; ++i)
//	{
//		if (n%i == 0)   // ����������iһ���������� ����Ϊ����(�ᱻǰ�������(2,3,5...)���ֽ�)
//		{
//			int ret = 0;      // �����������ֵĸ���
//			while (n%i == 0)
//			{
//				n /= i;
//				++ret;
//			}
//			printf("%d %d\n", i, ret);
//		}
//	}
//	if (n > 1)   // ������һ������sqrt()��������
//		printf("%d %d\n", n, 1);
//}
//
//
//// ɸѡ��
//
//
//
//int main()
//{
//	divide(12);
//	return 0;
//}



// 01��������
//
// ��ά
//const int N = 1010;
//int n, m;
//int v[N], w[N];    // ÿ����Ʒ������ͼ�ֵ
//int f[N][N];
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; ++i)  cin >> v[i] >> w[i];
//
//	for (int i = 1; i <= n; ++i)
//	{
//		for (int j = 1; i <= m; ++j)
//		{
//			f[i][j] = f[i - 1][j];
//
//			if (j >= v[i])   // ��װ���µ�����£���ѡ��ѡi�����ֵ
//				f[i][j] = max(f[i][j], f[i-1][j-v[i]] + w[i]);
//		}
//	}
//	cout << f[n][m] << endl;
//
//	return 0;
//}
//
// һά
//int f[N];
//for (int i = 1; i <= n; ++i)
//{
//	for (int j = m; j >= v[i]; --j)
//	{
//		f[j] = max(f[j], f[j - v[i]] + w[i]);
//	}
//	cout << f[m] << endl;
//}

//// ��ȫ����
//const int N = 1010;
//int v[N], w[N];
//int n, m;
//int f[N];
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; ++i) cin >> v[i] >> w[i];
//
//	for (int i = 1; i <= n; ++i)
//	{
//		for (int j = v[i]; j <= m; ++j)
//		{
//			 f[j] = max(f[j], f[j - v[i]] + w[i]);
//		}
//	}
//	cout << f[m] << endl;
//	return 0;
//}

//// ���ر���
//const int N = 1010;
//int n, m;
//int v[N], w[N], s[N];
//int f[N][N];
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; ++i)  cin >> v[i] >> w[i] >> s[i];
//
//	for (int i = 1; i <= n; ++i)
//	{
//		for (int j = 0; j <= m; ++j)
//		{
//			for (int k = 0; k <= s[i]&&k*v[i]<=j; ++k)
//			{
//					f[i][j] = max(f[i][j], f[i - 1][j - k * v[i]] + k* w[i]);
//			}
//		}
//	}
//	cout << f[n][m] << endl;
//	return 0;
//}
//
//


//const int N = 1010;
//int v[N], w[N];
//int n, m;
//int f[N];
//
//int main()
//{
//	cin >> n >> m;
//
//	int cnt = 0;
//	for (int i = 1; i <= n; ++i)
//	{
//		int a, b, s;          // �������ֵ������
//		cin >> a >> b >> s;
//		// �������Ż�
//		int k = 1;
//		while (k <= s)
//		{
//			++cnt;
//			v[cnt] = a*k;
//			w[cnt] = b*k;
//			s -= k;
//			k *= 2;
//		}
//		if (s > 0)
//		{
//			++cnt;
//			v[cnt] = a*s;
//			w[cnt] = b*s;
//		}
//	}
//	n = cnt;
//	
//	// 01����
//	for (int i = 1; i <= n; ++i)
//	{
//		for (int j = m; j >= v[i]; --j)
//		{
//			f[j] = max(f[j], f[j - v[i]] + w[i]);
//		}
//	}
//	cout << f[m] << endl;
//	return 0;
//}



//const int N = 110;
//int n, m;
//int v[N][N], w[N][N], s[N];
//int f[N];
//
//int main()
//{
//	cin >> n >> m;
//
//	for (int i = 1; i <= n; ++i)
//	{
//		cin >> s[i];
//		for (int j = 0; j < s[i]; ++j)
//			cin >> v[i][j] >> w[i][j];
//	}
//	for (int i = 1; i <= n; ++i)
//		for (int j = m; j >= 0; --j)
//			for (int k = 0; k < s[i];++k)
//			if (v[i][k] <= j)
//				f[j] = max(f[j], f[j - v[i][k]] + w[i][k]);
//
//	cout << f[m] << endl;
//			
//	return 0;
//}




//class MinStack {
//public:
//	/** initialize your data structure here. */
//	MinStack()
//		:_a(new int[100010])
//		, _b(new int[100010])
//		, _tt(0)
//	{
//	}
//	~MinStack()
//	{
//		delete[] _a;
//		delete[] _b;
//		_a = _b = nullptr;
//	}
//	void push(int val) {
//		_a[_tt] = val;
//		_b[_tt++] = val;
//		sort(_b, _b + _tt);
//		cout << _b[0] << endl;
//	}
//
//	void pop() {
//		--_tt;
//		memcpy(_b, _a, sizeof(int)*_tt);
//		sort(_b, _b + _tt);
//	}
//
//	int top() {
//		return _a[_tt - 1];
//	}
//
//	int getMin() {
//		return _b[0];
//	}
//private:
//	int *_a;
//	int *_b;
//	int _tt;
//};
//
//int main()
//{
//	MinStack st;
//	st.push(0);
//	st.push(-2);
//	st.push(-3);
//
//	return 0;
//}

/**
* Your MinStack object will be instantiated and called as such:
* MinStack* obj = new MinStack();
* obj->push(val);
* obj->pop();
* int param_3 = obj->top();
* int param_4 = obj->getMin();
*/

//#include<stack>
//#include<string>
//
//class Solution {
//public:
//	bool isValid(string s) {
//		stack<char> st;
//		for (int i = 0; s[i]; ++i)
//		{
//			if (s[i] == '(' || s[i] == '{' || s[i] == '[')
//				st.push(s[i]);
//			if (st.empty())  return false;
//
//			if (st.top() == s[i] - 1 || st.top() == s[i] - 2)
//				st.pop();
//		}
//		return st.empty();
//	}
//};
//
//int main()
//{
//	string s = "(])";
//	Solution so;
//	so.isValid(s);
//
//	return 0;
//}


#include<string>

int main()
{
	string s = "hello world";
	s.size() = 3;

	return 0;
}