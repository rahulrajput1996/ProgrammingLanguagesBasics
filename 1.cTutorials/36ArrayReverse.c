#include <stdio.h>
#include <conio.h>

void fun1(int arr2[])
{
    // int length = strlen(arr2);
    int length = 6;
    int temp;
    for (int i = 0; i <= ((length / 2) - 1); i++)
    {
        temp = arr2[i];
        arr2[i] = arr2[length - 1 - i];
        arr2[length - 1 - i] = temp;
    }
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6};
    // int length = strlen(arr1);
    int length = 6;

    fun1(arr1);
    for (int i = 0; i < length; i++)
    {
        printf("%d\n", arr1[i]);
    }

    return 0;
}