#include <stdio.h>
#include <conio.h>
//int a ;
int a = 20;
int main()
{
    {
        extern int a;
        printf("%d\n", a);
    }
    printf("%d\n", a);
    return 0;
}
