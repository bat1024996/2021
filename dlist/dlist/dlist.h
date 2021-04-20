#pragma once 
 

#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

// 带头 + 双向 + 循环链表增删查改实现
typedef int DataType;

typedef struct ListNode
{
	DataType data;
	struct ListNode* next;
	struct ListNode* prev;
}DListNode;

// 创建返回链表的头结点.
DListNode* ListCreate();
// 双向链表销毁
void ListDestory(DListNode* pHead);
// 双向链表打印
void ListPrint(DListNode* pHead);
// 双向链表尾插
void ListPushBack(DListNode* pHead, DataType x);
// 双向链表尾删
void ListPopBack(DListNode* pHead);
// 双向链表头插
void ListPushFront(DListNode* pHead, DataType x);
// 双向链表头删
void ListPopFront(DListNode* pHead);
// 双向链表查找
DListNode* ListFind(DListNode* pHead, DataType x);
// 双向链表在pos的前面进行插入
void ListInsert(DListNode* pos, DataType x);
// 双向链表删除pos位置的节点
void ListErase(DListNode* pos);
