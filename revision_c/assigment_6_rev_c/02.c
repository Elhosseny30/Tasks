#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maxsize 10

typedef struct{

    char student_name[30];
    int student_id;
    float deg_of_Programming;
    float deg_of_Data_Structures;
    float deg_of_Discrete_Math;
    float deg_of_Algorithms;

}student;


typedef struct{
    //three admins
    int admin_id;
    student *admin_access;

}admin;


void print_admin_before(admin *ptr_admin, int id,int size);
void display(student *ptr, int i);
void print_admin_after(admin *ptr_admin, int id,int size);
void edit_admin(admin *ptr_admin_2, int id, int size);

int main()
{
    int studet_id = 0,admin_id = 0,
        counter_student = 0, Wrong_admin_tries = 0,
        counter_admin = 0, check = 0;
    student my_arr[maxsize] ={{"Ahmed",  1, 95, 85, 80, 90},
                         {"Kareem", 2, 96, 74, 99, 67},
                         {"Ali",    3, 94, 75, 97, 65},
                         {"Som3a",  4, 87, 58, 75, 85},
                         {"Salama", 5, 85, 47, 74, 96},
                         {"Hamed",  6, 69, 65, 83, 75},
                         {"Omar",   7, 78, 99, 85, 78},
                         {"Kirooo", 8, 98, 77, 65, 75},
                         {"Klark" , 9, 99, 99, 99, 99},
                         {"Aziz",  10, 78, 45, 55, 65}};
    admin admin_t[3]= {{55, &my_arr[0]},
                       {66, &my_arr[0]},
                       {77, &my_arr[0]}};
    while(1)
    {
        printf("Enter Student ID: ");
        scanf("%i", &studet_id);
        fflush(stdin);
        if(studet_id > 0 && studet_id <= 10)
        {
            display(my_arr, studet_id);
            printf("Thanks For Using...\n");
            return 0;
        }
        else
        {

            if(counter_student < 3)
            {
                printf("Wrong ID...Please Try again.\n");
                counter_student++;
            }
             else
            {
                printf("Failed Please Contact With admins..\n");
                for(int i = 0; i < 3; i++)
                {
                    printf("Enter Admin ID : ");
                    scanf("%i", &admin_id);
                    fflush(stdin);
                    if(admin_id == admin_t[0].admin_id || admin_id == admin_t[1].admin_id || admin_id == admin_t[2].admin_id)
                    {
                        while(counter_admin < 3)
                        {
                            printf("Enter Student ID: ");
                            scanf("%i", &studet_id);
                            fflush(stdin);
                            if(studet_id > 0 && studet_id <= 10)
                            {
                                print_admin_before(&admin_t, studet_id, maxsize);
                                printf("IF You Edit Grades Enter 1 Else 0: ");
                                scanf("%i", &check);
                                if(check)
                                {
                                    edit_admin(&admin_t, studet_id, maxsize);
                                    print_admin_after(&admin_t, studet_id, maxsize);
                                }
                                printf("Thanks For Using.....\n");
                                return 0;
                            }
                            else
                            {
                                printf("Wrong Student ID..\n");
                                counter_admin++;
                            }
                        }
                        if(counter_admin >= 3)
                        {
                            printf("There Is No Other Tries..\n");
                            return 0;
                        }
                    }
                    else
                    {
                        printf("Wrong Admin ID..Try Again..\n");
                        Wrong_admin_tries++;
                    }
                }
                if(Wrong_admin_tries >= 3)
                {
                    printf("There Is No Other Tries For Wrong Admin...\n");
                    return 0;
                }
            }


        }
    }


    return 0;
}


void edit_admin(admin *ptr_admin_2, int id, int size)
{
    student *std_ptr = ptr_admin_2->admin_access;
    for(int i = 0; i < size; i++)
    {
        if(std_ptr->student_id == id)
        {
            break;
        }
        else
        {
            std_ptr++;
        }
    }
    printf("Enter Degree of Programming To Edit: ");
    scanf("%f", &((std_ptr)->deg_of_Programming));
    printf("Enter Degree of Data Structures To Edit: ");
    scanf("%f", &((std_ptr)->deg_of_Data_Structures));
    printf("Enter Degree of Discrete Math To Edit: ");
    scanf("%f", &((std_ptr)->deg_of_Discrete_Math));
    printf("Enter Degree of Algorithms To Edit: ");
    scanf("%f", &((std_ptr )->deg_of_Algorithms));

}
void print_admin_before(admin *ptr_admin, int id, int size)
{
    student *std_ptr = ptr_admin->admin_access;
    for(int i = 0; i < size; i++)
    {
        if(std_ptr->student_id == id)
        {
            break;
        }
        else
        {
            std_ptr++;
        }
    }
    printf("-----------------------\n");
    printf("Data For This Student Before Editing: \n");
    printf("Student Name.           : %s\n", ((std_ptr)->student_name));
    printf("Student ID.             : %i\n", ((std_ptr)->student_id));
    printf("Deg Of Programming.     : %0.2f\n", ((std_ptr)->deg_of_Programming));
    printf("Deg Of Data Structures. : %0.2f\n", ((std_ptr)->deg_of_Data_Structures));
    printf("Deg Of Discrete Math.   : %0.2f\n", ((std_ptr)->deg_of_Discrete_Math));
    printf("Deg Of Algorithms.      : %0.2f\n", ((std_ptr)->deg_of_Algorithms));
    printf("-----------------------\n");

}

void print_admin_after(admin *ptr_admin, int id,int size)
{

    student *std_ptr = ptr_admin->admin_access;
    for(int i = 0; i < size; i++)
    {
        if(std_ptr->student_id == id)
        {
            break;
        }
        else
        {
            std_ptr++;
        }
    }
    printf("-----------------------\n");
    printf("Data For This Student After Editing: \n");
    printf("Student Name.           : %s\n", ((std_ptr)->student_name));
    printf("Student ID.             : %i\n", ((std_ptr)->student_id));
    printf("Deg Of Programming.     : %0.2f\n", ((std_ptr)->deg_of_Programming));
    printf("Deg Of Data Structures. : %0.2f\n", ((std_ptr)->deg_of_Data_Structures));
    printf("Deg Of Discrete Math.   : %0.2f\n", ((std_ptr)->deg_of_Discrete_Math));
    printf("Deg Of Algorithms.      : %0.2f\n", ((std_ptr)->deg_of_Algorithms));
    printf("-----------------------\n");

}
void display(student *ptr, int i)
{
    i--;
    printf("-----------------------\n");
    printf("Student Name           : %s\n", ((ptr + i)->student_name));
    printf("Student ID             : %i\n", ((ptr + i)->student_id));
    printf("Deg Of Programming     : %0.2f\n", ((ptr + i)->deg_of_Programming));
    printf("Deg Of Data Structures : %0.2f\n", ((ptr + i)->deg_of_Data_Structures));
    printf("Deg Of Discrete Math   : %0.2f\n", ((ptr + i)->deg_of_Discrete_Math));
    printf("Deg Of Algorithms      : %0.2f\n", ((ptr + i)->deg_of_Algorithms));
    printf("-----------------------\n");
}
