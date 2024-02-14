#include <stdlib.h>


#include "bits.h"


type * bits(type num)
{
    static type *ptr = NULL;
    static type counter_1 = 0;
    ptr = &counter_1;
    while(num > 0)
    {
        if(!(num % 2 == 0))
        {
           counter_1++;
        }
        num = num/2;
    }
    return ptr;
}