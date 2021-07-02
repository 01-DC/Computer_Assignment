#include <stdio.h>

void main()
{
    double F;
    printf("Enter Fahrenheit temperature: ");
    scanf("%lf", &F);
    double C = ((F-32)*5)/9;
    printf("Temperature in Celsius is= %lf", C);
}