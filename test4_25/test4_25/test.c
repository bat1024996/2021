//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int a, b;
//	cin>> a >> b;
//	cout << a + b << endl;
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
// 1 1 2 3 5 8 13 21 34 55 89
//#include<stdio.h>
//#define PI 3.14
//int main()
//{
//	float r, h;
//	scanf("%f%f", &r, &h);
//	printf("C1=%.2f\n",2*PI*r );
//	printf("Sa=%.2f\n",PI*r*r );
//	printf("Sb=%.2f\n",4*PI*r*r );
//	printf("Va=%.2f\n",4.0/3*PI*r*r*r );
//	printf("Vb=%.2f\n",PI*r*r*h );
//	return 0;
//}
//int main()
//{
//	printf("**************************\n");
//	printf("         Very    Good!    \n");
//	printf("**************************\n");
//	return 0;
//}
//int main()
//{
//	char t[32];
//	int ret = 0;
//	scanf("%s", t);
//	for (int i = 0; i < 32; ++i)
//	{
//		if (t[i] == '\0')
//			break;
//		ret = ret * 2 + t[i]-'0';
//	}
//	printf("%d", ret);
//	return 0;
//}
//int main()
//{
//	for (int i = 1; i <= 6; ++i)
//	{
//		for (int j = 0; j < i; ++j)
//		{
//			printf("#");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int n;
//	int a, b, c;
//	a = b = 1;
//	c = 2;
//	scanf("%d", &n);
//	for (int i = 0; i < n-1; ++i)
//	{
//		a = b;
//		b = c;
//		c = a + b;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int arr[10];
//	int n;
//	for (int i = 0; i < 10; ++i)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &n);
//	for (int i = 0; i < 10; ++i)
//	{
//		if (arr[i] == n)
//		{
//			printf("%d\n", i);
//			return 0;
//		}
//	}
//	printf("Not exist!\n");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int x, n;
//	int sum = 0;
//	int a;
//	scanf("%d", &a);
//	for (int i = 0; i < a; ++i)
//	{
//		while (scanf("%d", &n) != EOF)
//		{
//			if (n){
//				sum = 0;
//				for (int i = 0; i < n; ++i)
//				{
//					scanf("%d", &x);
//					sum += x;
//				}
//				printf("%d\n\n", sum);
//			}
//		}
//	}
//}

//#include<stdio.h>

//int main()
//{
//	int n,x;
//	int sum;
//	while (scanf("%d", &n) != EOF)
//	{
//		if (n)
//		{
//		sum = 0;
//		for (int i = 0; i < n; ++i)
//		{
//			scanf("%d", &x);
//			sum += x;
//		}
//		printf("%d\n", sum);
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a, b;
//	while (scanf("%d%d", &a, &b) != EOF)
//	{
//		printf("%d\n\n", a + b);
//		
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int i, a, b;
//	i = 0;
//	while (scanf("%d%d", &a, &b) != EOF)
//	{
//		++i;
//		printf("Case %d : %d\n", i, a + b);
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int a, b;
//	float x, y;
//	char c1, c2;
//	cin >> a >> b;
//	cin >> x >> y;
//	cin >> c1 >> c2;
//	cout << "a=" << a << "," << "b=" << b << "," << "x=" << x << ","
//		<< "y=" << y << "," << "c1=" << c1 << "," << "c2=" << c2 << endl;
//	return 0;
//}

//#include<cstdlib>
//int main()
//{
//	int n;
//	int a, b;
//	while (cin >> n)
//	{
//		if (n)
//		{
//			for (int i = 0; i < n; ++i)
//			{
//				scanf("%d%d", &a, &b);
//				printf("%d ", a + b);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n;
//
//	return 0;
//}
//int main()
//{
//	int a, b, c;
//	int tmp;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a > c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b > c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d\n", c);
//}
//int main()
//{
//	int a, b;
//	int i;
//	while (scanf("%d%d", &a, &b) != EOF)
//	{
//		int x = a > b ? a : b;
//		for ( i = x; i < a*b; ++i)
//		{
//			if (i%a == 0 && i%b == 0)
//			{
//				break;
//			}
//		}
//		printf("%d\n", i);
//	}
//	return 0;
//}
//int main()
//{
//	int year;
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0)
//	{
//		printf("yes\n");
//	}
//	else if (year % 400 == 0)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a, b;
//	float x, y;
//	char c1, c2;
//	scanf("a=%d b=%d", &a, &b);
//	//getchar();
//	scanf("%f %e", &x, &y);
//	//getchar();
//	scanf("%c %c", &c1, &c2);
//	printf("a=%d,b=%d,x=%f,y=%f,c1=%c,c2=%c\n", a, b, x, y, c1, c2);
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//int main()
//{
//	float f;
//
//	return 0;
//}
//#include<string>
//#include<algorithm>
//int main()
//{
//	string s;
//	cin>> s;
//	reverse(s.begin(), s.end());
//
//	cout << s << endl;
//	return 0;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	if ((n % 3 == 0) && (n % 5 == 0))
//		cout << "YES" << endl;
//	else
//		cout << "NO" << endl;
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	a = b = 1;
//	c = a + b;
//	for (int i = 0; i < 40; ++i)
//	{
//		if (i % 8 == 0)
//			printf("\n");
//		printf("%d ", a);
//		a = b;
//		b = c;
//		c = a + b;
//	}
//	return 0;
//}
//int main()
//{
//	int a, b, c;
//	a = b = c = 0;
//	int i;
//	while (scanf("%d", &i) != EOF)
//	{
//		if (i > 0)
//			++a;
//		else if (i < 0)
//			++b;
//		else
//			++c;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
//int main()
//{
//	int arr[10];
//	for (int i = 0; i < 10; ++i)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < 10; ++i)
//	{
//		for (int j = 0; j < 10-1; ++j)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (int i = 0; i < 10; ++i)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int n,x;
//	int max, min;
//	scanf("%d", &n);
//	for (int i = 0; i < n; ++i)
//	{
//		scanf("%d", &x);
//		if (!i)
//			max = min = x;
//		if (x>max)
//			max = x;
//		if (x < min)
//			min = x;
//	}
//	printf("%d %d\n", max, min);
//	return 0;
//}
//int main()
//{
//	int a;
//	char b;
//	float c;
//	scanf("%d", &a);
//	getchar();
//	scanf("%c", &b);
//	getchar();
//	scanf("%f", &c);
//	printf("%d\n%c\n%.6f\n", a, b, c);
//
//	return 0;
//}

//int main()
//{
//	int x;
//	int y;
//	scanf("%d", &x);
//	if (x < 1)
//		y = x;
//	else if (x >= 1 && x < 10)
//		y = 2 * x - 1;
//	else if (x >= 10)
//		y = 3 * x - 11;
//	printf("%d\n", y);
//	return 0;
//}