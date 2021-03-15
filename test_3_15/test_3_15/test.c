#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<errno.h>

//int main()
//{
//	//FILE *pf = fopen("date.txt", "w");             //用“w”打开文件是，如果文件不存在，即创建一个文件，
//	//if (pf == NULL)                                 //如果文件存在，则会清空文件里的内容
//	//{
//	//	printf("%s\n",strerror(errno));
//	//	exit(1);
//	//}
//	//else
//	//{
//	//	printf("打开文件成功\n");
//	// fclose(pf);                    //关闭文件
//	// pf=NULL;
//	//}
//
//	FILE *pf = fopen("date.txt", "w");
//	if (pf ==NULL)
//	{
//		printf("打开失败\n");
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//打开成功
//		//fputc('a', pf);                 //将‘a'写入文件中
//
//		for (int i = 'a'; i <= 'z'; i++)
//		{
//			fputc(i, pf);
//		}
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	fputc('a', stdout);
//	fputc('s', stdout);
//	return 0;
//}

//int main()
//{
//	FILE *pf = fopen("date.txt", "r");    //abcdef
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	else
//	{
//	//	printf("%c\n", fgetc(pf));//a
//	//	printf("%c\n", fgetc(pf));//b
//	//	printf("%c\n", fgetc(pf));//c
//	//	printf("%c\n", fgetc(pf));//d
//		int ch = 0;
//		while ((ch = fgetc(pf)) != EOF)          //读取失败，返回EOF
//		{
//			printf("%c", ch);
//		}
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


int main()
{
	
	////FILE *pf = fopen("data.txt")
	//int ch = fgetc(stdin);            //fgetc直接从键盘上获取，fgetc适用于所有输入流
	//printf("%c\n", ch);

	//文本行操作函数
	FILE *pf = fopen("hello.txt", "w");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	else
	{
		fputs("hello ", pf);
		fputs("world ", pf);

	}
	fclose(pf);
	pf = NULL;
	return 0;
}