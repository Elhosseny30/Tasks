#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>



int main()
{

    int num1 = 0, num2 = 0, num3 = 0;
    printf("Enter Three Numbers: ");
    scanf("%i%i%i", &num1, &num2, &num3);
    printf("Your Numbers in revers: %i\t%i\t%i\n", num3, num2, num1);

    return 0;
}
