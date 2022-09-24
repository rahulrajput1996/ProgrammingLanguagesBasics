#include <stdio.h>
#include <conio.h>
#include <string.h>
struct employee
{
    int number;
    char name[50];
    float salary;
} ;
int main()
{
    int *nu;
    int *na;
    float *sa;
    struct employee *em;
    printf("%d\n", sizeof(nu));
    printf("%d\n", sizeof(na));
    printf("%d\n", sizeof(sa));
    printf("%d\n", sizeof(em));
}
