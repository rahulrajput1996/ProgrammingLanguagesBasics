#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char arr1[50];
    int length1, i;
    printf("enter the string 1\n");
    gets(arr1);
    printf("entered array is:  %s \n", arr1);
    length1 = strlen(arr1);
    for (int i = 0; arr1[i] != '\0'; i++)
    {
        if (arr1[i] >= 65 && arr1[i] <= 90)
        {
            arr1[i] = arr1[i] + 32;
        }
    }
    printf("string is %s\n", arr1);
}
