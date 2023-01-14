#include <stdio.h>
#include <conio.h>
int main()
{
    int num1, num2, sum, factorial, lower, upper;
    printf("enter  lower limit\n");
    scanf("%d", &lower);
    printf("enter upper limit\n");
    scanf("%d", &upper);

    for (int i = lower; i <= upper; i++)
    {
        num1 = i;
        sum = 0;
        for (; num1 > 0;)
        {
            num2 = (num1 % 10);
            factorial = 1;
            for (int i = num2; i >= 1; i--)
            {
                factorial = factorial * i;
            }
            sum = sum + factorial;
            num1 = num1 / 10;
        }
        if (sum == i)
        {
            printf("%d\n", sum);
        }
    }
}