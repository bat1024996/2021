#include"dlist.h"

DListNode* ListCreate()
{
	DListNode* pHead = (DListNode*)malloc(sizeof(DListNode));
	pHead->next = pHead->prev = NULL;
	return pHead;
}

DListNode* Buynownode()
{
	DListNode* node = (DListNode*)malloc(sizeof(DListNode));
	if (!node)
	{
		printf("malloc failed\n");
		exit(-1);
	}
	return node;
}

void ListPushBack(DListNode* pHead, DataType x)
{
	DListNode* newnode = Buynownode();
	newnode->data = x;
	if (!pHead->next)
	{
		pHead->next = newnode;
		newnode->prev = newnode->next = newnode;
	}
	//双向链表不用找尾
	else
	{
		pHead->next->prev->next = newnode;
		newnode->prev = pHead->next->prev;
		pHead->next->prev = newnode;
		newnode->next = pHead->next;
	}
}

void ListPrint(DListNode* pHead)
{
	DListNode* tail = pHead->next;
	while (tail!= pHead->next->prev)
	{
		printf("%d<==>", tail->data);
		tail = tail->next;
	}
	printf("%d\n", tail->data);
	
}

void ListDestory(DListNode* pHead)
{
	//DListNode* node = pHead,*ptmp=NULL;
	//while (node!=pHead->next->prev)
	//{
	//	//error ，已经将pHead的空间释放了，判断条件出错
	//	ptmp = node;
	//	node = node->next;
	//	free(ptmp);
	//}
	DListNode* node = pHead, *ptr = pHead->next->prev,*ptmp=NULL;
	while (node != ptr)
	{
		ptmp = node;
		node = node->next;
		free(ptmp);
	}
}


void ListPushFront(DListNode* pHead,DataType x)
{
	DListNode* newnode = Buynownode();
	newnode->data = x;

	newnode->prev = pHead->next->prev;
	pHead->next->prev->next = newnode;
	newnode->next = pHead->next;
	pHead->next = newnode;
}

