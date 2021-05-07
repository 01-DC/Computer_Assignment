#include <stdio.h>

void main()
{
    int n; int sum =0;
    printf("Enter any number: ");
    scanf("%d", &n);
    while(n)
    {
        sum = sum + (n%10);
        n = n/10;
    }
    printf("Sum of digits: %d", sum);
}
