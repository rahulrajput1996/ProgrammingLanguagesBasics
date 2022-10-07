#include <stdio.h>
#include <conio.h>
int main()
{
    printf("The DATE is %s\n", __DATE__);
    printf("The TIME is %s\n", __TIME__);
    printf("The FILE is %s\n", __FILE__);
    printf("The LINE is %d\n", __LINE__);
    printf("The STDC is %d\n", __STDC__);
    return 0;
}