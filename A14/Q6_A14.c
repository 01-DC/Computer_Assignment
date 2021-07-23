#include <stdio.h>

void main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int prime[n+1];

    for(int i = 2; i <= n; i++)
        prime[i] = i;

    int i= 2, j;
    while((i*i) <= n)
    {
        if(prime[i] != 0)
        {
            for(j= 2; j< n; j++)
            {
                if(prime[i]*j > n)
                    break;
                else
                    prime[prime[i]*j]= 0;
            }
        }
        i++;
    }

    printf("Prime factors for %d are: \n", n);
    for(i= 2; i<=n; i++)
    {
        if(prime[i]!=0)
        {
            while(n%prime[i]==0)
            {
                printf("%d ", prime[i]);
                n= n/prime[i];
            }
        }
    }
}