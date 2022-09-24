#include <stdio.h>
#include <conio.h>
int main()
{
    int j, i;
    int arr1[3][4] = {{4, 3, 5, 7}, {1, 1, 3, 8}, {3, 1, 2, 4}};
    int arr2[3][5];
    printf("enter the array 2\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 4; j++)
        {
            scanf("%d",& arr2[i][j]);
        }
    }

    printf("you hav entered array1\n");

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 3; j++)
        {
            printf(" %d ", arr1[i][j]);
        }
        printf("\n");
    }
    printf("you hav entered array2\n");

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 4; j++)
        {
            printf(" %d ", arr2[i][j]);
        }
        printf("\n");
    }
}