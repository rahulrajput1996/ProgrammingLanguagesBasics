#include <stdio.h>
#include <conio.h>
void main()
{
    int arr[3];
    printf("enter the array\n");
    for (int i = 0; i <= 2; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 1; ; i ++)
    {
        
    
            
            if ((i % arr[0] == 0)&&(i % arr[1] == 0)&&(i % arr[2] == 0))
            {
                printf("%d", i);
            }
    
    }
}