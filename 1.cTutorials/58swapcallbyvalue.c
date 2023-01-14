#include <stdio.h>
#include <conio.h>
void swap(int,int);
int main()
{
    int a, b;
    printf("enter two words\n");
    scanf("%d %d", &a, &b);
    swap(a, b);
    printf("%d %d\n", a, b);
    //printf("%d %d\n", x, y);
    
}
void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("%d %d\n", x, y);
}
