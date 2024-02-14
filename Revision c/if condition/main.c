#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>


#include "bits.h"

int main()
{
    int Year = 0;
    printf("Enter Year: ");
    scanf("%i", &Year);
    if((Year % 4 == 0) && (Year % 100 != 0))
    {
        printf("LEAP YEAR\n");
    }
    else if(Year % 400 == 0)
    {
        printf("LEAP YEAR\n");
    }
    else
    {
        printf("NOT LEAP YEAR\n");
    }
   
    return 0;
}
