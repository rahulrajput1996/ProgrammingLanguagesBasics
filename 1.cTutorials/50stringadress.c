#include <stdio.h>
#include <conio.h>
#include<string.h>
int main()
{
    int length;
    char name2[30]="bhola";
    printf("%s\n",name2);
    printf("size %d\n",sizeof ( name2));
    printf("adress %d\n",& name2[0]);
    printf("adress %d\n",& name2[1]);
    printf("adress %d\n",& name2);
    printf("adress %d\n",name2);
    printf("value %c\n",*name2);
    printf("adress %d\n",&name2);

}