#include <stdio.h>
#include <conio.h>
int main()
{
    int a = 100;
    int *ptr;
    ptr=&a;
    printf("%d\n", a);
    printf("%d\n", &a);
    printf("%d\n", ptr);
    printf("%d\n", &ptr);
    printf("%d\n", *(&ptr));
    printf("%d\n", *ptr);
    printf("%d\n", *(&a));

}