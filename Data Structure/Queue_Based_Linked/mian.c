#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

#include "queue.h"


int main()
{
    int e = 0;
    Queue q;
    CreatQueue(&q);
    append(5, &q);
    append(6, &q);
    append(7, &q);
    //serve(&e, &q);
    //printf("%i\n", e);
    printf("size %i\n",QueueSize(&q));
    printf("%i\n", QueueFull(&q));
    Traverse(&q, display);

    return 0;
}