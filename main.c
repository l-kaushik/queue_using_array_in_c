#include<stdio.h>
#include<stdlib.h>

typedef struct {
	int size;
	int front;
	int back;	
	int *arr;
}Queue;

void checkNull(void *ptr){
	if(ptr == NULL){
		printf("Memory can't be allocated");
		exit(EXIT_FAILURE);
	}
}

Queue * initializeQueue(int size){
	Queue *q = malloc(sizeof(Queue));
	checkNull(q);
	q->size = 10;
	q->front = q->back = -1;
	q->arr = (int *)malloc(q->size * sizeof(int));
	checkNull(q->arr);

	return q;
}

int main()
{
	return 0;
}