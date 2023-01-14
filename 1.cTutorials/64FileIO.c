#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *ptr = NULL;
    // creating and writing a file
    char Stringletters[100] = "my name is khan\ni am good boy as well";
    ptr = fopen("mycontent.txt", "w");
    fprintf(ptr, "%s", Stringletters);
    fclose(ptr);
    // reading from a file
    ptr = fopen("mycontent.txt", "r");
    fscanf(ptr, "%s", Stringletters);
    printf("%s", Stringletters);
    fclose(ptr);
    return 0;
}