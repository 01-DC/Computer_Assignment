#include <stdio.h>

void convert(int n, int base)
{
    int bin[32];
    int i= 0;
    for(i=0; n!=0; i++)
    {
        bin[i]= n%base;
        n= n/base;
    }
    printf("Equivalent is: ");
    while(i--)
    {
        if(bin[i]>9)
        {
            printf("%c ", bin[i] + 55);
        }
        else
            printf("%d ", bin[i]);
    }

}

void main()
{
    int n;
    printf("Enter any integer: ");
    scanf("%d", &n);
    int b;
    printf("Enter base: ");
    scanf("%d", &b);
    convert(n, b);
}