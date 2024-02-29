#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

#include "stack.h"


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
    



    return 0;
}