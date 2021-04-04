#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

typedef int SeqlistDateType;

typedef struct seqlist
{
	SeqlistDateType *arr;
	int size;
	int capacity;
}Seqlist;


void SeqlistInit(Seqlist *ps);
void SeqlistDestory(Seqlist *ps);

void SeqlistPushBack(Seqlist *ps, int x);
void SeqlistPushFront(Seqlist *ps, int x);

void SeqlistPopBack(Seqlist *ps);
void SeqlistPopFront(Seqlist *ps);

void SeqlistPrint(Seqlist *ps);

