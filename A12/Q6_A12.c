#include <stdio.h>

void main()
{
    char str[300];
    printf("Enter any string: ");
    fgets(str, 300, stdin);

    char* s= str;

    int len= 0;
    while(*s!='\n')
    {
        len++;
        s++;
    }

    printf("Length of string: %d", len);
}