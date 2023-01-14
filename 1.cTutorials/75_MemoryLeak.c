#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int i = 0;
    while (i < 4545454)
    {
        printf("hello");
        ptr = (int *)malloc(54541 * sizeof(int));
        if (i % 100 == 0)
        {
            getchar();
        }
        i++;
        free(ptr); // it is necessary to add
    }

    return 0;
}