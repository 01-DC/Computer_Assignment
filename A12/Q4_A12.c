#include <stdio.h>

void swap(int *a, int *b)
{
    *a= *a + *b;
    *b= *a - *b;
    *a= *a - *b;
}

void main()
{
    int N;
    printf("Enter size of array: ");
    scanf("%d", &N);

    int arr1[N]; int arr2[N];
    printf("Enter array 1 elements: ");
    for(int* i= &arr1[0]; i!=&arr1[N]; i++)
        scanf("%d", i);

    printf("Enter array 2 elements: ");
    for(int* i= &arr2[0]; i!=&arr2[N]; i++)
        scanf("%d", i);

    for(int i=0; i<N; i++)
        swap(&arr1[i], &arr2[i]);

    printf("\nArray 1 elements after swap: ");
    for(int* i= &arr1[0]; i!=&arr1[N]; i++)
        printf("%d ", *i);

    printf("\nArray 2 elements after swap: ");
    for(int* i= &arr2[0]; i!=&arr2[N]; i++)
        printf("%d ", *i);

}