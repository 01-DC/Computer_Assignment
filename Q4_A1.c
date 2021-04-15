#include <stdio.h>

void main()
{
    int N; int T; int sum = 0;
    printf("Enter number of inputs: ");
    scanf("%d", &N);
    while(N--)
    {
        printf("Give input number: ");
        scanf("%d", &T);
        sum += T;
    }
    printf("Sum of all input numbers = %d",sum);
}