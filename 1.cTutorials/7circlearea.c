#include <stdio.h>
#include <conio.h>
#define PI 3.14
int main()
{
    float radius, area1, area2;
    const float pi = (float)22 / 7;
    printf("enter the radius\n");
    scanf("%f", &radius);
    printf("%15.10f\n", pi);
    printf("%f\n", PI);
    area1 = PI * radius * radius;
    area2 = pi * radius * radius;
    printf("area1=%f\n", area1);
    printf("area2=%15.10f\n", area2);
}
