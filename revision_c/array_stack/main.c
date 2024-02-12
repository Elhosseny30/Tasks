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
    push(5, &stack);
    travers(&stack, &display);


    return 0;
}