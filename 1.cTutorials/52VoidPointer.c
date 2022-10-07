#include <stdio.h>
#include <conio.h>
int main()
{
    int a = 10;
    float b = 111.33;
    void *ptr;
    ptr = &a;
    printf("%d\n", *((int *)ptr));
    ptr = &b;
    printf("%f\n", *((float *)ptr));

    return 0;
}