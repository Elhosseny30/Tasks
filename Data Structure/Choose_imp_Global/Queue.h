#ifndef _QUEUE_H_
#define _QUEUE_H_

#include "global.h"

#define limit_QUEUE
#define more





#if defined(more)
typedef struct queuenode
{
    type data;
    struct queuenode *next;
}QueueNode;


typedef struct queue
{
    QueueNode *front;
    QueueNode *rear;
    int size;
}Queue;

#else
typedef struct queue
{
    int front;
    int rear;
    int size;
    type my_arr[maxsize];
}Queue;
#endif

void CreatQueue(Queue *pq);
void append(type item, Queue *pq);
void serve(type *pe, Queue *pq);
int QueueEmpty(Queue *pq);
int QueueFull(Queue *pq);
int QueueSize(Queue *pq);
void ClearQueue(Queue *pq);
void display_Queue(type element);
void Traverse_Queue(Queue *pq, void(*pf)(type));

#endif