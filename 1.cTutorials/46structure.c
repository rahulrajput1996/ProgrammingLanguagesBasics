#include <stdio.h>
#include <conio.h>
#include <string.h>
struct employee
{
    int number;
    char name[50];
    float salary;
}human;

int main()
{
    //struct employee human;
    human.number = 10;
    // human.name="karthik aaryan";   we can not assign like this
    strcpy(human.name, "karthik aaryan");
    human.salary = 50000;
    printf("%d\n", human.number);
    printf("%s\n", human.name);
    printf("%f\n", human.salary);
}
