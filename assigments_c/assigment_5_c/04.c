#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>

void sorting(int* add_1, int size)
{
    for(int i = 0; i < size-1; i++)
    {
        for(int j = 0; j < size-i-1; j++)
        {
            if(*(add_1 + j) > *(add_1 + j +1))
            {
                int temp = *(add_1 + j);
                *(add_1 + j) = *(add_1 + j + 1);
                *(add_1 + j + 1) = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {4,40,25,65,3};
    int size = sizeof(arr) / sizeof(arr[0]);
    sorting(arr, size);
    for(int i = 0; i < size; i++)
    {
        printf("%i\t", arr[i]);
    }
    return 0;
}
