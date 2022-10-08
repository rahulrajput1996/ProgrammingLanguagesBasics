#include <stdio.h>
#include <conio.h>
int sum(int a, int b)
{
    return a + b;
}
int greet()
{
    printf("good morning");
    return 1;
}
int main()
{
    int (*ptr)(int, int);
    ptr = &sum;
    int ans = (ptr)(4, 7);
    printf("the sum is %d\n", ans);

    return 0;
}