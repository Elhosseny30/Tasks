#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#define maxsize 5


int arr[maxsize] = {8,5,7,3,2};

void bubblesort(int arr[], int size);
int swap(int *num1, int *num2);
void display(int arr[], int size);

int main()
{
    bubblesort(arr, maxsize);
    return 0;
}



int swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}



void display(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%i ", arr[i]);
    }

}



void bubblesort(int arr[], int size)
{
    for(int i = 0; i < size-1; i++)
    {
        for(int j = 0; j < size - 1 - i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
    display(arr,size);
}