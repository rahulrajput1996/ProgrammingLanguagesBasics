#include <stdio.h>
#include <conio.h>
int main()
{
    int num, reminder = 0;
    printf("enter a number\n");
    scanf("%d", &num);
    for (; num > 0;)
    {
        reminder = reminder + (num % 10);
        num = num / 10;
    }
    //num=num+reminder;
    printf("the sum of all digits is %d \n",reminder);
}
