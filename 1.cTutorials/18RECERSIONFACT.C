#include <stdio.h>
#include <conio.h>
//int fact(int num2);
int main()
{
    int num, ans;
    int fact(int num2);
    printf("enter a num\n");
    scanf("%d", &num);
    ans = fact(num);
    printf("%d\n", ans);
}
int fact ( int num3)
{
    int ans;
    if (num3 == 0)
        ans = 1;
    else
        ans = num3 * fact(num3 - 1);
    return ans;
}