#include <stdio.h>

void main()
{
    char a;
    printf("Enter any character: ");
    scanf("%c", &a);
    a = a + 1;
    printf("Next character is: %c\n", a);
    printf("ASCII value is: %d\n", a);
}