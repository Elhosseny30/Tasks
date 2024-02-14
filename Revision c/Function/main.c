#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

int big(int num1, int num2);
int small(int num1, int num2);

int main()
{
   

    int num1 = 0, num2 = 0, num3 = 0, num4 = 0;
    printf("Enter Four Numbers: ");
    scanf("%i%i%i%i", &num1, &num2, &num3, &num4);
    int bignum1 = big(num1, num2);
    int bignum2 = big(num3, num4);
    int biggest = big(bignum1, bignum2);
    printf("biggest : %i\n",biggest);
    int samllnum1 = small(num1, num2);
    int smallnum2 = small(num3, num4);
    int smallest = small(samllnum1, smallnum2);
    printf("smallest: %i\n", smallest);
    
    return 0;
}

int big(int num1, int num2)
{
    return (num1 > num2)? num1 : num2;
}

int small(int num1, int num2)
{
    return (num1 < num2)? num1 : num2;
}