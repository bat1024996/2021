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

//初始化
void SeqlistInit(Seqlist *ps);
//销毁
void SeqlistDestroy(Seqlist *ps);
//头插尾插
void SeqlistPushBack(Seqlist *ps, SeqlistDatetType x);
void SeqlistPushFront(Seqlist *ps, SeqlistDatetType x);
//头删尾删
void SeqlistPopBack(Seqlist *ps);
void SeqlistPopFront(Seqlist *ps);


void SeqlistPrint(Seqlist *ps);


