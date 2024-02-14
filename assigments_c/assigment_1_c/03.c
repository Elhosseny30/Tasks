#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>



int main()
{

    float sal = 0;
    printf("Enter Your Salary: ");
    scanf("%f", &sal);
    float sal_tax = sal + (sal * (5.0/100));
    printf("Your sal with tax add is: %0.2f\n", sal_tax);
    return 0;
}
