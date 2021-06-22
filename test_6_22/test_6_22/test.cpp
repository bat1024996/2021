#include<iostream>
using namespace std;

//// a1 a2 a3 a4...   从下标1开始
////s[i]从下标1开始，s[i]=s[i-1]+a[i]
//
//// 前缀和   用于计算区间[l,r]中a元素之和 l,r为第几个数
////        和= s[r] - s[l - 1]
//// const int N=100010;
//// int a[n],s[n];
//int a[11], s[11];
//
//int main()
//{
//	int n=10;
//	// cin >> n;       // 输入n个数
//	// for (int i = 1; i <= n; ++i)    scanf("%d", &a[i]);
//	for (int i = 1; i <= n; ++i)   a[i] = i;
//	for (int i = 1; i <= n; ++i)    s[i] = s[i - 1] + a[i];
//
//	// 输入计算区间
//	int l, r;
//	// scanf("%d%d", &l, &r);
//	l = 2, r = 5;
//	cout << s[r] - s[l - 1] << endl;
//
//	return 0;
//} 


//
//// 二维数组前缀和
//// const int N = 100010, M = 100010;
//// int a[N][M];
//int a[11][11];
//int s[11][11];
//
//int main()
//{
//	int n, m;
//	// cin >> n >> m;
//	n = 10, m = 10;
//	//for (int i = 1; i <= n; ++i)
//	//{
//	//	for (int j = 1; i <= m; ++j)
//	//		scanf("%d", &a[i][j]);
//	//}
//	int k = 1;
//	for (int i = 1; i <= n; ++i)
//	{
//		for (int j = 1; j <= m; ++j)
//			a[i][j] = k++;
//	}
//
//	for (int i = 1; i <= n; ++i)
//	{
//		for (int j = 1; j <= m; ++j)
//			s[i][j] = s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1] + a[i][j];
//	}
//	int x1, y1, x2, y2;
//	// scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
//	x1 = 1, y1 = 2, x2 = 3, y2 = 4;
//
//	int sum = s[x2][y2] - s[x2][y1 - 1] - s[x1 - 1][y2] + s[x1 - 1][y1 - 1];
//	printf("%d\n", sum);
//
//	return 0;
//}


//// 差分数组
//
//const int N = 100010;
//int a[N], b[N];
//
//// 一维差分
//void Insert(int l, int r, int c)
//{
//	b[l] += c;
//	b[r + 1] -= c;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; ++i)    scanf("%d", &a[i]);
//
//	for (int i = 1; i <= n; ++i)    Insert(i, i, a[i]);
//
//	int l, r, c;
//	scanf("%d%d%d", &l, &r, &c);
//	Insert(l, r, c);     //在b数组上面改了两个特定的点
//
//	// 将b数组变成前缀和
//	for (int i = 1; i <= n; ++i)    b[n] += b[n - 1];
//	
//	for (int i = 1; i <= n; ++i)    printf("%d ", b[i]);
//	return 0;
//}

// 二维差分数组
const int N = 1010;
int a[N][N], b[N][N];

void Insert(int x1, int y1, int x2, int y2, int c)
{
	b[x1][y1] += c;
	b[x1][y2+1] -= c;
	b[x2+1][y1] -= c;
	b[x2+1][y2+1] += c;
}

int main()
{
	int m, n;
	cin >> m >> n;
	for (int i = 1; i <= m; ++i)
	{
		for (int j = 1; j <= n; ++j)
			scanf("%d", &a[i][j]);
	}
	for (int i = 1; i <= m; ++i)
	{
		for (int j = 1; j <= n; ++j)
			Insert(i, j, i, j, a[i][j]);
	}
	int x1, y1, x2, y2, c;
	scanf("%d%d%d%d%d", &x1, &y1, &x2, &y2, &c);
	Insert(x1, y1, x2, y2, c);

	for (int i = 1; i <= m; ++i)
	{
		for (int j = 1; j <= n; ++j)
			b[i][j] = b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1] + b[i][j];
	}
	
	return 0;
}


