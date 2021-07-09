#include <stdio.h>
#include <stdlib.h>

void main()
{
    char str1[300];
    printf("Enter first string: ");
    fgets(str1, 300, stdin);
    char str2[300];
    printf("Enter second string: ");
    fgets(str2, 300, stdin);

    char str[600]; char* pstr= str;
    char* s1= str1; char* s2= str2;
    while(*s1!='\n')
    {
        *pstr= *s1;
        pstr++; s1++;
    }

    while(*s2!='\n')
    {
        *pstr= *s2;
        pstr++; s2++;
    }
    
    *pstr= '\0';
    printf("Concatenated string is: %s", str);
}