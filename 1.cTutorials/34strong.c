#include <stdio.h>
#include <conio.h>
int main()
{
    int num1, num2, num3, sum = 0, factorial;
    printf("enter a number\n");
    scanf("%d", &num1);
    num3 = num1;
    for (; num1 > 0;)
    {
        num2 = (num1 % 10);
        factorial=1;
        for (int i = num2; i >= 1; i--)
        {
            factorial = factorial * i;
        }
        sum = sum + factorial;
        num1 = num1 / 10;
    }
    printf("sum of factorial of all digits is %d\n", sum);
    if (sum == num3)
        printf("enter num is strong no.\n");
    else
        printf("enter num is not strong no.\n");
}