#include <stdio.h>
#include <conio.h>
int sum(int a, int b)
{
    return a + b;
}
void greet(int (*fptr)(int, int))
{
    printf("hello\n");
    printf("the sum is %d\n", (*fptr)(3, 6));
    printf("the sum is %d\n", fptr(3, 5));
}
int main()
{
    int (*ptr)(int, int);
    ptr = &sum; // ptr=sum
    greet(ptr);
    return 0;
}