#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<errno.h>

//int main()
//{
//	//FILE *pf = fopen("date.txt", "w");             //�á�w�����ļ��ǣ�����ļ������ڣ�������һ���ļ���
//	//if (pf == NULL)                                 //����ļ����ڣ��������ļ��������
//	//{
//	//	printf("%s\n",strerror(errno));
//	//	exit(1);
//	//}
//	//else
//	//{
//	//	printf("���ļ��ɹ�\n");
//	// fclose(pf);                    //�ر��ļ�
//	// pf=NULL;
//	//}
//
//	FILE *pf = fopen("date.txt", "w");
//	if (pf ==NULL)
//	{
//		printf("��ʧ��\n");
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//�򿪳ɹ�
//		//fputc('a', pf);                 //����a'д���ļ���
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
//		while ((ch = fgetc(pf)) != EOF)          //��ȡʧ�ܣ�����EOF
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
	//int ch = fgetc(stdin);            //fgetcֱ�ӴӼ����ϻ�ȡ��fgetc����������������
	//printf("%c\n", ch);

	//�ı��в�������
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