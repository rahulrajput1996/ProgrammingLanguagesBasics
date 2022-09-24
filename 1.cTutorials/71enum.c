#include <stdio.h>
#include <conio.h>
enum week
{
    sun,
    mon,
    tues = 1,
    wed,
    thrus = 1
};
enum year
{
    jan,
    feb = 10,
    march,
    april
};
void main()
{
    enum week human;
    printf("%d %d %d\n", mon, wed, thrus);
    human = april;
    printf("%d %d %d\n", jan, march, feb);
    printf("%d\n", human + 1);
}