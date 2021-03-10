#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


#define name_MAX 20
#define sex_MAX 5
#define tele_MAX 14
#define addr_MAX 20
#define MAX 1000

//姓名
//年龄
//性别
//电话
//地址

struct Con
{
	char name[name_MAX];
	int age;
	char sex[sex_MAX];
	char tele[tele_MAX];
	char addr[addr_MAX];
};

struct Contact
{
	struct Con date[MAX];
	int sz;
};

//初始化结构体
void InitContact(struct Contact *pc);


//增加
void Addcontact(struct Contact *pc);

//表示出通讯录
void ShowContact(struct Contact* pc); 

//删除
void DelContact(struct Contact* pc);

//通讯录的查找
void SearchContact(struct Contact* pc);

//按照姓名排序
void Sort_byname(struct Contact* pc); //用qsort待完善

//修改联系人
ModifyContact(struct Contact* pc);










