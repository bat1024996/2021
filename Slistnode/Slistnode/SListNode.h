#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

typedef int SListDateType;

typedef struct SListNode
{
	SListDateType elem;
	struct SListNode *next;
}SListNode;

SListNode* BuySlistNode(SListDateType x);

void SlistPushBack(SListNode **pplist, SListDateType x);
void SlistPushFront(SListNode **pplist, SListDateType x);

void SlistPopBack(SListNode **pplist);
void SlistPopFront(SListNode **pplist);

void SlistPrint(SListNode *plist);

