#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *ptr;
    // crating and writing in a file
    ptr = fopen("myinput.txt", "w");
    fputc('R', ptr);
    fputs("my name is khan", ptr);
    fclose(ptr);

    // reading from a file
    ptr = fopen("myinput.txt", "r");

    char mychar = fgetc(ptr);
    printf("%c\n", mychar);
    mychar = fgetc(ptr);
    printf("%c\n", mychar);

    char mystring[100];
    fgets(mystring, 5, ptr);
    printf("%s\n", mystring);

    fclose(ptr);
    return 0;
}