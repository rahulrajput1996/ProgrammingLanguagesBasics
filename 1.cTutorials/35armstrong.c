#include <stdio.h>
#include <conio.h>
#include<math.h>
int main()
{
    int num1, num2, num3, sum = 0;
    printf("enter a number\n");
    scanf("%d", &num1);
    num3 = num1;
    for (; num1 > 0;)
    {
        num2 = (num1 % 10);
        sum = sum + (num2*num2*num2);
        num1 = num1 / 10;
    }
    printf("sum of cube of all digits is %d\n", sum);
    if (sum == num3)
        printf("enter num is armstrong no.\n");
    else
        printf("enter num is not armstrong no.\n");
}