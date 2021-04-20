#include"queue.h"

void test1()
{
	Queue Q;
	QueueInit(&Q);
	QueuePush(&Q, 1);
	QueuePush(&Q, 2);
	QueuePush(&Q, 3);
	QueuePush(&Q, 4);
	QueuePush(&Q, 5);

	printf("%d\n", QueueSize(&Q));
	QueuePrint(&Q);

	QueuePop(&Q);
	QueuePop(&Q);
	QueuePop(&Q);
	QueuePop(&Q);

	printf("%d\n", QueueSize(&Q));
	QueuePrint(&Q);

	QueueDestroy(&Q);


}

int main()
{
	test1();

	return 0;
}