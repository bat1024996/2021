#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


#define name_MAX 20
#define sex_MAX 5
#define tele_MAX 14
#define addr_MAX 20
#define MAX 1000

//����
//����
//�Ա�
//�绰
//��ַ

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

//��ʼ���ṹ��
void InitContact(struct Contact *pc);


//����
void Addcontact(struct Contact *pc);

//��ʾ��ͨѶ¼
void ShowContact(struct Contact* pc); 

//ɾ��
void DelContact(struct Contact* pc);

//ͨѶ¼�Ĳ���
void SearchContact(struct Contact* pc);

//������������
void Sort_byname(struct Contact* pc); //��qsort������

//�޸���ϵ��
ModifyContact(struct Contact* pc);










