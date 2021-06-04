#include <stdio.h>

void main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements: \n");
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    int temp;
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp= arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= temp;
            }
        }
    }
    printf("The sorted array is: \n");
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);
}