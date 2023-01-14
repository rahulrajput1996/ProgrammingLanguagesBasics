#include <stdio.h>
#include <conio.h>
#include <string.h>
struct employee
{
    int number;
    char name[50];
    float salary;
} human1 = {10, "karthik aaryan", 50000};
struct employee human2 = {20, "rohan aaryan", 10000};

int main()
{
    struct employee human3 = {30, "sunil aaryan", 20000};

    printf("%d\n", human1.number);
    printf("%s\n", human1.name);
    printf("%f\n", human1.salary);
    printf("%d\n", human2.number);
    printf("%s\n", human2.name);
    printf("%f\n", human2.salary);
    printf("%d\n", human3.number);
    printf("%s\n", human3.name);
    printf("%f\n", human3.salary);
}
