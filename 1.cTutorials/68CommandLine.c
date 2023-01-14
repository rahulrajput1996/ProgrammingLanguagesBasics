#include <stdio.h>
#include <conio.h>
int main(int argc, char const *argv[])
{
    printf("total argument given is %d\n", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("at index %d value is %s\n", i, argv[i]);
    }

    return 0;
}
