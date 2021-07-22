#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//// dfs
//// 排列数字
//
//const int N = 10010;
//int n;
//int path[N];         // 
//bool st[N];         // 当前数是否被用过
//
//void dfs(int u)
//{
//	if (u == n)        // 走到底了
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
//			// 恢复原状
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


//// 试除法--素数
//
//bool is_prime(int n)
//{
//	if (n < 2)  return false; 
//	// 合数的约数都是成对出现的，只枚举前一半即可
//	for (int i = 2; i <= n / i; ++i)      // sqrt()调用很慢，i*i可能存在溢出
//	{
//		if (n % i == 0)
//			return false;
//	}
//	return true;
//}
//
//
//
//// 分解质因数——输出质因数和其出现的次数
//
//void divide(int n)
//{
//	for (int i = 2; i <= n / i; ++i)
//	{
//		if (n%i == 0)   // 满足条件的i一定是质数。 假设为合数(会被前面的质数(2,3,5...)所分解)
//		{
//			int ret = 0;      // 该质因数出现的个数
//			while (n%i == 0)
//			{
//				n /= i;
//				++ret;
//			}
//			printf("%d %d\n", i, ret);
//		}
//	}
//	if (n > 1)   // 最多出现一个大于sqrt()的质因数
//		printf("%d %d\n", n, 1);
//}
//
//
//// 筛选法
//
//
//
//int main()
//{
//	divide(12);
//	return 0;
//}



// 01背包问题
//
// 二维
//const int N = 1010;
//int n, m;
//int v[N], w[N];    // 每个物品的体积和价值
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
//			if (j >= v[i])   // 在装得下的情况下，不选和选i的最大值
//				f[i][j] = max(f[i][j], f[i-1][j-v[i]] + w[i]);
//		}
//	}
//	cout << f[n][m] << endl;
//
//	return 0;
//}
//
// 一维
//int f[N];
//for (int i = 1; i <= n; ++i)
//{
//	for (int j = m; j >= v[i]; --j)
//	{
//		f[j] = max(f[j], f[j - v[i]] + w[i]);
//	}
//	cout << f[m] << endl;
//}

//// 完全背包
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

//// 多重背包
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
//		int a, b, s;          // 体积，价值，数量
//		cin >> a >> b >> s;
//		// 二进制优化
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
//	// 01背包
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