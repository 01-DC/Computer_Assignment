#include <stdio.h>

double power(int a, int b)
{
    double val= 1;
    while(b--)
        val= val*a;
    return val;
}

double fact(int n)
{
    double val= 1;
    if(n==0)
        return 1;
    while(n)
    {
        val= val*n;
        n--;
    }
    return val;
    
}

void main()
{
    char ch; double sum= 0; int x, n;
    printf("Select series: ");
    scanf("%c", &ch);
    printf("Enter value of n: ");
    scanf("%d", &n);
    switch(ch)
    {
        case 'a':   for(int i= 1; i<=n; i++)
                        sum+= i;
                    break;

        case 'b':   printf("Enter value of x: ");
                    scanf("%d", &x);
                    for(int i= 0; i< n; i++)
                        sum+= power(x, i);
                    break;

        case 'c':   printf("Enter value of x: ");
                    scanf("%d", &x);
                    for(int i= 0; i< n; i++)
                        sum+= power(x, i)/ fact(i);
                    break;

        case 'd':   for(int i= 1; i<=n; i++)
                    {
                        if(i%2==0)
                            sum-= i;
                        else
                            sum+= i;
                    }    
                    break;

        case 'e':   for(int i= 1; i<=n; i++)
                        sum+= i*2;
                    break;
    }
    printf("Final sum is: %lf", sum);
}