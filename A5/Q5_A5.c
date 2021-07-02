#include <stdio.h>
#include <ctype.h>

void main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    if(islower(ch))
        printf("%c", toupper(ch));
    if(isupper(ch))
        printf("%c", tolower(ch));
    if(!(isalpha(ch)))
        printf("%c", ch);
}