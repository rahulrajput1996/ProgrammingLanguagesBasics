#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    char name[20];
    char givenstr[] = {'r', 'p', 's'};
    int humanscore = 0;
    int computerscore = 0;
    int tie = 0;
    int games = 0;
    char humancharacter;
    char computercharacter;

    printf("enter your name: ");
    scanf("%s", name);
    getchar();

    while (1)
    {

        int randomNumber = rand() % 3 + 0;
        printf("choose r/p/s and press q for quit:");
        scanf("%c", &humancharacter);
        getchar();
        if (humancharacter == 'q')
        {
            printf("total games played %d\n", games);
            printf("%s won %d\n", name, humanscore);
            printf("computer won %d\n", computerscore);
            printf("None won/loss %d\n", tie);
            break;
        }
        printf("random number is %d\n", randomNumber);

        if ((humancharacter == 'r' && givenstr[randomNumber] == 'p') || (humancharacter == 's' && givenstr[randomNumber] == 'r') || (humancharacter == 'p' && givenstr[randomNumber] == 's'))
        {
            computerscore++;
            games++;
            printf("computerwin\n");
        }
        else if ((humancharacter == 'r' && givenstr[randomNumber] == 's') || (humancharacter == 'p' && givenstr[randomNumber] == 'r') || (humancharacter == 's' && givenstr[randomNumber] == 'p'))
        {
            humanscore++;
            games++;
            printf("Human win\n");
        }
        else
        {
            games++;
            tie++;
            printf("match tie\n");
        }
    }

    return 0;
}