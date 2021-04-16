#include <stdio.h>

void main()
{
    int M[4][4];
    
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            printf("Enter element of Matrix at row %d and column %d: ", i+1 , j+1);
            scanf("%d", &M[i][j]);
        }
    }

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
}