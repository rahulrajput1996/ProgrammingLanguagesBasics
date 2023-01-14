#include <stdio.h>
#include <conio.h>
#include <string.h>
// int ispalindrome(int num)
// {
//     char mystr[10];
//     sprintf(mystr,"%d", num);
// }
int main()
{
    int num1, num2, sum = 0, r;
    printf("enter a number\n");
    scanf("%d", &num1);
    num2 = num1 + 0;
    while (num1 > 0)
    {
        r = num1 % 10;
        sum = sum * 10 + r;
        num1 = num1 / 10;
    }
    printf("new number is %d\n", sum);
    if (sum == num2)
        printf("yes: number is palindrome\n");
    else
        printf("no: number is not palindrome\n");

    // ispalindrome(num1);
}