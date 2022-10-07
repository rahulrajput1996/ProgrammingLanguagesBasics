#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int a;
    printf("Enter the size of array\n");
    scanf("%d", &a);

    // use of malloc
    // ptr = (int *)malloc(a * sizeof(int));

    // for (int i = 0; i < a; i++)
    // {
    //     printf("Enter %d element: ", i);
    //     scanf("%d", &ptr[i]);
    // }
    // for (int i = 0; i < a; i++)
    // {
    //     printf("%d element was %d\n", i, ptr[i]);
    // }

    // use of calloc
    // ptr = (int *)calloc(a, sizeof(int));

    // for (int i = 0; i < a; i++)
    // {
    //     printf("Enter %d element: ", i);
    //     scanf("%d", &ptr[i]);
    // }
    // for (int i = 0; i < a; i++)
    // {
    //     printf("%d element was %d\n", i, ptr[i]);
    // }

    // use of calloc with realloc
    ptr = (int *)malloc(a * sizeof(int));

    for (int i = 0; i < a; i++)
    {
        printf("Enter %d element: ", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < a; i++)
    {
        printf("%d element was %d\n", i, ptr[i]);
    }

    printf("Enter new size of array\n");
    scanf("%d", &a);

    ptr = (int *)realloc(ptr, a * sizeof(int));

    for (int i = 0; i < a; i++)
    {
        printf("Enter %d element: ", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < a; i++)
    {
        printf("%d element was %d\n", i, ptr[i]);
    }

    free(ptr);
    return 0;
}
