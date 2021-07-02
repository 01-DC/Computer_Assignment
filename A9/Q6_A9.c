#include <stdio.h>

void main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    if(ch>=48 && ch<=57)
        printf("Character is Digit.");
    else if(ch>=65 && ch<=90)
        printf("Character is Uppercase Letter.");
    else if(ch>=97 && ch<=122)
        printf("Character is Lowercase Letter.");
    else
        printf("Character is Special Symbol.");
}