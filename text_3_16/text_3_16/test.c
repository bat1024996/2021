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
//		fgets(arr, 3, pf);             //����n-1����ĩβ��'\0'
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
//	//fgets(arr, 5, stdin);              //fgetsֱ�Ӵ��������ж�ȡ
//	//printf("%s", arr);
//
//	FILE *pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		struct Stu s = { "zhangsan", 20, "��" };
//		fprintf(pf, "%s %d %s", s.name, s.age, s.sex);       //���ṹ�������д�뵽�ļ���
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
//		//fscanf,fprintf������׼�����������
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
//	sprintf(arr, "%s %d %s", "haha", 23, "hehe");       //���ַ�������ʽ������arr��
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
//	FILE *pf = fopen("data.txt", "wb");                        //�Զ�����д
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
//	FILE *pf = fopen("data.txt", "rb");                        //�Զ����ƶ�ȡ
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	else
//	{
//		fread(&s, sizeof(s), 1, pf);               //��ȡ�������ļ�������
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
//	FILE *pf = fopen("bin.txt", "wb");             //�Զ�������ʽ��д
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