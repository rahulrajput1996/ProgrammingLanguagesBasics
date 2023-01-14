#include <stdio.h>
#include <conio.h>
int main()
{
    int num,i,P;
    printf("ENTER A NUMBER FOR WHICH YOU WANT TABLE\n");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        P=num*i;
        printf("%d * %d = %d\n",num,i,P);
    }
}