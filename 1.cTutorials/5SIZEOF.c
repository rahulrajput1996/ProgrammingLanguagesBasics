#include <stdio.h>
#include <conio.h>
#include<limits.h>
int main()
{
    short int a;
    // size of all data type in bytes
    printf("SIZE OF short INT IS %d\n", sizeof a);
    printf("SIZE OF signed short IS %d\n", sizeof (signed short));
    printf("SIZE OF unsigned short IS %d\n", sizeof (unsigned short));
    printf("SIZE OF signed int IS %d\n", sizeof (signed int));
    printf("SIZE OF unsigned int IS %d\n", sizeof (unsigned int));
    printf("SIZE OF signed long IS %d\n", sizeof (signed long));
    printf("SIZE OF unsigned long IS %d\n", sizeof (unsigned long));
    printf("SIZE OF signed char IS %d\n", sizeof (signed char));
    printf("SIZE OF unsigned char IS %d\n", sizeof (unsigned char));
    printf("SIZE OF float IS %d\n", sizeof (float));
    printf("SIZE OF double IS %d\n", sizeof (double));
    printf("SIZE OF long double IS %d\n", sizeof (long double));
     // limitation of data types
    printf("signed short min value=%d\n",SHRT_MIN);
    printf("signed short max value=%d\n",SHRT_MAX);
    printf("signed int min value=%d\n",INT_MIN);
    printf("signed int max value=%d\n",INT_MAX);
    printf("signed long min value=%d\n",LONG_MIN);
    printf("signed long max value=%d\n",LONG_MAX);
    printf("signed char min value=%d\n",CHAR_MIN);
    printf("signed char max value=%d\n",CHAR_MAX);
    printf("unsigned short max value=%u\n",USHRT_MAX);
    printf("unsigned int max value=%u\n",UINT_MAX);
    printf("unsigned long max value=%u\n",ULONG_MAX);
    printf("unsigned char max value=%u\n",UCHAR_MAX);    
}