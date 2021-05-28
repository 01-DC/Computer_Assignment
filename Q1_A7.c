#include <stdio.h>

void printFibo(int n)
{
    int a= 0; int b=1; int c;
    for(int i=1; i<=n; i++)
    {
        c= a+b;
        printf("%d  ", c);
        a= b;
        b= c;
    }
}
void main()
{
    int n;
    printf("Enter number of Fibonacci terms: ");
    scanf("%d", &n);
    printFibo(n);
    
}