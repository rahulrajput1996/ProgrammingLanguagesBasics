#include <stdio.h>
#include <conio.h>
int main()
{
    int age;
    printf("enter a number\n");
    scanf("%d", &age);
    switch (age)
    {
    case 5:
        printf("age is 5\n");
        break;
    case 6:
        printf("age is 6\n");

    case 8:
        printf("age is 8\n ");

    default:
        printf("you are default\n");
        break;
    }
}
