#include <stdio.h>

void main()
{
    int y;
    printf("Enter any year: ");
    scanf("%d", &y);
    if(y%4==0)
    {
        if(y%100==0)
            if(y%400==0)
                printf("The year is Leap.");
            else
                printf("The year is not Leap.");
        else
            printf("The year is Leap.");
        
    }
    else
        printf("The year is not Leap.");
}