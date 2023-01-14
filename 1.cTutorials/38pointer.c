#include <stdio.h>
#include <conio.h>
int main()
{
    int a = 100;
    float b = 12892.762898;
    int *ptr;
    int *ptr2 = NULL;
    int *ptr3;
    ptr = &a;
    printf("\\n\n");
    printf("%E\n", b);
    printf("%d\n", a);
    printf("%d\n", *ptr);
    printf("%d\n", *(&a));
    printf("%p\n", ptr);
    printf("%p\n", &a);
    printf("%p\n", &ptr);
    printf("%p\n", &ptr2);
    printf("%p\n", ptr2);
    printf("%p\n", *ptr2);
    printf("%d\n", *ptr2);
    printf("%p\n", &ptr3);
    printf("%p\n", ptr3);
    printf("%d\n", *ptr3);
}