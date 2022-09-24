#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i, sum,lower, upper;
    printf("enter  lower limit\n");
    scanf("%d", &lower);
    printf("enter upper limit\n");
    scanf("%d", &upper);

    for (int i = lower; i <= upper; i++)
    {
        n = i;
        sum=0;
        for (i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                sum = sum + i;
            }
        }
        if (sum == n)
        {
            printf("%d\n", sum);
        }
    }
}
