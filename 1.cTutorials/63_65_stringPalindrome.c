#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char mystr[40];
    char mystr2[40];
    printf("enter your string: ");
    gets(mystr);
    int length = strlen(mystr);
    int j = 0;
    for (int i = length - 1; i >= 0; i--)
    {
        char temp = mystr[i];
        mystr2[j] = temp;
        j++;
    }
    mystr2[length] = '\0';

    printf("Reversed string is  ");
    puts(mystr2);

    if (strcmp(mystr2, mystr))
    {
        printf("string is not palindrome");
    }
    else
    {
        printf("string is  palindrome");
    }

    return 0;
}