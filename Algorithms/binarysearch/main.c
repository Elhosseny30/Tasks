#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

#include "searching.h"
int my_arr[maxsize] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 100};



int main()
{

    int ret = linearsearch_1(my_arr, maxsize, 55);
    printf("%i\n", ret);
    ret = linearsearch_1(my_arr, maxsize, 222);
    printf("%i\n", ret);
    ret = linearsearch_1(my_arr, maxsize, 11);
    printf("%i\n", ret);

    printf("-----------------------\n");

    ret = linearsearch_2(my_arr, maxsize, 55);
    printf("%i\n", ret);
    ret = linearsearch_2(my_arr, maxsize, 222);
    printf("%i\n", ret);
    ret = linearsearch_2(my_arr, maxsize, 11);
    printf("%i\n", ret);

    printf("==========================\n");

    ret = binarysearch_iterative(my_arr,maxsize, 55);
    printf("%i\n", ret);
    ret = binarysearch_iterative(my_arr, maxsize, 222);
    printf("%i\n", ret);
    ret = binarysearch_iterative(my_arr, maxsize, 11);
    printf("%i\n", ret);

    printf("===========================\n");

    ret = binarysearch_recursive(my_arr, 0, maxsize, 55);
    printf("%i\n", ret);
    ret = binarysearch_recursive(my_arr, 0, maxsize, 222);
    printf("%i\n", ret);
    ret = binarysearch_recursive(my_arr, 0, maxsize, 11);
    printf("%i\n", ret);

    printf("=============================\n");
    


    return 0;
}

