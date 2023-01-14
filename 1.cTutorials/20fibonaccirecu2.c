#include <stdio.h>
#include <conio.h>
int main()
{
    int num, term;
    int rec(int);
    printf("enter a num which position you want a term\n");
    scanf("%d", &num);
    term = rec(num);
    printf("%d\n",term);
}
int rec(int num)
{
    int sum;
    if (num == 1)
    {
        return 0;
    }
    else if (num == 2)
    {
        return 1;
    }
    else
    {

        sum = rec(num - 1) + rec(num - 2);

        return sum;
    }
}