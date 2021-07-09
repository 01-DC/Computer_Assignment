#include <stdio.h>

void main()
{
    int N;
    printf("Enter size of array: ");
    scanf("%d", &N);

    int arr1[N]; int arr2[N];
    printf("Enter array elements: ");

    for(int* i= &arr1[0]; i!=&arr1[N]; i++)
        scanf("%d", i);

     int* pos2= &arr2[0];
    for(int* i= &arr1[0]; i!=&arr1[N]; i++)
    {
        *pos2= *i;
        pos2++;
    }

    printf("Copied array is: ");
    for(int* i= &arr2[0]; i!=&arr2[N]; i++)
        printf("%d ", *i);
}