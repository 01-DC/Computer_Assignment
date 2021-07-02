#include <stdio.h>

int recurSum(int n)
{
    if(n==1)
        return 1;
    return n + recurSum(n-1);
}

void main()
{
    printf("\nSum of first 20 natural numbers is: %d\n", recurSum(20));
}