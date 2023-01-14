#include <stdio.h>
#include <conio.h>
int main()
{
    int a = 7, b = 4;
    //int x = 4, y = 10, z;
    a = --a * a++;
    printf("%d   %d\n", a, b);
    /*a = a-- + ++b;
    printf("%d   %d\n", a, b);
    b = ++a + --b;
    printf("%d   %d\n", a, b);
    a = a++ + a;
    printf("%d\n", a);*/
}