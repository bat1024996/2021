#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<errno.h>

//int main()
//{
//	char arr[20];
//	FILE *pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	else
//	{
//		fgets(arr, 3, pf);             //最多读n-1个，末尾有'\0'
//	}
//	printf("%s\n", arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[10];
//};
//int main()
//{
//	//char arr[20];
//
//	//fgets(arr, 5, stdin);              //fgets直接从输入流中读取
//	//printf("%s", arr);
//
//	FILE *pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		struct Stu s = { "zhangsan", 20, "男" };
//		fprintf(pf, "%s %d %s", s.name, s.age, s.sex);       //将结构体的数据写入到文件中
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	struct Stu s;
//	FILE *pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	else
//	{
//		//fscanf,fprintf包含标准输入输出函数
//
//		fscanf(pf, "%s %d %s", s.name, &(s.age), s.sex);
//		fprintf(stdout,"%s %d %s", s.name, s.age, s.sex);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	char arr[20];
//	sprintf(arr, "%s %d %s", "haha", 23, "hehe");       //以字符串的形式储存在arr中
//	printf("%s\n", arr);
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct Stu s = { "zhangsan", 19, 99.8f };
//	FILE *pf = fopen("data.txt", "wb");                        //以二进制写
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	else
//	{
//		fwrite(&s, sizeof(s), 1, pf);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//int main()
//{
//	struct Stu s = {0};
//	FILE *pf = fopen("data.txt", "rb");                        //以二进制读取
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	else
//	{
//		fread(&s, sizeof(s), 1, pf);               //读取二进制文件的内容
//		printf("%s %d %f", s.name, s.age, s.score);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//
//int main()
//{
//	int a = 10000;
//	FILE *pf = fopen("bin.txt", "wb");             //以二进制形式读写
//	if (pf == NULL)
//	{
//		return 1;
//	}
//	else
//	{
//		fwrite(&a, sizeof(a), 1, pf);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}