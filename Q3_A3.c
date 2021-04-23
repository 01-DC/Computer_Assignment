#include <stdio.h>

void main()
{
    int a, b, c;
    printf("Enter three numbers separated by space: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a>=b && a>=c)
        printf("Largest number is: %d", a);
    if(b>=a && b>=c)
        printf("Largest number is: %d", b);
    if(c>=b && c>=a)
        printf("Largest number is: %d", c);
}