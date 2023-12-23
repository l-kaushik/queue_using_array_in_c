#ifndef QUEUE_H
#define QUEUE_H

#include<stdio.h>
#include<stdlib.h>

// structure declaration
typedef struct {
	int size;
	int front;
	int rear;	
	int *arr;
}Queue;

// Function to check for NULL pointers
void checkNull(void *ptr);

// Function to initialize a queue
Queue *initializeQueue(int size);

// Check if the queue is full
int isFull(Queue *q);

// Enqueue an element into the queue
void enqueue(Queue *q, int value);

// Check if the queue is empty
int isEmpty(Queue *q);

// Dequeue an element from the queue
int dequeue(Queue *q);

// Display the elements in the queue
void display(Queue *q);

#endif
