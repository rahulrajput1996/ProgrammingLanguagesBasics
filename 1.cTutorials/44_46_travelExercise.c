#include <stdio.h>
#include <conio.h>
#include <string.h>
struct travelagency
{
    char name[50];
    char divinglicense[50];
    char Route[50];
    int kms;
};

int main()
{
    int n;
    printf("Enter total passenger: ");
    scanf("%d", &n);
    getchar();
    struct travelagency passenger[n];

    for (int i = 0; i < n; i++)
    {
        printf("Give Details of passenger %d\n", i);
        printf("Enter your name:");
        gets(passenger[i].name);

        printf("Enter your divinglicense: ");
        gets(passenger[i].divinglicense);

        printf("Enter your Route: ");
        gets(passenger[i].Route);

        printf("Enter your kms: ");
        scanf("%d", &passenger[i].kms);
        getchar();
    }
    for (int i = 0; i < n; i++)
    {
        printf("\nDetails of passenger %d\n", i);
        printf("your name: ");
        puts(passenger[i].name);
        printf("your divinglicense: ");
        puts(passenger[i].divinglicense);
        printf("your Route: ");
        puts(passenger[i].Route);
        printf("your kms: ");
        printf("%d", passenger[i].kms);
    }

    return 0;
}