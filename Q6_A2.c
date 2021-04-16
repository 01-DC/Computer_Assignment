#include <stdio.h>

void main()
{
    int A[4][4]; int B[4][4]; int C[4][4];
    
    printf("Enter all elements for Matrix A with spaces.\n");
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter all elements for Matrix B with spaces.\n");
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
           C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("The resultant Matrix C is:\n");
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}