#include<iostream>
using namespace std;

//// a1 a2 a3 a4...   ���±�1��ʼ
////s[i]���±�1��ʼ��s[i]=s[i-1]+a[i]
//
//// ǰ׺��   ���ڼ�������[l,r]��aԪ��֮�� l,rΪ�ڼ�����
////        ��= s[r] - s[l - 1]
//// const int N=100010;
//// int a[n],s[n];
//int a[11], s[11];
//
//int main()
//{
//	int n=10;
//	// cin >> n;       // ����n����
//	// for (int i = 1; i <= n; ++i)    scanf("%d", &a[i]);
//	for (int i = 1; i <= n; ++i)   a[i] = i;
//	for (int i = 1; i <= n; ++i)    s[i] = s[i - 1] + a[i];
//
//	// �����������
//	int l, r;
//	// scanf("%d%d", &l, &r);
//	l = 2, r = 5;
//	cout << s[r] - s[l - 1] << endl;
//
//	return 0;
//} 


//
//// ��ά����ǰ׺��
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


//// �������
//
//const int N = 100010;
//int a[N], b[N];
//
//// һά���
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
//	Insert(l, r, c);     //��b����������������ض��ĵ�
//
//	// ��b������ǰ׺��
//	for (int i = 1; i <= n; ++i)    b[n] += b[n - 1];
//	
//	for (int i = 1; i <= n; ++i)    printf("%d ", b[i]);
//	return 0;
//}

// ��ά�������
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


