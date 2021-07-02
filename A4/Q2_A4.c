#include <stdio.h>

void main()
{
    char choice; double C, F;
    printf("\n\nPress C to get Celsius value and F to get Fahrenheit value: ");
    scanf("%c", &choice);
    switch(choice)
    {
        case 'F': 
                printf("\nEnter Celsius temperature: ");
                scanf("%lf", &C);
                double F = 9*C/5 + 32;
                printf("Temperature in Fahrenheit is= %lf\n", F);
            break;
        case 'C': 
                printf("\nEnter Fahrenheit temperature: ");
                scanf("%lf", &F);
                double C = ((F-32)*5)/9;
                printf("Temperature in Celsius is= %lf\n", C);
            break;
        default: printf("\nInvalid Input!\n");
    }
}