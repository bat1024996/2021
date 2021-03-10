
#include"Contact.h"

void InitContact(struct Contact *pc)
{
	memset(pc->date, 0, sizeof(pc->date));     //ʹ��memset��ʼ���ڴ�
	pc->sz = 0;
}


void Addcontact(struct Contact *pc)
{
	if (pc->sz < MAX)     //δ����
	{
		/*printf("����������:");
		scanf("%s", pc->date->name);
		printf("����������:");
		scanf("%d", &(pc->date->age));
		printf("�������Ա�:");
		scanf("%s", pc->date->sex);
		printf("������绰:");
		scanf("%s", pc->date->tele);
		printf("�������ַ:");
		scanf("%s", pc->date->addr);*/

		
		printf("����������:");
		scanf("%s", pc->date[pc->sz].name);
		printf("����������:");
		scanf("%d", &(pc->date[pc->sz].age));
		printf("�������Ա�:");
		scanf("%s", pc->date[pc->sz].sex);
		printf("������绰:");
		scanf("%s", pc->date[pc->sz].tele);
		printf("�������ַ:");
		scanf("%s", pc->date[pc->sz].addr);
		pc->sz++;                         //sz��һ
	}
	else
		printf("ͨѶ¼�Ѵ���\n");
}


void ShowContact(struct Contact* pc)
{
	 //        ����            ����            �Ա�            �绰        ��ַ
	printf("%6s\t%2s\t%4s\t%13s\t%20s\n", "����", "����", "�Ա�", "�绰", "סַ");
	/*while (pc->sz--)
	{
		printf("%6s\t%2d\t%4s\t%13s\t%20s\n", pc->date->name,
			pc->date->age, pc->date->sex, pc->date->tele, pc->date->addr);
	}*/
	for (int i = 0; i < pc->sz; i++)
	{
		printf("%6s\t%2d\t%4s\t%13s\t%20s\n",
			pc->date[i].name,
			pc->date[i].age,
			pc->date[i].sex,
			pc->date[i].tele,
			pc->date[i].addr);
	}
}


void DelContact(struct Contact* pc )
{
	/*int i=pc->sz;
	while (i--)
	{
		if (strcmp(pc->date->name, name1) == 0)
		{
			
		}
	}*/
	int i, flag = 1;
	int j;
	char name2[10];
	printf("������Ҫɾ����ϵ�˵�����:>");
	gets(name2);
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->date[i].name, name2) == 0)
		{
			for (j = i; j < pc->sz - 1; j++)
			{
				pc->date[j] = pc->date[j + 1];
			}
			flag = 0;
			printf("����ϵ����ɾ��\n");
			break;
		}
		if (flag)
			printf("ͨѶ¼���޴���\n");
	}
}




void SearchContact(struct Contact* pc)
{
	/*while (pc->sz--)
	{
		if (strcmp(pc->date->name, name) == 0)
		{

		}
	}*/

	int i,flag=1;
	char name1[6];
	printf("������Ҫ���ҵ���ϵ�˵�����:>");
	gets(name1);
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->date[i].name, name1) == 0)
		{
			printf("%6s\t%2d\t%4s\t%13s\t%20s\n",
				pc->date[i].name,
				pc->date[i].age,
				pc->date[i].sex,
				pc->date[i].tele,
				pc->date[i].addr);
			flag = 0;
			break;
		}
	}
	if (flag)
		printf("ͨѶ¼���޴���\n");

}


ModifyContact(struct Contact* pc)
{
	int i, flag = 1;
	char name1[6];
	printf("������Ҫ�޸ĵ���ϵ�˵�����:>");
	gets(name1);
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->date[i].name, name1) == 0)
		{
			printf("������Ҫ�޸ĵ�����:>\n");
			gets(name1);
			//pc->date[i].name = name1;            //error

			strcpy(pc->date[i].name, name1);

		}
	}
}

