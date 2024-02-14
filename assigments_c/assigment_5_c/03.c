#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>

int* mult(int* add_1, int* add_2, int size)
{
    int static arr_mult[100];
    for(int i = 0; i < size; i++)
    {
        arr_mult[i] = (*(add_1 + i)) * (*(add_2 + i));
    }
    return (arr_mult);
}

int main()
{

    int arr1[3] = {4,6,7};
    int arr2[3] = {5,9,3};
    int* ptr = mult(arr1, arr2, 3);
    for(int i = 0; i < 3; i++)
    {
        printf("%i\t", *(ptr + i));
    }
    return 0;
}
