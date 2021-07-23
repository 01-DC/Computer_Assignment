#include <stdio.h>

void main()
{
    int arr1[10]= {234, 42, 1254, 134345, 12, 541, 54, 874, 155, 69};
    int arr2[10]= {234, 42, 1254, 134345, 12, 541, 54, 874, 155, 69};

    int n= 10;
    for(int i= 0; i< n-1; i++)
    {
        for(int j=0; j < n-1-i; j++)
        {
            if(arr1[j] > arr1[j+1])
            {
                int temp= arr1[j];
                arr1[j]= arr1[j+1];
                arr1[j+1]= temp;
            }
        }
    }

    int pos;
    for(int i= 0; i<n-1; i++)
    {
        pos= i;
        for(int j= i+1; j<n; j++)
        {
            if(arr2[j]< arr2[pos])
                pos= j;
        }
        int temp= arr2[i];
        arr2[i]= arr2[pos];
        arr2[pos]= temp;
    }

    printf("\nArray sorted with Bubble sort: \n");
    for(int i=0; i<n; i++)
        printf("%d ", arr1[i]);

    printf("\n\nArray sorted with Selection sort: \n");
    for(int i=0; i<n; i++)
        printf("%d ", arr2[i]);
}