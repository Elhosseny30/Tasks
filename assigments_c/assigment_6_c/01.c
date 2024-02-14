#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{

    char name[30];
    int id;
    float salary;
    float bonus;
    float dedu;

}employee;

employee member;

float pure_data(employee *ptr_t);
void get_data(employee *ptr);
void display(employee *ptr_t_2);

int main()
{
    int num = 0, flag = 1;
    while(1)
    {
        printf("Enter 1 To Start Program: ");
        scanf("%i",&num);
        fflush(stdin);
        if(num == 0)
        {
            printf("Thank You For Using..\n");
            return 0;
        }
        else if(num == 1)
        {
            while(flag)
            {
                get_data(&member);
                display(&member);
                printf("Do Want Other Iteration If You Want Press 1 Else Press 0: ");
                scanf("%i", &flag);
                fflush(stdin);
                if(flag == 1)
                {
                    continue;
                }
                else
                {
                    printf("Thank You For Using..\n");
                    return 0;
                }
            }
        }
        else
        {
            printf("Enter Valid Input 1 OR 0..\n");
        }
    }
    return 0;
}

void get_data(employee *ptr)
{
    printf("Enter Name   : ");
    gets(ptr->name);
    printf("Enter ID     : ");
    scanf("%i", &(ptr->id));
    printf("Enter Salary : ");
    scanf("%f", &(ptr->salary));
    printf("Enter bonus  : ");
    scanf("%f", &(ptr->bonus));
    printf("Enter dedu   : ");
    scanf("%f", &(ptr->dedu));
    fflush(stdin);
}

float pure_data(employee *ptr_t)
{
    float after_salary_bonus = (ptr_t->salary) + (ptr_t->bonus);
    float after_salary_dedu_total  = (after_salary_bonus) - (ptr_t->dedu);
    return (after_salary_dedu_total);
}

void display(employee *ptr_t_2)
{
    printf("----------------------\n");
    printf("DATA FOR EMPLOYEE %s AFTER CALCULATIONS\n", ptr_t_2->name);
    printf("ID : %i\n", ptr_t_2->id);
    printf("Salary : %0.2f\n", pure_data(ptr_t_2));
    printf("----------------------\n");
}
