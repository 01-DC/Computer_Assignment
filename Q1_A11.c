#include <stdio.h>

int reverseInteger(int n)
{
    int r= 0;
    while(n)
    {
        r= r*10 + (n%10);
        n= n/10;
    }
    return r;
}

void main()
{
    int N;
    printf("Enter Integer to reverse: ");
    scanf("%d", &N);
    printf("\nReversed integer is: %d", reverseInteger(N));
}