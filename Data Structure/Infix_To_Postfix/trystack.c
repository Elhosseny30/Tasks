#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>



#include "trystack.h"



void CreatStack(Stack *ps)
{
    ps->top = 0;
}

void push(type newitem, Stack *ps)
{
    ps->my_arr[ps->top] = newitem;
    ps->top++;
}

void pop(type *pe, Stack *ps)
{
    *pe = ps->my_arr[ps->top-1];
    ps->top--; 
}

int ISFULL(Stack *ps)
{
    return (ps->top == maxsize);
}

int ISEMPTY(Stack *ps)
{
    return (ps->top == 0);
}

int getsize(Stack *ps)
{
    return ps->top;
}


type gettop(Stack *ps)
{
    return (ps->my_arr[ps->top-1]);
}

void clear(Stack *ps)
{
    ps->top = 0;
}

void display(type e)
{
    printf("%i\n", e);
}

void travers(Stack *ps, void(*pf)(type e))
{
    for(int i = ps->top-1; i >= 0; i--)
        (*pf)(ps->my_arr[ps->top]);
}




