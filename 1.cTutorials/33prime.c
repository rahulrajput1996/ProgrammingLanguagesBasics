#include <stdio.h>
#include <conio.h>
int main()
{
    int num, count = 0;
    printf("enter a number\n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
            count++;
    }
    if (count == 2)
        printf("num is prime\n");
    else
        printf("num is not prime\n");
}