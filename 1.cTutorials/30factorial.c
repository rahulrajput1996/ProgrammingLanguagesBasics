#include <stdio.h>
#include <conio.h>
int main()
{
    int num, factorial = 1;
    printf("enter num\n");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        if (num == 0)
        {
            break;
        }
        factorial = factorial * i;
    }
    printf("the factorial value is %d \n", factorial);
}