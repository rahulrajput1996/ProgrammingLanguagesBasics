#include <stdio.h>
#include <conio.h>
int main()
{
    int a = 10;
    int *ptr;
    if (ptr == NULL)
    {
        printf("it can not be derefenced");
    }
    else
    {
        printf("the value is %d\n", *ptr);
    }
    ptr = NULL;
    if (ptr == NULL)
    {
        printf("it can not be derefenced\n");
    }
    else
    {
        printf("the value is %d\n", *ptr);
    }
    printf("the value is %d\n", ptr);
    printf("the address is %d\n", &ptr);
    // printf("the value is %d\n", *ptr);  its can not be done
    ptr = &a;
    if (ptr == NULL)
    {
        printf("it can not be derefenced\n");
    }
    else
    {
        printf("the value is %d\n", *ptr);
    }
    return 0;
}