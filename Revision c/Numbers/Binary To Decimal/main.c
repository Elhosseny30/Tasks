#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>


double bin_to_dec(char str[]);


int main()
{
    char str[100];
    printf("Enter A Binary Number: ");
    scanf("%s", str);
    printf("%s in binary = %0.0lf in decimal\n", str, bin_to_dec(str));
    return 0;
}


double bin_to_dec(char str[])
{
    int c = 0;
    double sum = 0;
    for(int i = (strlen(str) - 1); i >= 0; i--)
    {
        if(str[i] == 49)
        {
            sum +=  1 * pow(2, c);
            c++;
        }
        else
        {
            c++;
        }
    }
    return sum;
}

