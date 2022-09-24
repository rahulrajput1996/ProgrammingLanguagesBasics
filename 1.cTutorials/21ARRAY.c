#include <stdio.h>
#include <conio.h>
int a, b, c;
int arr1[5];
int main()
{
    int e, i;
    int arr2[4];
    int arr3[] = {10, 20, 30, 40};
    int arr4[4];
    printf("enter the array 4\n");
    for (i = 0; i <= 3; i++)
    {
        scanf("%d", &arr4[i]);
    }
    for (i = 0; i <= 3; i++)
    {
        printf(" %d  %d  %d  %d", arr1[i], arr2[i], arr3[i], arr4[i]);
        printf("\n");
    }
    printf("size of arr4= %d bytes\n", sizeof(arr1[4]));
    for (i = 0; i <= 3; i++)
    {
        printf(" %d  %d  %d  %d", &arr1[i], &arr2[i], &arr3[i], &arr4[i]);
        printf("\n");
    }
    printf(" %d  %d  %d  %d\n", arr1, arr2, arr3, arr4);
    printf("%d\n", sizeof(arr1));
    printf("%d\n", sizeof(arr2));
    printf("%d\n", sizeof(arr3));
    printf("%d\n", sizeof(arr4));
    printf("\n%d %d  %d   %d\n", a, b, c, e);
}