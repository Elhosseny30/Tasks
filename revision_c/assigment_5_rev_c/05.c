#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>



int main()
{

    int x = 22, y = 33, z = 44;
    int* px = &x;
    int* py = &y;
    int* pz = &z;

    printf("x = %i\n", x);              // 22
    printf("y = %i\n", y);              // 33
    printf("z = %i\n", z);              // 44
    printf("px = %x\n", px);            // address of x
    printf("py = %x\n", py);            // address of y
    printf("pz = %x\n", pz);            // address of z
    printf("*px = %i\n", *px);          // 22
    printf("*py = %i\n", *py);          // 33
    printf("*pz = %i\n", *pz);          // 44

    printf("Swapping Pointers..\n");
    int* save_pz = pz;
    pz = px;
    px = py;
    py = save_pz;

    printf("x = %i\n", x);              // 22
    printf("y = %i\n", y);              // 33
    printf("z = %i\n", z);              // 44
    printf("px = %x\n", px);            // address of y
    printf("py = %x\n", py);            // address of z
    printf("pz = %x\n", pz);            // address of x
    printf("*px = %i\n", *px);          // 33
    printf("*py = %i\n", *py);          // 44
    printf("*pz = %i\n", *pz);          // 22


    return 0;
}
