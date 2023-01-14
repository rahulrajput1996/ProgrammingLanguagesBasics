#include <stdio.h>
#include <conio.h>
int arr2[];
int main()
{
    int num2, num1, num3, i;
    int arr1[50];
    printf(" aaray 1 length\n");
    scanf("%d", &num1);
    printf("at which position you want insert\n");
    scanf("%d", &num2);
    printf("number of elements in aaray which u want insert\n");
    scanf("%d", &num3);
    printf("enter array1\n");
    for (i = 0; i < num1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("enter array2\n");
    for (i = 0; i < num3; i++)
    {
        scanf("%d", &arr2[i]);
    }
    for (i = 0; i > -(num1-num2+1); i--)
    {

        arr1[num1 + num3 - 1 +i] = arr1[num1 - 1 +i];
    }
    for (i = 0; i < num3; i++)
    {
        arr1[num2 - 1 + i] = arr2[i];
    }
    for (i = 0; i <= num1+num3-1; i++)
    {
        printf(" %d ", arr1[i]);
    }
    printf("\n");
}
