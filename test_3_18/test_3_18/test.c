#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//#/*include<iostream>
//using namespace std;
//#include<string>*/

//int main()
//{
//	int i, ret=0;
//	for (i = 1; i <= 250; i++)
//	{
//		ret += i;
//	}
//	printf("%d", ret);
//	getchar();
//	return 0;
//}


//int main()
//{
//	printf("%s--%d\n", __FILE__, __LINE__);
//	
//	getchar();
//	return 0;
//}

//char* solve(char* str)
//{
//	char a;
//	char *p = str;
//	char* ptr = str;
//	while (*ptr++ != '\0')      //ptr�Ƚ����ã�������
//	{
//		;        // '\0'
//	}
//	ptr-=2;              //ptrָ�����һ���ַ�
//
//	while (str<ptr)                //�����ַ�
//	{
//		a = *str;
//		*str = *ptr;
//		*ptr = a;
//		str++, ptr--;
//	}
//	return p;
//}
//
//int main()
//{
//	//cout<<solve("abcd");           //����ʱ���ַ����ǳ������ǲ����޸ĵ�
//	char arr[] = "abcde";
//	cout << solve(arr);
//	return 0;
//}

//#include<cstdio>

//#define pr(n) printf("%d\n",n)
////#define sul(n) (n)*(n)                    //�궨���ǵȼ��滻
////#define add(n)  (n)+(n)             //
//#define add(n) ((n)+(n))
//int main()
//{
//	//pr(5);
//	//pr(sul(5+2));
//	//pr(sul(5 + 2));
//	pr(2 * add(5 + 2));         //������ǣ���Ҫ���ķ���
//
//	return 0;
//}

//
//#define MAX 100
//
//int main()
//{
//	//printf("MAX=%d\n", MAX);           //������������ַ��������������޸�
//
//	return 0;
//}

//int main()
//{
//	char *p = "hello ""bit";
//	printf("%s\n", p);
//	printf("how ""are ""you ");
//	return 0;
//}


//#define pr(date,format) printf("the value of "#date" is "format"\n",date)     //#date�ڱ���ʱ���滻Ϊ��date�� 
//
//int main()
//{
//	int a = 5;
//	printf("the value of a is %d\n", a);
//	pr(a, "%d");
//	float f = 2.3;
//	printf("the value of f is %f\n", f);
//	pr(f, "%f");
//	return 0;
//}



//#define Cat(n,m) n##m            //##�����ַ������ӵ�����
//
//int main()
//{
//	int getnum = "haha";
//	printf("%s\n", Cat(get,num));
//	return 0;
//}

//#define MALLOC(num,type) (type*)malloc(num*sizeof(type))
//int main()
//{
//	
//	//int *p = (int*)malloc(10 * sizeof(int));
//	
//	int *p = MALLOC(10, int);          //����Դ��ݲ�������
//
//	if (p == NULL)
//	{
//		return 1;
//	}
//	//ʹ��
//	free(p);
//	p = NULL;
//
//	return 0;
//}



#define MAX 12
int main()
{
	printf("%d", MAX);
#undef MAX
	//ȡ���궨��

	printf("%d", MAX);   //MAXδ�����ı�ʶ��

	return 0;
}