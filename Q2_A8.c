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
    int val;
    printf("Enter value to search in array: ");
    scanf("%d", &val);
    int flag= -1;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==val)
            flag= i;
    }
    if(flag>=0)
        printf("Value found in array at index: %d", flag);
    else
        printf("Value not found in array");
}