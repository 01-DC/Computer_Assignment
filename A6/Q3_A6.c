#include <stdio.h>

void main()
{
    int x, y;
    printf("Enter base and power: ");
    scanf("%d %d", &x, &y);
    int val= 1;
    while(y--)
        val= val*x;
    printf("Answer is: %d", val);
}