#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#define size 5


int main()
{
    int arr[size], pos = 0;
    printf("Enter Element: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%i", &arr[i]);
    }

    printf("Enter position to delet: ");
    scanf("%i", &pos);
    if(pos > size || pos < 1)
    {
        printf("Invalid input!!\n");
    }
    int ref = pos;
    pos--;
    while(ref < size)
    {
        arr[pos] = arr[ref];
        ref++;
        pos++;
    }
    printf("Output: ");
    for(int i = 0; i < size - 1; i++)
    {
        printf("%i ", arr[i]);
    }


    return 0;
}