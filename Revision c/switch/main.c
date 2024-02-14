#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

void calc(char op, float num1, float num2);

int main()
{
    
    char operator;
    float number1 = 0, number2 = 0;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter Two operands: ");
    scanf("%f%f", &number1, &number2);
    calc(operator, number1, number2);
    
    return 0;
}

void calc(char op, float num1, float num2)
{
    switch (op)
    {
    case '+':
        printf("%0.1f + %0.1f = %0.1f", num1, num2, (num1 + num2));
        break;
    case '-':
        printf("%0.1f - %0.1f = %0.1f", num1, num2, (num1 - num2));        break;
    case '*':
        printf("%0.1f * %0.1f = %0.1f", num1, num2, (num1 * num2));
        break;
    case '/':
        if(num2 == 0)
        {
            printf("Divisable By 0 Not allowed.\n");
        }
        else
        {
            printf("%0.1f / %0.1f = %0.1f", num1, num2, (num1 / num2));
        }
        break;
    default:
        printf("Chosse From Options.\n");
        break;
    }
}
