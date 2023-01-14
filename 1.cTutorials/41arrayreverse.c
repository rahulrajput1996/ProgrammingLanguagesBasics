#include <stdio.h>
#include <conio.h>









int main()
{
    int e, i;
    int arr1[7]={10,20,30,40,50,60,70};
    int arr2[7];
    printf("you have entered array \n");
    for (i = 0; i < 7; i++)
    {
        printf("element at position %d  is %d\n", i,arr1[i]);
    }
    for (i = 0; i < 7; i++)
    {
        arr2[i]=arr1[6-i];
    }
    for (i = 0; i < 7; i++)
    {
        arr1[i]=arr2[i];
    }
    printf("reversed array \n");
    for (i = 0; i < 7; i++)
    {
        printf("element at position %d  is %d\n", i,arr1[i]);
    }

}