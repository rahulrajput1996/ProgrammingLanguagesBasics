#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, i;
    printf("enter the number\n");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        i = a;
    }
    if (a < b)
    {
        i = b;
    }
    for (int j = 2; j <= i; j++)
    {
        if ((a % j==0) && (b % j==0))
        {
            printf("%d\n", j);
        }
    }
}