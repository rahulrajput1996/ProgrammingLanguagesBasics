#include <stdio.h>
#include <conio.h>
int main()
{

    int age;
    printf("enter a number\n");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("you can vote\n");
        }
    else if (age == 15)
    {

        printf("age is 15\n");
        goto teacher;
    }

    printf("you are outside of loop\n");
teacher:
    printf("hello world\n");
}
