#include <stdio.h>
#include <conio.h>
int main()
{
    int num, a, b, term, i;
    a = 0, b = 1;
    printf("enter a num which position you want a term\n");
    scanf("%d", &num);
    for (i =1; i <= num; i++)
    {
       
        printf("%d\t", a);
        term = a + b;
        a = b;
        b = term;
    }

}
