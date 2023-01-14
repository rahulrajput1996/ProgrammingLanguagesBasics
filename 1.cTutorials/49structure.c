#include <stdio.h>
#include <conio.h>
#include <string.h>
struct employee
{
    int number;
    char name[20];
    float salary;
};

int main()
{
    struct employee human1 = {30, "sunil aaryan", 20000};

    printf("%d\n", human1.number);
    printf("%s\n", human1.name);
    printf("%f\n", human1.salary);
    printf("size of %d\n",sizeof (struct employee));
    printf("size of %d\n",sizeof (human1));
    printf("%d\n", &human1.number);
    printf("%d\n", &human1.name);
    printf("%d\n", &human1.salary);
    printf("%d\n", &human1);
    printf("%d\n", human1);
   // printf("%d\n", *human1);


}
