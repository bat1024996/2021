#pragma once 

#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

typedef int DataType;

typedef struct stack
{
	DataType *arr;
	int top;
	int capacity;

}Stack;


void StackInit(Stack* ps);
// ��ջ 
void StackPush(Stack* ps, DataType data);
// ��ջ 
void StackPop(Stack* ps);
// ��ȡջ��Ԫ�� 
DataType StackTop(Stack* ps);
// ��ȡջ����ЧԪ�ظ��� 
int StackSize(Stack* ps);
// ���ջ�Ƿ�Ϊ�գ����Ϊ�շ��ط������������Ϊ�շ���0 
int StackEmpty(Stack* ps);
// ����ջ 
void StackDestroy(Stack* ps);