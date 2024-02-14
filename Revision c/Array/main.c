#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>


int main()
{

    int arr[100];
    int size = 0, sum_odd = 0, sum_even = 0;
    printf("Enter Size Of array : ");
    scanf("%i", &size);
    printf("Enter %i Elements in array : ", size);
    for(int i = 0; i < size; i++)
    {
        scanf("%i", &arr[i]);
        if(arr[i] % 2 == 0)
        {
            sum_even++;
        }
        else
        {
            sum_odd++;
        }
    }
    printf("Total Even Elements: %i\n", sum_even);
    printf("Total Odd Elements : %i\n", sum_odd);
   

    
    
    return 0;
}
