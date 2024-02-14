#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>


#include "bits.h"

int main()
{
    type number = 0;
    printf("Enter any number: ");
    scanf("%i", &number);
    type *ptr_bit = bits(number);
    printf("Total Zero Bits is %i\n", (8 * sizeof(type)) - *ptr_bit);
    printf("Total One Bits is %i\n",  *ptr_bit);

   printf("kaka");
    return 0;
}
