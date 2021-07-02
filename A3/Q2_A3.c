#include <stdio.h>

void main()
{
    int N;
    printf("Enter a number to check: ");
    scanf("%d", &N);
    if(N%2==0)
        printf("Number is even.");
    else
        printf("Number is odd.");
}