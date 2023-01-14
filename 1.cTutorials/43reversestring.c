#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char arr[50];
    int length, count,i;
    char temp;
    printf("enter the string\n");
    gets(arr);
    printf("entered array is:  %s \n", arr);
    length = strlen(arr);
    count=length;
    for (i = 0; i < (length/2); i++)
    {
        temp = arr[count-1];
        arr[count-1] = arr[i];
        arr[i] = temp;
        count--;
    }
    printf("reversed array is:  %s \n", arr);

}