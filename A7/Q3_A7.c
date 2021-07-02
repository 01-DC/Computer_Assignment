#include <stdio.h>

void main()
{
    int n;
    printf("Enter any positive number to check power of 2: ");
    scanf("%d", &n);
    if(n<=1)
        printf("Not a power of 2\n");
    else
    {
        while(n)
        {
            if(n%2==1 && n!=1)
            {
                printf("Not a power of 2\n");
                break;
            }
            n= n/2;
        }
        if(n==0)
            printf("Power of 2\n");
    }
}