#define type char
#define maxsize 100

typedef struct stack
{
    type top;
    type my_arr[maxsize];

}Stack;



void CreatStack(Stack *ps);
void push(type newitem, Stack *ps);
void pop(type *pe, Stack *ps);
int ISFULL(Stack *ps);
int ISEMPTY(Stack *ps);
int getsize(Stack *ps);
type gettop(Stack *ps);
void clear(Stack *ps);
void display(type e);
void travers(Stack *ps, void(*pf)(type e));

