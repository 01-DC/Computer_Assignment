#include <stdio.h>

void main()
{
    int n;
    printf("Enter any decimal integer: ");
    scanf("%d", &n);
    int bin[32];
    int i= 0;
    for(i=0; n!=0; i++)
    {
        bin[i]= n%2;
        n= n/2;
    }
    printf("Binary equivalent is: ");
    while(i--)
        printf("%d", bin[i]);

}