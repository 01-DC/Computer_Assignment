#include <stdio.h>

int gcd(int a, int b)
{
    if(a==0)
        return b;
    return gcd(b%a, a);
}

void main()
{
    int a, b;
    printf("Enter two numbers to find GCD: ");
    scanf("%d %d", &a, &b);
    printf("The GCD is: %d", gcd(a, b));
    
}