#include <stdio.h>
#include <math.h>

void main()
{
    double x, y;
    printf("Enter value of X and Y: ");
    scanf("%lf %lf", &x, &y);
    double A = 4*(pow(x, 2)) + 2*x + 10;
    double B = 5*(pow(x, 3)) + 4*(pow(x*y, 2)) + 4*(pow(y, 3)) + 30;
    printf("Value is: %lf %lf", A, B);
}