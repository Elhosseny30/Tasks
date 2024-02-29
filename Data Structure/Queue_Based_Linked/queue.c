#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

#include "queue.h"


void CreatQueue(Queue *pq)
{
    pq->front = NULL;
    pq->rear = NULL;
    pq->size = 0;
}

void append(type item, Queue *pq)
{
    QueueNode *pn = (QueueNode *)malloc(sizeof(QueueNode));
    pn->data = item;
    pn->next = NULL;
    if(!pq->front)
    {
        pq->front = pn;
    }
    else
    {
        pq->rear->next = pn;
    }
    pq->rear = pn;
    pq->size++;
}

void serve(type *pe, Queue *pq)
{

    QueueNode *pn = pq->front;
    *pe = pn->data;
    pq->front = pq->front->next;
    free(pn);
    if(!pq->front)
    {
        pq->rear = NULL;
    }
    pq->size--;
}

int QueueEmpty(Queue *pq)
{
    return !pq->size;
}

int QueueFull(Queue *pq)
{
    return 0;
}

int QueueSize(Queue *pq)
{
    return pq->size;
}

void ClearQueue(Queue *pq)
{
    while(pq->front)
    {
        pq->rear = pq->front->next;
        free(pq->front);
        pq->front = pq->rear;
    }
    pq->size = 0;
}

void display(type element)
{
    printf("item %i\n", element);
}

void Traverse(Queue *pq, void(*pf)(type))
{
    QueueNode *pn = pq->front;
    while(pn)
    {
        (*pf)(pn->data);
        pn = pn->next;
    }
}