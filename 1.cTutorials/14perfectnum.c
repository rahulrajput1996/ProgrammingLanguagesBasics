#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i, sum = 0;
    printf("enter a num\n");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == n)
    {

        printf("num is perfect num\n");
    }
    else
    {
        printf("num is not perfect\n");
    }
}
