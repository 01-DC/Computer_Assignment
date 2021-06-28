#include <stdio.h>
#include <string.h>

void large(int r, int c, int arr[r][c])
{
    int maxR[r]; int maxC[c];
    memset(maxR, 0, r*sizeof(int)); memset(maxC, 0, c*sizeof(int));
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {   if(arr[i][j]>maxR[i])
                maxR[i]= arr[i][j];
            if(arr[i][j]>maxC[j])
                maxC[j]= arr[i][j];
        }
    }

    printf("\nMaximum values by row: ");
    for(int i=0; i<r; i++)
        printf(" %d", maxR[i]);

    printf("\nMaximum values by column: ");
    for(int j=0; j<c; j++)
        printf(" %d", maxC[j]);

}

void main()
{
    int R, C;
    printf("Enter number of rows: ");
    scanf("%d", &R);
    printf("Enter number of columns: ");
    scanf("%d", &C);
    int arr[R][C];

    printf("Enter array elements: ");
    for(int i=0; i<R; i++)
    {
        for(int j=0; j<C; j++)
            scanf("%d", &arr[i][j]);
    }

    large(R, C, arr);
}