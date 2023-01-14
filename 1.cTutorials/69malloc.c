#include <stdio.h>
#include <conio.h>
#include <string.h>
#include<stdlib.h>
struct employee
{
    int number;
    char name[50];
    float salary;
};
int main()
{
    struct employee *ptr;
    ptr = (struct employee *)malloc(sizeof(struct employee));
    if (ptr == NULL)
    {
        printf("out of memory error\n");
    }
    else
    {
        printf("enter employee data base\n");
        scanf("%d %s %f", &ptr -> number, ptr->name, &ptr->salary);
    }
        printf("%d %s %f", ptr->number, ptr->name, ptr->salary);

}