#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

#define size 6

void divid_merge(int* ptr, int l, int r);

void sorted_merge(int* ptr, int l, int mid, int r);



int main()
{
    int * basic_array = (int *)malloc(size * sizeof(int)); 
    printf("Enter array Elements: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%i", &(basic_array[i]));
    }
    divid_merge(basic_array, 0, (size - 1));
    for(int i = 0; i < size; i++)
    {
        printf("%i ", basic_array[i]);
    }



    return 0;
}

void sorted_merge(int* ptr, int l, int mid, int r)
{
    int s1 = mid-l + 1;
    int s2 = (r - mid);
    int * ptr_s1 = (int *)malloc(s1 * sizeof(int));
    int * ptr_s2 = (int *)malloc(s2 * sizeof(int));

    for(int i = 0; i < s1; i++)
    {
        ptr_s1[i] = ptr[i + l];
    }
    for(int i = 0; i < s2; i++)
    {
        ptr_s2[i] = ptr[i + mid + 1];
    }

    int x = 0, y = 0, k = l;
    while(x < s1 && y < s2)
    {
        if(ptr_s1[x] <= ptr_s2[y])
        {
            ptr[k] = ptr_s1[x];
            x++;
        }
        else
        {
            ptr[k] = ptr_s2[y];
            y++;
        }
        k++;
    }

    while(x < s1)
    {
        ptr[k] = ptr_s1[x];
        x++;
        k++;
    }

    while(y < s2)
    {
        ptr[k] = ptr_s2[y];
        y++;
        k++;
    }
}



void divid_merge(int* ptr, int l, int r)
{
    
    if(l < r)
    {
        int mid = l + ((r - l) / 2);
        divid_merge(ptr, l, mid);
        divid_merge(ptr, (mid + 1), r);
        sorted_merge(ptr, l, mid, r);

    }
}