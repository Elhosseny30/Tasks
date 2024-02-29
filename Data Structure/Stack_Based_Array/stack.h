#define type int 
#define maxsize 5



typedef struct stack
{
    type top;
    type my_array[maxsize];
}Stack;


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