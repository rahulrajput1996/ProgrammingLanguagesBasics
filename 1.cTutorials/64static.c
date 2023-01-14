#include <stdio.h>
#include <conio.h>
int fun();
static int a = 20;
int main()
{
    int now;
    {
        static int a;
        printf("%d\n", a);
    }
    printf("%d\n", a);
    now = fun();
    printf("%d\n", now);
    now = fun();
    printf("%d\n", now);
    return 0;
}
int fun()
{
    static int x = 10;
    printf("%d\n", x);
    x++;
    return x;
}