#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* rev(char* s)
{
    int size= strlen(s)-2;
    char* rstr= malloc(255); int i= 0;
    for(int j= size; j>=0; j--)
    {
        rstr[i++]= s[j];
    }
    rstr[i]= '\0';
    return rstr;
}

void main()
{
    char str[100];
    printf("Enter any string: ");
    fgets(str, 100, stdin);
    char* s= str;
    printf("\nThe reversed string is: %s\n", rev(s));
}