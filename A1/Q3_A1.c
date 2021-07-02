#include <stdio.h>

void main()
{
    int N; int T;
    printf("Enter number of inputs: ");
    scanf("%d", &N);
    printf("Give input number: ");      //Enter Numbers using a space
    while(N--)
    {
        scanf("%d", &T);
        printf("%d\n",T);
    }
}
