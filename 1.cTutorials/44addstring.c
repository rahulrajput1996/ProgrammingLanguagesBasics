#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char arr1[50], arr2[50];
    int length1, length2, i, j = 0;
    printf("enter the string 1\n");
    gets(arr1);
    printf("entered array is:  %s \n", arr1);
    length1 = strlen(arr1);
    printf("enter the string 2\n");
    gets(arr2);
    printf("entered array is:  %s \n", arr2);
    length2 = strlen(arr2);
    for (i = length1; i <= (length1 + length2); i++)
    {
        arr1[i] = arr2[j];
        j++;
    }
    printf("final array is:%s\n", arr1);

}
