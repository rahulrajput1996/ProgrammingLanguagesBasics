#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int total;
    char *ptr;
    int charsize;
    printf("enter total no of emplyee u want\n");
    scanf("%d", &total);

    for (int i = 0; i < total; i++)
    {
        printf("enter charsize of employee id\n");
        scanf("%d", &charsize);
        getchar();
        ptr = (char *)malloc(charsize * sizeof(char));
        printf("enter employee id\n");
        scanf("%s", ptr);
        printf("the employee id is %s\n", ptr);

        free(ptr);
    }

    return 0;
}