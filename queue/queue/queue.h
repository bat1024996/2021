#pragma once 

#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

typedef int DataType;

typedef struct queue
{
	DataType *arr;
	int front, rear;
	int len;
}Queue;


// ��ʼ������ 
void QueueInit(Queue* q);
// ��β����� 
void QueuePush(Queue* q, DataType data);
// ��ͷ������ 
void QueuePop(Queue* q);
// ��ȡ����ͷ��Ԫ�� 
DataType QueueFront(Queue* q);
// ��ȡ���ж�βԪ�� 
DataType QueueBack(Queue* q);
// ��ȡ��������ЧԪ�ظ��� 
int QueueSize(Queue* q);
// �������Ƿ�Ϊ�գ����Ϊ�շ��ط�����������ǿշ���0 
int QueueEmpty(Queue* q);
// ���ٶ��� 
void QueueDestroy(Queue* q);

int QueueFull(Queue* q);

void QueuePrint(Queue* q);