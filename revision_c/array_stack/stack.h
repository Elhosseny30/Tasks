#define maxsize 10
#define type int 



typedef struct stack
{
    type entry_array[maxsize];
    int top;

}Stack;


void CreatStack(Stack *ps);
void push(type newitem, Stack *ps);
void pop(type *pe, Stack *ps);
int ISFULL(Stack *ps);
int ISEMPTY(Stack *ps);
void clear(Stack *ps);
int gettop(Stack *ps);
int getsize(Stack *ps);
void display(type element);
void travers(Stack *ps, void (*pf)(type));