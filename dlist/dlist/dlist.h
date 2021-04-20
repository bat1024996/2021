#pragma once 
 

#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

// ��ͷ + ˫�� + ѭ��������ɾ���ʵ��
typedef int DataType;

typedef struct ListNode
{
	DataType data;
	struct ListNode* next;
	struct ListNode* prev;
}DListNode;

// �������������ͷ���.
DListNode* ListCreate();
// ˫����������
void ListDestory(DListNode* pHead);
// ˫�������ӡ
void ListPrint(DListNode* pHead);
// ˫������β��
void ListPushBack(DListNode* pHead, DataType x);
// ˫������βɾ
void ListPopBack(DListNode* pHead);
// ˫������ͷ��
void ListPushFront(DListNode* pHead, DataType x);
// ˫������ͷɾ
void ListPopFront(DListNode* pHead);
// ˫���������
DListNode* ListFind(DListNode* pHead, DataType x);
// ˫��������pos��ǰ����в���
void ListInsert(DListNode* pos, DataType x);
// ˫������ɾ��posλ�õĽڵ�
void ListErase(DListNode* pos);
