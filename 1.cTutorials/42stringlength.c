#include <stdio.h>
#include <conio.h>
#include<string.h>
int main()
{
    char arr[50];
    int length,i;
    printf("enter the string\n");
    gets(arr);
    printf("entered array is:  %s \n", arr);
    for ( i = 0; arr[i] != '\0'; i++)
    {
    }
    length=i;
    printf("the length of string is %d\n",length);
    printf("the length of string is %d\n",strlen(arr));

}