#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>
int sum(int* var1, int* var2);

int main()
{
    int num1 = 0, num2 = 0;
    printf("Please Enter Two Numbers: ");
    scanf("%i%i", &num1, &num2);
    printf("The Summation Of %i and %i = %i\n", num1, num2, sum(&num1, &num2));
    return 0;
}

int sum(int* var1, int* var2)
{
    return (*var1 + *var2);
}
