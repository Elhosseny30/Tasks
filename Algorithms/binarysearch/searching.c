#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>


#include "searching.h"



int linearsearch_1(int my_arr[], int size, int element)
{
    for(int i = 0; i < size; i++)
    {
        if(element == my_arr[i])
        {
            return i;
        }
    }
    return -1;
}
int linearsearch_2(int my_arr[], int size, int element)
{
    int left = 0, right = size-1;
    while(left <= right)
    {
        if(element == my_arr[left])
        {
            return left;
        }
        else if(element == my_arr[right])
        {
            return right;
        }
        left++;
        right--;
    }
    return -1;
}
//int my_arr[maxsize] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 100};


int binarysearch_iterative(int my_arr[], int size, int element)
{
    int left = 0, right = size - 1; 
    while(left <= right)
    {
        int mid = left + ((right - left)/2);
        if(element == my_arr[mid])
        {
            return mid;
        }
        else if(element > my_arr[mid])
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}



int binarysearch_recursive(int my_arr[], int left, int right, int element)
{
    int mid = 0;
    while(left <= right)
    {
        int mid = left + ((right - left)/2);
        if(element == my_arr[mid])
        {
            return mid;
        }
        else if(element > my_arr[mid])
        {
            binarysearch_recursive(my_arr, mid+1, right, element);
        }
        else
        {
            binarysearch_recursive(my_arr, left, mid-1, element);
        }
    }
    return -1;
}
