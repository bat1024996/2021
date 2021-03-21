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
//	while (*ptr++ != '\0')      //ptr先解引用，后自增
//	{
//		;        // '\0'
//	}
//	ptr-=2;              //ptr指向最后一个字符
//
//	while (str<ptr)                //交换字符
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
//	//cout<<solve("abcd");           //传参时，字符串是常量，是不可修改的
//	char arr[] = "abcde";
//	cout << solve(arr);
//	return 0;
//}

//#include<cstdio>

//#define pr(n) printf("%d\n",n)
////#define sul(n) (n)*(n)                    //宏定义是等价替换
////#define add(n)  (n)+(n)             //
//#define add(n) ((n)+(n))
//int main()
//{
//	//pr(5);
//	//pr(sul(5+2));
//	//pr(sul(5 + 2));
//	pr(2 * add(5 + 2));         //定义宏是，不要吝啬符号
//
//	return 0;
//}

//
//#define MAX 100
//
//int main()
//{
//	//printf("MAX=%d\n", MAX);           //引号里面的是字符串常量，不被修改
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


//#define pr(date,format) printf("the value of "#date" is "format"\n",date)     //#date在编译时被替换为“date” 
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



//#define Cat(n,m) n##m            //##具有字符串连接的作用
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
//	int *p = MALLOC(10, int);          //宏可以传递参数类型
//
//	if (p == NULL)
//	{
//		return 1;
//	}
//	//使用
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
	//取消宏定义

	printf("%d", MAX);   //MAX未声明的标识符

	return 0;
}