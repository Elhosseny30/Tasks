#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>


#include "stack.h"


void CreatStack(Stack *ps)
{
    ps->top = 0;
}

void push(type item, Stack *ps)
{
    ps->my_array[ps->top] = item;
    ps->top++;
}

void pop(type *pe, Stack *ps)
{
    //ps->top--;
    *pe = ps->my_array[--ps->top];
}

int StackFull(Stack *ps)
{
    return ps->top == maxsize;
}

int StackEmpty(Stack *ps)
{
    return !ps->top;
}


void ClearStack(Stack *ps)
{
    ps->top = 0;
}

int getsize(Stack *ps)
{
    return ps->top;
}

type gettop(Stack *ps)
{
    return ps->my_array[ps->top - 1];
}

void display(type element)
{
    printf("item : %i\n", element);
}

void Traverse(Stack *ps, void(*pf)(type))
{
    for(int i = ps->top - 1; i >= 0; i--)
    {
        (*pf)(ps->my_array[i]);
    }
}