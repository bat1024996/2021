#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	int tmp;
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
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//
//int main()
//{
//	float m, n;
//	float high, sum ;
//	scanf("%f%f", &m, &n);
//	high=sum = m;
//	for (int i = 0; i < n; ++i)
//	{
//		sum += high;
//		high /= 2;
//	}
//	printf("%.2f %.2f\n", high, sum-high);
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	int a, b, c;
//	int i;
//	scanf("%d", &i);
//	{
//		a = i / 100;
//		b = i / 10 % 10;
//		c = i % 10;
//		if (i == (pow(a, 3) + pow(b, 3) + pow(c, 3)))
//			printf("YES\n");
//		else
//			printf("NO\n");
//	}
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//int main()
//{
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int sum = 0;
//	for (int i = 1; i <= n; ++i)
//	{
//		
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int arr[10];
//	for (int i = 0; i < 10; ++i)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 9; i != -1; --i)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//int main()
//{
//	int x;
//	scanf("%d", &x);
//	int y;
//	if (x < 1)
//		y = x;
//	else if (x >= 1 && x < 10)
//		y = 2 * x - 1;
//	else
//		y = 3 * x - 11;
//	printf("%d\n", y);
//	return 0;
//}


//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if (n >= 90)
//		printf("A\n");
//	else if (n >= 80 && n <= 89)
//		printf("B\n");
//	else if (n >= 70 && n <= 79)
//		printf("C\n");
//	else if (n >= 60 && n <= 69)
//		printf("D\n");
//	else
//		printf("E\n");
//	return 0;
//}
//int main()
//{
//	int a, b;
//	scanf("%d,%d", &a, &b);
//	if (b==0)
//		printf("divided by zero is forbidden!\n");
//	printf("%d %d\n", a / b, a%b);
//	return 0;
//}

//#include<ctype.h>

//int main()
//{
//	char arr[81];
//	gets(arr);
//	for (int i = 0; arr[i] != '\0'; ++i)
//	{
//		if (isalpha(arr[i]))
//			printf("%c", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}


#include<iostream>
using namespace std;

int main()
{
	int n;
	int a;
	int count = 0;
	cin >> n;
	for (int i = 0; i<n; ++i)
	{
		scanf("%d", &a);
		if (a>10)
			++count;
	}
	if (count >= 6)
		cout << "just so so" << endl;
	else if (count == 0)
		cout << "666" << endl;
	else
		cout << "good" << endl;
	return 0;
}