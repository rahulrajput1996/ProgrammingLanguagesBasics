#include <stdio.h>
#include <conio.h>
#include<string.h>
int main()
{
    int length;
    char name[30],name2[30]="bhola",name3[30];
    printf("enter the name\n");
    gets(name);
    printf("%s\n",name);
    length=strlen(name);
    printf("string length is %d \n",length);
    printf("string in uppercase is %s \n",strupr(name));
    printf("string in lowercase is %s \n",strlwr(name));
    printf("string is %s\n",name2);
    strncpy(name2,strupr(name),3);
    name2[3]='\0';
    strcpy(name3,strlwr(name));
    printf("string is %s\n",name2);
    printf("string is %s\n",name3);
    strcat(name2,name3);
    strcat(name3,strupr(name));
    printf("string is %s\n",name2);
    printf("string is %s\n",name3);
    printf("string is %s\n",name);
    printf("string is %s\n",strrev(name2));
    printf("string is %s\n",strrev(name3));
    printf("string is %s\n",strrev(name));







}