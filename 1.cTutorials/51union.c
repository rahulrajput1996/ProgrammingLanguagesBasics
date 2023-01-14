#include <stdio.h>
#include <conio.h>
#include <string.h>
union employee
{
    int number;
    short int salary;
};

int main()
{
    union employee human1;
    human1.number = 20;
    printf("%d\n", human1.number);
    printf("%d\n", human1.salary);
    human1.salary = 60;
    printf("%d\n", human1.number);
    printf("%d\n", human1.salary);
    human1.number = 500;
    printf("%d\n", human1.number);
    printf("%d\n", human1.salary);
    printf("size of %d\n", sizeof(union employee));
    printf("size of %d\n", sizeof(human1));
    printf("%d\n", &human1.number);
    printf("%d\n", &human1.salary);
    printf("%d\n", &human1);
    printf("%d\n", human1);
    // printf("%d\n", *human1);
}
