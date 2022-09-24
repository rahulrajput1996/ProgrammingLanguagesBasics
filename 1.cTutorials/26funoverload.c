#include <stdio.h>
#include <conio.h>
int add(int x, int y)
{
    return x + y;
}
float add(float a, float b)
{
    return a + b;
}

int main()
{
    int p;
    float q;
    p = add(10, 15);
    q = add(10.50, 20.50);
    printf("%d \n", p);
    printf("%f \n", q);
    //printf("hello world\n");
}
