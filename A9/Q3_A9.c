#include <stdio.h>
#include <string.h>

void main()
{
    char str[100];
    printf("Enter string: ");
    gets(str);

    char rstr[100];
    strcpy(rstr, str);

    strrev(rstr);

    if(strcmp(str, rstr))
        printf("String is not palindrome.");
    else
        printf("String is palindrome.");
}