#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

//#define maxsize 100

/*int arr1[maxsize];
int arr2[maxsize];*/

int * mergsort(int *ptr_1, int *ptr_2, int s1, int s2);

int main()
{
    int s1 = 0, s2 = 0;
    printf("Enter size of first array: ");
    scanf("%i", &s1);
    printf("Enter size of second array: ");
    scanf("%i", &s2);

    int *ptr_1 = (int *)malloc(s1*sizeof(int));   //dynamic memory
    int *ptr_2 = (int *)malloc(s2*sizeof(int));   //dynamic memory


    if(ptr_1 == NULL || ptr_2 == NULL)  // check not book memory in heap
    {
        return -1;
    }

    /*enter elements of array one*/
    printf("Enter Elements of First array: ");
    for(int i = 0; i < s1; i++)
    {
        scanf("%i", &(ptr_1[i]));
    }

    /*enter elements of array two*/
    printf("Enter Elements of Second array: ");
    for(int i = 0; i < s2; i++)
    {
        scanf("%i", &(ptr_2[i]));
    }
    
    
    /* print data after marge with sorting ascednding*/

    int *ptr_4 = mergsort(ptr_1, ptr_2, s1, s2);
    printf("Meerged Array in ascedning order: ");
    for(int i = 0; i < (s1+s2); i++)
    {
        printf("%i ", ptr_4[i]);
    }


    free(ptr_1);
    free(ptr_2);
    return 0;
}


int * mergsort(int *ptr_1, int *ptr_2, int s1, int s2)
{
    int * ptr_3 = (int *) malloc((s1 + s2) * sizeof(int));
    int i = 0, j = 0, k = 0;
    while(i < s1 && j < s2)
    {
        /* check between two arrays and push the smallest in ptr_3*/
        if(ptr_1[i] < ptr_2[j])  
        {
            ptr_3[k] = ptr_1[i];
            i++;
        }
        else if(ptr_1[i] > ptr_2[j])
        {
            ptr_3[k] = ptr_2[j];
            j++;
        }
        k++;
    }

    while(i < s1)  /*if remaing elements in ptr_1 not compared push it in ptr_3*/
    {
        ptr_3[k] = ptr_1[i];
        i++; 
        k++;
    }

    while(j < s2)    /*if remaing elements in ptr_2 not compared push it in ptr_3*/
    {
        ptr_3[k] = ptr_2[j];
        j++; 
        k++;
    }


    return ptr_3;
}
