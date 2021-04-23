#include <stdio.h>

void main()
{
    char name[] = "Devanshu Chatterjee"; int N;
    printf("Enter number of prints: ");
    scanf("%d", &N);
    while(N--)
        printf("%s\n", name);
}