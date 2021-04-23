#include <stdio.h>

void main()
{
    int A[10];
    printf("Enter 10 elements for array with space: ");
    for(int i=0; i<10; i++)
        scanf("%d", &A[i]);
    printf("Printing the array elements: \n");
    for(int i=0; i<10; i++)
        printf("%d ", A[i]);
}