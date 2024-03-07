#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

#include "stack.h"
#include "Queue.h"
#include "global.h"




int main()
{

    Stack stack;
    CreatStack(&stack);
    printf("%i\n", StackEmpty(&stack));
    printf("%i\n", StackFull(&stack));
    printf("%i\n", getsize(&stack));
    push(5, &stack);
    Traverse(&stack, display);
    printf("%i\n", StackEmpty(&stack));
    printf("%i\n", StackFull(&stack));
    printf("%i\n", getsize(&stack));
    push(6, &stack);
    Traverse(&stack, display);
    printf("%i\n", StackEmpty(&stack));
    printf("%i\n", StackFull(&stack));
    printf("%i\n", getsize(&stack));
    push(7, &stack);
    push(8, &stack);
    push(9, &stack);
    Traverse(&stack, display);
    printf("%i\n", StackEmpty(&stack));
    printf("%i\n", StackFull(&stack));
    printf("%i\n", getsize(&stack));
    int e;
    pop(&e, &stack);
    printf("%i\n", e);
    Traverse(&stack, display);
    printf("%i\n", StackEmpty(&stack));
    printf("%i\n", StackFull(&stack));
    printf("%i\n", getsize(&stack));
    printf("%i\n", gettop(&stack));
    
    printf("*********************************\n");

    int ee = 0;
    Queue q;
    CreatQueue(&q);
    append(5, &q);
    append(6, &q);
    append(7, &q);
    Traverse_Queue(&q, display);
    printf("size : %i\n", QueueSize(&q));
    serve(&ee,&q);
    Traverse_Queue(&q, display);
    printf("size : %i\n", QueueSize(&q));
    printf("FULL : %i\n", QueueFull(&q));
    printf("Empty : %i\n", QueueEmpty(&q));
    append(10, &q);
    append(11, &q);
    append(12, &q);
    Traverse_Queue(&q, display);
    printf("size : %i\n", QueueSize(&q));
    printf("FULL : %i\n", QueueFull(&q));
    printf("Empty : %i\n", QueueEmpty(&q));

    return 0;
}