#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    if (strcmp(argv[1], "add") == 0)
    {
        int a = atoi(argv[2]);
        int b = atoi(argv[3]);
        int sum = a + b;
        printf("the sum is %d\n", sum);
    }
    if (strcmp(argv[1], "minus") == 0)
    {
        int a = atoi(argv[2]);
        int b = atoi(argv[3]);
        int minus = a - b;
        printf("the minus is %d\n", minus);
    }
    if (strcmp(argv[1], "mul") == 0)
    {
        int a = atoi(argv[2]);
        int b = atoi(argv[3]);
        int mul = a * b;
        printf("the mul is %d\n", mul);
    }

    return 0;
}
