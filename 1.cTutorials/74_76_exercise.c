#include <stdio.h>
#include <conio.h>
#include <math.h>
#define PI 22.0 / 7.0
float Edistance(float x1, float y1, float x2, float y2)
{
    float d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("the distance is %f\n", d);
    return d;
}
float CircleArea(float (*fptr)(float, float, float, float))
{
    float a, b, c, d, area, radius;
    printf("enter first point coordinate\n");
    scanf("%f %f", &a, &b);
    printf("enter second point coordinate\n");
    scanf("%f %f", &c, &d);
    radius = fptr(a, b, c, d);
    area = PI * pow(radius, 2);
    printf("the area of circle is %f\n", area);
    return area;
}
int main()
{
    float (*ptr)(float, float, float, float);
    ptr = &Edistance;
    float ans = CircleArea(ptr);
    printf("the area of circle is %f\n", ans);
    return 0;
}