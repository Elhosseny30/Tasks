#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>



int main()
{

    int x = 7, y = 4;
    printf("arithmetic:\n");
    printf("add : %i\n", x+y);
    printf("sub : %i\n", x-y);
    printf("mult: %i\n", x*y);
    printf("div : %i\n", x / y);
    printf("-----------\n");
    printf("logical:\n");
    printf("AND : %i\n", x&&y);
    printf("OR  : %i\n", x||y);
    printf("mult: %i\n");
    printf("-----------\n");
    printf("bitwise:\n");
    printf("AND : %i\n", x&y);
    printf("OR  : %i\n", x|y);
    printf("XOR : %i\n",x^y);
    printf("Not : %i\n", ~y);

    return 0;
}
