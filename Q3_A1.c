#include <stdio.h>

void main()
{
    int N; int T;
    printf("Enter number of inputs: ");
    scanf("%d", &N);
    while(N--)
    {
        printf("Give input number: ");
        scanf("%d", &T);
        printf("%d\n",T);
    }
}