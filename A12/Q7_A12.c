#include <stdio.h>

char* strcopy(char* dest, char* src)
{
    while(*src!='\0')
    {
        *dest= *src;
        dest++;
        src++;
    }

    *dest= '\0';
    return dest;
}

void main()
{
    char str[300];
    printf("Enter any string: ");
    fgets(str, 300, stdin);

    char destination[300];
    
    strcopy(destination, str);

    printf("Copied string is: %s", destination);
}