#include <stdio.h>
#include <conio.h>
int add(int, int);
int minus(int, int);
int multiply(int, int, int);

int main()
{
    int a, b, c,r1,r2,r3;
    int (*all)(int,int);
    int (*some)(int,int,int);

    printf("enter three words\n");
    scanf("%d %d %d", &a, &b, &c);
    //r1=add(a, b);
    //r2=minus(a, b);
    //r3=multiply(a, b, c);
    //printf("%d %d %d\n",r1,r2,r3);

    all=&add;
    r1=all(a,b);
    printf("%d\n",r1);

    all=&minus;
    r2=all(a,b);
    printf("%d\n",r2);

    some=&multiply;
    r3=some(a,b,c);
    printf("%d\n",r3);

}
int add(int x, int y)
{
    return x+y;
}
int minus(int x, int y)
{
    return x-y;
}
int multiply(int x, int y,int z)
{
    return x*y*z;
}
