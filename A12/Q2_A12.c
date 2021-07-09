#include <stdio.h>

void swap(int *a, int *b)
{
    *a= *a + *b;
    *b= *a - *b;
    *a= *a - *b;
}

void main()
{
    int A;
    printf("Enter first value: ");
    scanf("%d", &A);
    int B;
    printf("Enter second value: ");
    scanf("%d", &B);

    printf("\nValues before swap:\nA: %d\nB: %d", A, B);

    swap(&A, &B);

    printf("\nValues after swap:\nA: %d\nB: %d", A, B);
}