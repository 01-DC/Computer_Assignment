#include <stdio.h>

void main()
{
    int a, b;
    printf("Enter two numbers separated by space: ");
    scanf("%d %d", &a, &b);
    printf("Initial input: %d %d\n", a, b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("After swapping: %d %d\n", a, b);
}