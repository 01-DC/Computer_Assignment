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
    int max= arr[0]; int min= arr[0]; double sum= 0; int sumOdd= 0;
    for(int i=n-1; i>=0; i--)
    {
        if(arr[i]>max)
            max= arr[i];
        if(arr[i]<min)
            min= arr[i];
        sum+= arr[i];
        if(arr[i]%2==1)
            sumOdd+= arr[i];
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Maximum value in array: %d\n", max);
    printf("Minimum value in array: %d\n", min);
    printf("Average of all elements in array: %lf\n", sum/n);
    printf("Sum of odd values in array: %d\n", sumOdd);
}