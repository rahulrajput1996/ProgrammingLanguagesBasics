#include <stdio.h>
#include <conio.h>
int main()
{
    int row;
    printf("enter how many rows you want\n");
    scanf("%d", &row);
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= (40 - i); j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= ((2 * i) - 1); j++)
        {
            printf("%c", '*');
        }
        printf("\n");
    }
}
