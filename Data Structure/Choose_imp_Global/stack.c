#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

#include "stack.h"


#if defined(_LIMIT_MEMORY) && defined(choose)

void CreatStack(Stack *ps)
{
    ps->top = NULL;
    ps->size = 0;
}

void push(type item, Stack *ps)
{
    StackNode *pn = (StackNode *)malloc(sizeof(StackNode));
    pn->data = item;
    pn->next = ps->top;
    ps->top = pn;
    ps->size++;
}

void pop(type *pe, Stack *ps)
{
    StackNode *pn = ps->top;
    *pe = pn->data;
    ps->top = ps->top->next;
    free(pn);
    ps->size--;
}

int StackFull(Stack *ps /*is not necessary*/)
{
    return 0;
}

int StackEmpty(Stack *ps)
{
    return !ps->size;
}
void ClearStack(Stack *ps)
{
    StackNode *pn = ps->top;
    while(pn)
    {
        ps->top = ps->top->next;
        free(pn);
        pn = ps->top;
    }
    ps->size = 0;
}
type gettop(Stack *ps)
{
    return ps->top->data;
}

int getsize(Stack *ps)
{
    return ps->size;
}

void display(type element)
{
    printf("item : %i\n", element);
}

void Traverse(Stack *ps, void(*pf)(type))
{
    StackNode *pn = ps->top;
    while(pn)
    {
        (*pf)(pn->data);
        pn = pn->next;
    }
}

#else
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


#endif