#include <stdio.h>
#include <conio.h>
#include <string.h>
struct employee
{
    int number;
    char name[20];
    float salary;
    int marks[3];
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
        for (int j = 0; j <= 2; j++)
        {
            printf("enter marks in subject %d of employee%d\n", j + 1,i+1);
            scanf("%d", &human[i].marks[j]);
        }
    }

    for (int i = 0; i <= 4; i++)
    {
        printf("entered employee data %d\n", (i + 1));
        printf("entered number of employee\n");
        printf("%d\n", human[i].number);
        printf("entered name of employee\n");
        printf("%s\n", human[i].name);
        printf("entered salary of employee\n");
        printf("%f\n", human[i].salary);
        for (int j = 0; j <= 2; j++)
        {
            printf("entered marks in subject %d of employee%d\n", j + 1,i+1);
            printf("%d\n", human[i].marks[j]);
        }
    }
    for (int i = 0; i <= 4; i++)
    {
        printf("%d\n", &human[i].number);
        printf("%d\n", &human[i]);
        printf("%d\n", human[i]);
    }
}