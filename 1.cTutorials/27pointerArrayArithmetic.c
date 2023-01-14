#include <stdio.h>
#include <conio.h>
int main()
{
    int a = 10;
    char b = 'x';
    float c = 13.50;

    // void *ptr1 = &a;
    // void *ptr2 = &b;
    // void *ptr3 = &c;

    int *ptr1 = &a;
    char *ptr2 = &b;
    float *ptr3 = &c;

    printf("%d\n", &a);
    printf("%d\n", &b);
    printf("%d\n", &c);
    printf("%d\n", ptr1);
    printf("%d\n", ptr2);
    printf("%d\n", ptr3);

    printf("%d\n", *ptr1);
    printf("%c\n", *ptr2);
    printf("%f\n", *ptr3);

    printf("%d\n", &a + 1);
    printf("%d\n", &b + 1);
    printf("%d\n", &c + 1);
    printf("%d\n", ptr1 + 1);
    printf("%d\n", ptr2 + 1);
    printf("%d\n", ptr3 + 1);

    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);

    printf("%x\n", &a);
    printf("%x\n", &b);
    printf("%x\n", &c);

    printf("%X\n", &a);
    printf("%X\n", &b);
    printf("%X\n", &c);

    int marks[] = {10, 20, 30, 40};
    int *ptr = marks;
    printf("%d\n", marks[0]);
    printf("%d\n", *(&marks[0]));
    printf("%d\n", *marks);
    printf("%d\n", *ptr);

    printf("%d\n", marks);
    printf("%d\n", &marks[0]);
    printf("%d\n", ptr);

    printf("%d\n", marks[1]);
    printf("%d\n", *(&marks[1]));
    printf("%d\n", *(marks + 1));
    printf("%d\n", *(ptr + 1));

    printf("%d\n", marks + 1);
    printf("%d\n", &marks[1]);
    printf("%d\n", ptr + 1);
    return 0;
}