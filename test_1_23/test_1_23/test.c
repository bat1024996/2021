
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ.��1234����ӡ1 2 3 4��

//int Print(int i)
//{
//	if (i < 10)
//		return (i % 10);
//	return Print(i / 10);
//}

//void Print(int i)
//{
//	if (i > 9)
//	{
//		Print(i / 10);
//	}
//	printf("%d ", i % 10);
//	
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	Print(i);
//	return 0;
//}
//
////(123) 4
////(12) 3 4
////(1) 2 3 4


//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩

//�ݹ�
//int Sulp1(int n)
//{
//	if (n == 1)
//		return 1;
//	return n*Sulp1(n - 1);
//	
//}
////�ǵݹ�
//int Sulp2(int n)
//{
//	int s = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		s *= i;
//	}
//	return s;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d\n", Sulp1(n));
//	printf("%d\n", Sulp2(n));
//	return 0;
//}


//�ݹ�ͷǵݹ�ֱ�ʵ��strlen����
//�ݹ�
//int my_strlen1(char* ptr)
//{
//	if (*ptr == 0)
//		return 0;
//	return 1 + my_strlen1(ptr+1);
//}
////�ǵݹ�
//int my_strlen2(char* ptr)
//{
//	int i = 0;
//	while (*ptr != 0)
//	{
//		i++;
//		ptr++;
//	}
//	return i;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	printf("%d\n", my_strlen1(arr));
//	printf("%d\n", my_strlen2(arr));
//
//	return 0;
//}


//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//Ҫ�󣺲���ʹ��C�������е��ַ�������������char arr[] = "abcdef";����֮����������ݱ�ɣ�fedcba
//abcde f
//abcd e
//abc d
//ab c
//a b
//a
//...

//void pp(char* str)
//{
//	int sz = 0;
//	char* ptr = NULL;
//	while (*str != '\0')//���ַ�������
//	{
//		sz++;
//	}
//	ptr =str+ sz;
//}
//
//int reverse_string(char* str)
//{
//	pp(str);
//	char* ptr = NULL;
//	char* p = NULL;
//	ptr -= 1;		//ptr��ǰ
//	*p = *ptr;      //��βԪ�صĽ���
//	*ptr = *str;
//	*str = *p;
//	if (str < ptr)
//	{
//		return reverse_string(str + 1);//str���
//	}
//	return 0;
//}

int main()
{
	char arr[] = "abcdef";
	printf("%s\n", reverse_string(arr));
	return 0;
}


//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//���룺1729�������19

//static int s;//��̬����s
//s = 0;
//void DigitSum(int i)
//{
//	if (i > 9)
//	{
//		DigitSum(i/10);
//	}
//	s += i % 10;//������λ���
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	DigitSum(n);
//	printf("%d\n", s);
//	return 0;
//}



//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ��

//int my_pow(int n, int k)
//{
//	if (k == 1)
//	{
//		return n;
//	}
//	return n*my_pow(n, k - 1);
//}
//
//int main()
//{
//	int n, k;
//	scanf("%d%d", &n, &k);
//	printf("%d\n", my_pow(n, k));
//	return 0;
//}


//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//1 1 2 3 5 8 13 21 34 55 

//�ݹ�
//int fac1(int n)
//{
//	if (n <= 2)
//		return 1;
//	return fac1(n - 1) + fac1(n - 2);
//}
////�ǵݹ�
//int fac2(int n)
//{
//	int a=1, b=1, c=1;
//	while (n-2)
//	{
//		a = b;
//		b = c;
//		c = a + b;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", fac1(n));
//	printf("%d\n", fac2(n));
//	return 0;
//}
