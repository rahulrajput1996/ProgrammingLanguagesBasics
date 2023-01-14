#include <stdio.h>
#include <conio.h>
int main()
{
    int a = 10;
    int *ptr; // it is a wild pointer
    // *ptr = 20;  //not a good practice
    // printf("the value is %d", *ptr);  //not a good practice
    ptr = &a; // now it is not a wild pointer
    printf("the value is %d", *ptr);
    return 0;
}