#include <stdio.h>
#include <conio.h>
int main()
{
    int num, i, j;
    printf("enter a num for star pattern----1 TO 4\n");
    scanf("%d", &num);
    if (num == 1)
    {
        for (i = 1; i <= 5; i++)
        {
            for (j = 1; j <= i; j++)
            {
                printf("%c", '*');
            }
            printf("\n");
        }
    }
    if (num == 2)
    {
        for (i = 5; i >= 1; i--)
        {
            for (j = 1; j <= i; j++)
            {
                printf("%c", '*');
            }
            printf("\n");
        }
    }
    if (num == 3)
    {
        for (i = 1; i <= 5; i++)
        {
            for (j = 5 - i; j >= 1; j--)
            {
                printf(" ");
            }
            for (j = 1; j <= i; j++)
            {
                printf("%c", '*');
            }
            printf("\n");
        }
    }
    if (num == 4)
    {
        for (i = 5; i >= 1; i--)
        {
            for (j = 5; j > i; j--)
            {
                printf(" ");
            }
            for (j = 1; j <= i; j++)
            {
                printf("%c", '*');
            }

            printf("\n");
        }
    }
    //printf("hello world\n");
}