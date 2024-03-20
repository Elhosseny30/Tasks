#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#define maxsize 9

int arr[maxsize] = {41, 62, 13, 84, 35, 96, 57, 28, 79};


void swap(int *num1, int *num2);
int partion_pivot(int arr[], int l, int r);
int quicksort(int arr[], int l, int r);

int main()
{
    quicksort(arr, 0, (maxsize - 1));
    for(int i = 0; i < maxsize; i++)
    {
        printf("%i ", arr[i]);
    }

    return 0;
}

void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}



int partion_pivot(int arr[], int l, int r)
{
    int i = l;
    int j = r;
    int pivot = i;
    while(1)
    {
        while(arr[pivot] <= arr[j] && pivot != j)
        {
            j--;
        }
        if(pivot == j)
        {
            break;
        }
        else if(arr[pivot] > arr[j])
        {
            swap(&arr[pivot], &arr[j]);
            pivot = j;
        }
        while(arr[pivot] >= arr[i] && pivot != i)
        {
            i++;
        }
        if(pivot == i)
        {
            break;
        }
        else if(arr[pivot] < arr[i])
        {
            swap(&arr[pivot], &arr[i]);
            pivot = i;
        }
    }
    return pivot;
}



int quicksort(int arr[], int l, int r)
{
    if(l < r)
    {
        int pos = partion_pivot(arr, l, r);
        quicksort(arr, l, (pos - 1));
        quicksort(arr, (pos + 1), r);
    }
}