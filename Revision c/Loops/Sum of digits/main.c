#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>



int main()
{
    int num = 0;
    int sum = 0;
    printf("Enter Any Number To Find Sum Of Its Digits: ");
    scanf("%i", &num);
    while(num > 0)
    {
        sum += (num % 10);
        num /= 10;
    }
    printf("Sum Of Digits : %i\n", sum);
    
    return 0;
}

