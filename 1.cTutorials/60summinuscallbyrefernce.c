#include <stdio.h>
#include <conio.h>
void fun(int*, int*);
int main()
{
    int a, b;
    printf("enter two words\n");
    scanf("%d %d", &a, &b);
    fun(&a, &b);
    printf("%d %d\n", a, b);
    //printf("%d %d\n", x, y);
}
void fun(int* x, int* y)
{
    int plus,minus;
    plus = *x + *y;
    minus= *x - *y;
    *x = plus;
    *y = minus;
    printf("%d %d\n", *x, *y);
}
