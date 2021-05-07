#include <stdio.h>
#include <math.h>

void main()
{
    float a, b, c;
    printf("Enter the value of three constants: ");
    scanf("%f %f %f", &a, &b, &c);
    float D = sqrt(pow(b,2) - (4*a*c))/(2*a);
    float d = (-1*b)/(2*a);
    float x1 = d + D;
    float x2 = d - D;
    printf("The roots for this quadratic equation are: %f %f", x1, x2);

}