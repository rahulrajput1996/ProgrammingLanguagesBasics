#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    int n, *arr;
    printf("enter size\n");
    scanf("%d", &n);
    arr = (int *)calloc(n, sizeof(int));
    if (arr == NULL)
    {
        printf("no memory\n");
    }
    else
    {
        printf("array elements are\n");
        for (int i = 0; i < n; i++)
        {
            printf(" %d ", *(arr + i));
        }
        printf("\n");
    }
    printf(" enter array elements \n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", (arr + i));
    }
    printf("array elements are\n");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", *(arr + i));
    }
    printf("\n");
    n = n + 2;
    arr = (void *)realloc(arr, n * sizeof(int));
    printf("array elements are\n");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", *(arr + i));
    }
    printf("\n");
    printf(" enter array elements \n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", (arr + i));
    }
    printf("array elements are\n");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", *(arr + i));
    }
    printf("\n");

}