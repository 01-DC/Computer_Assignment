#include <stdio.h>

void main()
{
    int N;
    printf("Enter size of array: ");
    scanf("%d", &N);

    int arr[N];
    printf("Enter array elements: ");
    
    for(int* pos= &arr[0]; pos!=&arr[N]; pos++)
        scanf("%d", pos);

    int sum= 0;
    for(int* pos= &arr[0]; pos!=&arr[N]; pos++)
        sum+= *pos;

    printf("Sum of all values is: %d", sum);
}