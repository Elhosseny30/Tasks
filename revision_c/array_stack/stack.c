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

void push(type newitem, Stack *ps)
{
    ps->entry_array[ps->top] = newitem;
    ps->top++;
}

void pop(type *pe, Stack *ps)
{
    *pe = ps->entry_array[--ps->top];
}

int ISFULL(Stack *ps)
{
    return ps->top == maxsize;
}

int ISEMPTY(Stack *ps)
{
    return ps->top == 0;
}

void clear(Stack *ps)
{
    ps->top = 0;
}

int gettop(Stack *ps)
{
    return ps->entry_array[ps->top - 1];
}

int getsize(Stack *ps)
{
    return ps->top;
}

void display(type element)
{
    printf("item : %d\n", element);
}

void travers(Stack *ps, void (*pf)(type))
{
    for(int i = ps->top; i > 0; i--)
    {
        (*pf)(ps->entry_array[i - 1]);
    }
}
