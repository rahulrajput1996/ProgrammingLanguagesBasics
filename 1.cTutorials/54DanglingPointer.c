#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int *mysum()
{
    int a = 10;
    return &a;
}
int main()
{
    // case1- when memoery is free
    int *ptr = (int *)malloc(2 * sizeof(int));
    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;
    free(ptr);  // here ptr becomes dangling pointer
    ptr = NULL; // now not a dangling pointer

    // case2- function return address of local variable
    int *ptr2 = mysum();
    // now ptr2 is a dangling pointer

    // case3- pointer contains address of local variable
    int *ptr3;
    if (1)
    {
        int b = 10;
        ptr3 = &b;
    }
    // here ptr is a dangling pointer
    ptr = NULL; // now not a dangling pointer

    return 0;
}