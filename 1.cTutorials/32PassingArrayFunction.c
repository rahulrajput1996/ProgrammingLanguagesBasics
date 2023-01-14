#include <stdio.h>
#include <conio.h>

void func1(int arr[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", arr[i]);
    }
    arr[1] = 133;
}

void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", ptr[i]);
        printf("%d\n", *(ptr + i));
    }
    *(ptr + 1) = 1133;
}

int main()
{
    int marks[] = {11, 25, 34, 19};
    printf("passing array\n");
    printf("%d\n", marks[1]);
    func1(marks);
    printf("%d\n", marks[1]);

    printf("passing array address\n");
    printf("%d\n", marks[1]);
    func2(marks);
    printf("%d\n", marks[1]);
    return 0;
}