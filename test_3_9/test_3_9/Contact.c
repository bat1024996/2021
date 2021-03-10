
#include"Contact.h"

void InitContact(struct Contact *pc)
{
	memset(pc->date, 0, sizeof(pc->date));     //使用memset初始化内存
	pc->sz = 0;
}


void Addcontact(struct Contact *pc)
{
	if (pc->sz < MAX)     //未存满
	{
		/*printf("请输入姓名:");
		scanf("%s", pc->date->name);
		printf("请输入年龄:");
		scanf("%d", &(pc->date->age));
		printf("请输入性别:");
		scanf("%s", pc->date->sex);
		printf("请输入电话:");
		scanf("%s", pc->date->tele);
		printf("请输入地址:");
		scanf("%s", pc->date->addr);*/

		
		printf("请输入姓名:");
		scanf("%s", pc->date[pc->sz].name);
		printf("请输入年龄:");
		scanf("%d", &(pc->date[pc->sz].age));
		printf("请输入性别:");
		scanf("%s", pc->date[pc->sz].sex);
		printf("请输入电话:");
		scanf("%s", pc->date[pc->sz].tele);
		printf("请输入地址:");
		scanf("%s", pc->date[pc->sz].addr);
		pc->sz++;                         //sz加一
	}
	else
		printf("通讯录已存满\n");
}


void ShowContact(struct Contact* pc)
{
	 //        姓名            年龄            性别            电话        地址
	printf("%6s\t%2s\t%4s\t%13s\t%20s\n", "姓名", "年龄", "性别", "电话", "住址");
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
	printf("请输入要删除联系人的姓名:>");
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
			printf("该联系人已删除\n");
			break;
		}
		if (flag)
			printf("通讯录查无此人\n");
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
	printf("请输入要查找的联系人的姓名:>");
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
		printf("通讯录中无此人\n");

}


ModifyContact(struct Contact* pc)
{
	int i, flag = 1;
	char name1[6];
	printf("请输入要修改的联系人的姓名:>");
	gets(name1);
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->date[i].name, name1) == 0)
		{
			printf("请输入要修改的姓名:>\n");
			gets(name1);
			//pc->date[i].name = name1;            //error

			strcpy(pc->date[i].name, name1);

		}
	}
}

