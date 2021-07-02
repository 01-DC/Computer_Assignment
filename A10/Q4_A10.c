#include <stdio.h>

int large(int r, int c, int arr[r][c])
{
    int max= arr[0][0];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
            if(arr[i][j]>max)
                max= arr[i][j];
    }
    return max;
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

    printf("The largest value is: %d", large(R, C, arr));
}