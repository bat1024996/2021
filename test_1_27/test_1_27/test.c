#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//void fun(struct stu *p)
//{
//	printf("%s",(*p).name);
//	return;
//}
//int main()
//{
//	struct stu students[3] = { { 9801, "zhang", 20 },{ 9802, "wang", 19 },{ 9803, "zhao", 18 }};
//	fun(students + 1);
//	return 0;
//}


//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣arr��һ������һά���顣

//void print(int* str,int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(str + i));
//	}
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//	return 0;
//}

//int main()
//{
//	printf("%d ", sizeof("I am"));//5
//	return 0;
//}



//дһ����������������һ���ַ���������
//void unolder(char* str, int len)
//{
//	char* ptr = str + len-1;
//	while (str<ptr)
//	{
//		char a = *str;
//		*str = *ptr;
//		*ptr = a;
//		str++;
//		ptr--;
//	}
//}
//
//int main()
//{
//	char arr[] = "I am a student";
//	int len = strlen(arr);
//	unolder(arr, len);
//	printf("%s\n", arr);
//	return 0;
//}

//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�

//���磺2 + 22 + 222 + 2222 + 22222


//int main()
//{
//	int a;//2+22+222+2222+22222
//	scanf("%d", &a);
//	int sum = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		sum += a;
//		a = a * 10 + 2;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//���0��100000֮������С�ˮ�ɻ������������

//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
//��:153��1^3��5^3��3^3����153��һ����ˮ�ɻ���
#include<math.h>
//int is_number(int a)
//{
//	int arr[6] = { 0 };
//	int b=0;
//	int i = 0;
//	for ( i = 0; i < 6; i++)
//	{
//		arr[i] = a % 10;
//		a /= 10;
//		if (a==0)
//		{
//			i += 1;
//			break;
//		}
//	}
//	for (int j = 0; j < i; j++)
//	{
//		b += (int)pow(arr[j], i);
//	}
//	/*if (b == a)
//		return 1;
//	else
//		return 0;*/
//	return b;
//
//}
//
//int main()
//{
//	int n = 0;
//	for (n = 0; n <= 100000; n++)
//	{
//		if (is_number(n)==n)
//		{
//			printf("%d ", n);
//		}
//	}
//	/*int n = 153;
//	if (is_number(n)==n)
//	{
//		printf("%d ", n);
//	}*/
//	return 0;
//}



//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣�

//int main()
//{
//	int money;
//	scanf("%d", &money);
//	int a = money / 1;;
//	int sum = 0;
//	while (a != 0)
//	{
//		sum += a;
//		a /= 2;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}
//
