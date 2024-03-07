#ifndef _STACK_H_
#define _STACK_H_
#include "global.h"



#define _LIMIT_MEMORY
#define choose





#if defined(choose)
typedef struct stacknode
{
    type data;
    struct stacknode *next;

}StackNode;

typedef struct stack
{
    StackNode *top;
    int size;
}Stack;
#else
typedef struct stack
{
    type top;
    type my_array[maxsize];
}Stack;

#endif


void CreatStack(Stack *ps);
void push(type item, Stack *ps);
void pop(type *pe, Stack *ps);
int StackFull(Stack *ps);
int StackEmpty(Stack *ps);
void ClearStack(Stack *ps);
int getsize(Stack *ps);
type gettop(Stack *ps);
void display(type element);
void Traverse(Stack *ps, void(*pf)(type));

#endif