#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>

int main()
{
    int var = 10;
    int* ptr = NULL;
    printf("var = %i\n", var);
    ptr = &var;
    *ptr = 20;
    printf("var = %i\n", var);
    return 0;
}
