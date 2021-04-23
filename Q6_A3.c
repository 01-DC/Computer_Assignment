#include <stdio.h>

int quotient(int X, int Y)
{
    return (X/Y);
}

int remain(int X, int Y)
{
    return (X%Y);
}

void main()
{
    int A,B;
    printf("Enter two numbers to calculate quotient and remainder: ");
    scanf("%d %d", &A, &B);
    printf("Quotient is: %d\n", quotient(A, B));
    printf("Remainder is: %d\n", remain(A, B));
}