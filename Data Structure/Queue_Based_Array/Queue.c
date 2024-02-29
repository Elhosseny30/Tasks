#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>


#include "Queue.h"


void CreatQueue(Queue *pq)
{
    pq->front = 0;
    pq->rear = -1;
    pq->size = 0;
}

void append(type item, Queue *pq)  //pq->rear = (pq->rear + 1) % maxsize;
{
    if(pq->rear == maxsize - 1)
    {
        pq->rear = 0;
    }
    else
    {
        pq->rear++;
    }
    pq->my_arr[pq->rear] = item;
    pq->size++;
}

void serve(type *pe, Queue *pq)
{
    *pe = pq->my_arr[pq->front];
    if(pq->front == maxsize - 1) //pq->front = (pq->front + 1) % maxsize;
    {
        pq->front = 0;
    }
    else
    {
        pq->front++;
    }
    pq->size--;
}

int QueueEmpty(Queue *pq)
{
    return !pq->size;
}

int QueueFull(Queue *pq)
{
    return (pq->size == maxsize);
}

int QueueSize(Queue *pq)
{
    return pq->size;
}

void Clear(Queue *pq)
{
    pq->front = 0;
    pq->rear = -1;
    pq->size = 0;
}


type getfront(Queue *pq)
{
    return pq->my_arr[pq->front];
}


type getrear(Queue *pq)
{
    return pq->my_arr[pq->rear];
}

void display(type element)
{
    printf("item : %i\n", element);
}

void Traverse(Queue *pq, void(*pf)(type))
{
    int pos = pq->front;
    for(int i = 0; i < pq->size; i++)
    {
        (*pf)(pq->my_arr[pos]);
        if(pos == maxsize - 1)
        {
            pos = 0;
        }
        else
        {
            pos++;
        }
    }
    
}


