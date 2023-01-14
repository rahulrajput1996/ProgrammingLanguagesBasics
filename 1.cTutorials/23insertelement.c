#include <stdio.h>
#include <conio.h>
int main()
{
    int num2, num1, num3, i;
    int arr1[50];
    printf("total aaray length\n");
    scanf("%d", &num1);
    printf("at which position you want insert\n");
    scanf("%d", &num2);
    printf("number you want insert\n");
    scanf("%d", &num3);
    printf("enter array\n");
    for (i = 0; i < num1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (i = 0; i >= -(num1 - num2); i--)
    {
        arr1[num1 + i] = arr1[num1 + i - 1];
    }
    arr1[num2 - 1] = num3;
    for (i = 0; i < (num1+1); i++)
    {
        printf(" %d ", arr1[i]);
    }
}