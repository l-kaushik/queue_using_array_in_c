#include "queue.h"

int main()
{
	Queue *q = initializeQueue(5);
	enqueue(q, 4);
	enqueue(q, 2);
	enqueue(q, 1);
	enqueue(q, 3);
	display(q);
	printf("\n");
	dequeue(q);
	dequeue(q);
	enqueue(q, 5);
	dequeue(q);
	display(q);
	return 0;
}