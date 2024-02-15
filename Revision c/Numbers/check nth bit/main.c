#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>


bool getbit(int num, int pos);


int main()
{
    int number = 0, check = 0, store = 0;
    printf("Enter Any Number: ");
    scanf("%i", &number);
    printf("Enter nth bit to check (0-31): ");
    scanf("%i", &check);
    store = check;
    store--;
    printf("The %i bit is set to %i\n", check, !(getbit(number, store)));

    return 0;
}


bool getbit(int num, int pos)
{
    int msk = 1 << pos;
    return (num & msk) ? true : false;
}



