#include <stdio.h>
#include <conio.h>
char arr1[50];
int main()
{
    int i;
    char arr2[30];
    char arr3[] = {'h', 'a', 'r', 'i', '\0'};
    char arr4[14] = "gopal krishan";
    printf("enter the arr1\n");
    gets(arr1);
    printf("enter the arr2\n");
    scanf("%s", arr2);
    printf("%s\n", arr1);
    printf("%s\n", arr2);
    printf("%s\n", arr3);
    printf("%s\n", arr4);
}