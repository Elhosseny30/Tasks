#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>



int main()
{
    int x = 7, y = 4;
    printf("%i\n", (x|y));
    printf("%i\n", (x&y));
    printf("%i\n", (x^y));
    printf("%i\n", (x << 1));
    printf("%i\n", (x >> 2));

    return 0;
}
