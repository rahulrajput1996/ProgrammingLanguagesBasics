#include <stdio.h>
#include <conio.h>
int a;
void add()
{
    int a = 10;
    printf("%d\n", a);
}
void sub()
{
    a=10;
    printf("%d\n", a);
}
int main()
{
    printf("%d\n", a);
    add();
    printf("%d\n", a);
    sub();
    printf("%d\n", a);
}
