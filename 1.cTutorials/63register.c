#include <stdio.h>
#include <conio.h>
//register int a;     error here
int main()
{ 
     int num;
     int sum=0,i;
    printf("enter the number\n");
    scanf("%d",&num);
    for(register int i=1;i<=num;i++)
    {

        sum=sum+i;
    }
   printf("%d\n",sum);
   return 0;
}
