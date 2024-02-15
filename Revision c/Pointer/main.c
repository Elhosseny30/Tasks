#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

#include "values.h"

int main()
{

    int my_array[100], size;
    printf("Enter Size Of array: ");
    scanf("%i", &size);
    printf("Enter %i Elements in array: ", size);
    for(int i = 0; i < 5; i++)
    {
        scanf("%i", &my_array[i]);
    }
    int *ptr = return_many(my_array, size);
    printf("Minimum Element In Array: %i\n", *(ptr + 0));
    printf("Maximum Element In Array: %i\n", *(ptr + 1));


    return 0;
}

