#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>


int main()
{

    char str[100], str_cpy[100];
    printf("Enter The String: ");
    gets(str);
    for(int i = 0; i < strlen(str); i++)
    {
        str_cpy[i] = str[i];
    }
    printf("The Copied String : %s\n", str_cpy);
   

    
    
    return 0;
}
