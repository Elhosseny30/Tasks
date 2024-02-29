#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

#include "Queue.h"


int main()
{
    int e = 0;
    Queue q;
    CreatQueue(&q);
    append(5, &q);
    append(6, &q);
    append(7, &q);
    Traverse(&q, display);
    printf("size : %i\n", QueueSize(&q));
    printf("front : %i\n", getfront(&q));
    printf("rear : %i\n", getrear(&q));
    serve(&e,&q);
    Traverse(&q, display);
    printf("size : %i\n", QueueSize(&q));
    printf("front : %i\n", getfront(&q));
    printf("rear : %i\n", getrear(&q));
    printf("FULL : %i\n", QueueFull(&q));
    printf("Empty : %i\n", QueueEmpty(&q));
    append(10, &q);
    append(11, &q);
    append(12, &q);
    Traverse(&q, display);
    printf("size : %i\n", QueueSize(&q));
    printf("front : %i\n", getfront(&q));
    printf("rear : %i\n", getrear(&q));
    printf("FULL : %i\n", QueueFull(&q));
    printf("Empty : %i\n", QueueEmpty(&q));




    

    return 0;
}