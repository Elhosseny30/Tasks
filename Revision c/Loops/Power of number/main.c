#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

int Number_Power(int num, int po);


int main()
{
    int Number = 0;
    int power = 0;
    printf("Enter the Number: ");
    scanf("%i", &Number);
    printf("Enter the Power: ");
    scanf("%i", &power);
    printf("Answer : %lld", Number_Power(Number, power));
    
    
    
    return 0;
}


int Number_Power(int num, int po)
{
    long long max = 1;
    while(po > 0)
    {
        max *= num;
        po--;
    }
    return max;
}
