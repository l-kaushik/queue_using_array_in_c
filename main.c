#include<stdio.h>
#include<stdlib.h>

typedef struct {
	int size;
	int front;
	int rear;	
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
	q->front = q->rear = -1;
	q->arr = (int *)malloc(q->size * sizeof(int));
	checkNull(q->arr);

	return q;
}

void enqueue(Queue *q, int value){
	if(isFull(q)){
		printf("Queue overflow\n");
	}
	else{
		q->rear++;
		q->arr[q->rear] = value;
	}
}

int main()
{
	Queue *q = initializeQueue(10);
	return 0;
}