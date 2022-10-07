#include <stdio.h>
#include <conio.h>
#include "59RahulExport.c"
#define PI 3.14
#define square(x) x *x
#define debug mydebug
int main()
{
    // include
    int a = fun(2, 4);
    printf("%d\n", a);
    // define
    float area = PI * square(5);
    printf("%f\n", area);
    // ifdef,undef,ifndef

#ifdef debug
    printf("hello\n");
#endif

#ifndef debug
    printf("good\n");
#endif

#undef debug

#ifndef debug
    printf("bye\n");
#endif

#ifdef debug
    printf("bad\n");
#endif

#if 0
    printf("good morning");
#elif 1
    printf("good afternoon");

#else
    printf("good night");
#endif

    return 0;
}