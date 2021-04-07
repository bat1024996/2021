#pragma once

#include"SListNode.h"


void SlistPrint(SListNode *plist)
{
	SListNode *cur = plist;
	while (cur!= NULL)
	{
		printf("%d->", cur->elem);
		cur = cur->next;
	}
	printf("NULL\n");
}

SListNode* BuySlistNode(SListDateType x)
{
	SListNode *node = (SListNode*)malloc(sizeof(SListNode));
	node->elem = x;
	node->next = NULL;

	return node;
}


void SlistPushBack(SListNode **pplist, SListDateType x)
{
	SListNode *NewNode = BuySlistNode(x);
	if (*pplist == NULL)
	{
		*pplist = NewNode;
	}
	else
	{
		SListNode *tail = *pplist;

		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = NewNode;
	}
}

void SlistPushFront(SListNode **pplist, SListDateType x)
{
	SListNode *node = *pplist;
	//交换要经过中间变量
	SListNode *NewNode = BuySlistNode(x);
	NewNode->next = node;
	*pplist = NewNode;

}

void SlistPopBack(SListNode **pplist)
{
	//1.空表
	//一个节点
	//多个节点
	if (*pplist == NULL)
	{
		return;
	}
	else if ((*pplist)->next == NULL)
	{
		free(*pplist);
		*pplist = NULL;
	}
	else
	{
		SListNode *tail = *pplist;
		SListNode *prev = *pplist;
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		tail = NULL;
		prev->next = NULL;
	}
}

void SlistPopFront(SListNode **pplist)
{
	SListNode *node = *pplist;
	*pplist = (*pplist)->next;
	free(node);
	node = NULL;
}



