#include"queue.h"

void QueueInit(Queue* q)
{
	q->len = 10;
	q->arr = (DataType*)malloc(sizeof(DataType)* q->len);
	if (!q->arr)
	{
		printf("malloc failed\n");
		exit(-1);
	}
	q->front = q->rear = 0;

}


void QueueDestroy(Queue* q)
{
	free(q->arr);
	q->arr = NULL;
}

int QueueSize(Queue* q)
{
	return (q->front + q->len - q->rear) % q->len;
}

int QueueEmpty(Queue* q)
{
	return q->front == q->rear;
}

int QueueFull(Queue* q)
{
	return (q->front + 1) % (q->len) == q->rear;
}


void QueuePush(Queue* q, DataType data)
{
	if (QueueFull(q))
	{
		printf("the Queue is full\n");
	}
	else
	{
		q->arr[(q->front++)%q->len] = data;
	}

}


void QueuePop(Queue* q)
{
	if (QueueEmpty(q))
	{
		printf("the Queue is empty\n");
	}
	else
	{
		q->rear++;
	}
}

void QueuePrint(Queue* q)
{
	int i = q->front, j = q->rear;
	while (j % q->len != i)
	{
		printf("%d ", q->arr[j%q->len]);
		++j;
	}
	printf("\n");
}
