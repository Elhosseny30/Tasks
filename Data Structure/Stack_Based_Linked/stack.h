
#define type int


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

void CreatStack(Stack *ps);
void push(type item, Stack *ps);
void pop(type *pe, Stack *ps);
int StackFull(Stack *ps /*is not necessary*/);
int StackEmpty(Stack *ps);
void clear(Stack *ps);
type gettop(Stack *ps);
int getsize(Stack *ps);
void display(type element);
void Traverse(Stack *ps, void(*pf)(type));