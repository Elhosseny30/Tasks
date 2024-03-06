#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

#include "trystack.h"


int priority(char op);
char* infix_to_postfix(char expression[]);


int main()
{
    char expression[100] ={0};
    printf("Enter Expression: ");
    gets(expression);
    char *ptr = infix_to_postfix(expression);
    for(int i = 0; *(ptr + i) != 0; i++)
        printf("%c", *(ptr + i));
    return 0;
}



int priority(char op)
{
    if(op == '+' || op == '-')
    {
        return 1;
    }
    else if(op == '*' || op == '/')
    {
        return 2;
    }
    else if(op == '^')
    {
        return 3;
    }
    else
    {
        return 0;
    }
}


char* infix_to_postfix(char expression[])
{
    static char postfix[100] = {0};
    Stack stack;
    CreatStack(&stack);
    char e;
    int j = 0;
    for(int i = 0; i < strlen(expression); i++)
    {
        if(isdigit(expression[i]) || isalpha(expression[i]))
        {
            postfix[j] = expression[i];
            j++;
        }
        else if(expression[i] == ' ')
        {
            continue;
        }
        else if(expression[i] == '(')
        {
            push(expression[i], &stack);
        }
        else if(expression[i] == ')')
        {
            while(gettop(&stack) != '(')
            {
                postfix[j] = gettop(&stack);
                j++;
                pop(&e, &stack);
            }
            pop(&e, &stack);
        }
        else
        {
            while(!ISEMPTY(&stack) && (priority(expression[i]) <= priority(gettop(&stack))))
            {
                postfix[j] = gettop(&stack);
                j++;
                pop(&e, &stack);
            }
            push(expression[i], &stack);
        }
    }
    while(!ISEMPTY(&stack))
    {
        postfix[j] = gettop(&stack);
        j++;
        pop(&e,&stack);
    }
    return postfix; 
}

