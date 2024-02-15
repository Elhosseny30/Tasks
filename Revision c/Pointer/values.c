

#include "values.h"



int minmum(int arr[], int size)
{
    int min = arr[0];
    for(int i = 0; i < size; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int maxmum(int arr[], int size)
{
    int max = arr[0];
    for(int i = 0; i < size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int * return_many(int arr[], int size)
{
    static int return_arr[2];
    return_arr[0] = minmum(arr, size);
    return_arr[1] = maxmum(arr, size);
    return return_arr;
    
}