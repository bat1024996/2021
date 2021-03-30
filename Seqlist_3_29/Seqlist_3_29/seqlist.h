#pragma once 

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

typedef int SeqlistDatetType;

typedef struct Seqlist
{
	SeqlistDatetType *arr;
	int sz;
	int capacity;
}Seqlist;

//��ʼ��
void SeqlistInit(Seqlist *ps);
//����
void SeqlistDestroy(Seqlist *ps);
//ͷ��β��
void SeqlistPushBack(Seqlist *ps, SeqlistDatetType x);
void SeqlistPushFront(Seqlist *ps, SeqlistDatetType x);
//ͷɾβɾ
void SeqlistPopBack(Seqlist *ps);
void SeqlistPopFront(Seqlist *ps);


void SeqlistPrint(Seqlist *ps);


