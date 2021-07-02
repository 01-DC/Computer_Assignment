#include <stdio.h>
#define pi 3.14152
void main()
{
    float r;
    printf("Enter Radius: ");
    scanf("%f", &r);
    printf("Area of circle is: %f\n", (pi*r*r));
    printf("Circumference of circle: %f\n", (2*pi*r));
}