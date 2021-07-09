#include <stdio.h>

void main()
{
    int N;
    printf("Enter size of array: ");
    scanf("%d", &N);

    int arr[N]; int revArr[N];
    printf("Enter array elements: ");
    
    for(int* pos= &arr[0]; pos!=&arr[N]; pos++)
        scanf("%d", pos);

    
    int* pos2= &revArr[0];
    for(int* pos1= &arr[N-1]; pos1!=&arr[0]; pos1--)
    {
        *pos2= *pos1;
        pos2++;
    }

    *pos2= arr[0];

    printf("\nArray after reversing: ");
    for(int* i= &revArr[0]; i!=&revArr[N]; i++)
        printf("%d ", *i);
}