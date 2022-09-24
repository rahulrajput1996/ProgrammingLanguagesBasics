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
    struct employee human[5];
    for (int i = 0; i <= 4; i++)
    {
        printf("enter employee data %d\n", (i + 1));
        printf("enter number of employee\n");
        scanf("%d", &human[i].number);
        printf("enter name of employee\n");
        scanf("%s", human[i].name);
        printf("enter salary of employee\n");
        scanf("%f", &human[i].salary);
    }
    printf("number       name          salary    \n");

    for (int i = 0; i <= 4; i++)
    {
        //printf("entered employee data %d\n", (i + 1));
        printf("%d           %s            %f\n", human[i].number, human[i].name, human[i].salary);
    }
}