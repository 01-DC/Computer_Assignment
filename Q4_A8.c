#include <stdio.h>

void main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n]; int arrcpy[n];
    printf("Enter array elements: \n");
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    for(int i=0; i<n; i++)
        arrcpy[i]= arr[i];
    
    printf("The two arrays are: \n");
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    for(int i=0; i<n; i++)
        printf("%d ", arrcpy[i]);
}