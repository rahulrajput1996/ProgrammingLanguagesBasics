#include <stdio.h>
#include <conio.h>
int main()
{

    int i = 0, num, sum = 0;
    printf("enter a num\n");
    scanf("%d", &num);
    do
    {
        sum = sum + i;
        i++;
    } while (i <= num);
    printf("%d\n", sum);

    //printf("hello world\n");
}
