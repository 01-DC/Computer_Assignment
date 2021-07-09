#include <stdio.h>

void main()
{
    char str1[100];
    char str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    
    char* s1= str1; char* s2= str2;
    int i= 0; int flag= 0;
    while(*s1!='\0' || *s2!='\0')
    {
        if(*s1!=*s2)
            flag= 1;
        
        i++;
        s1++;
        s2++;
    }

    if(flag)
        printf("Strings are not equal.");
    else
        printf("Strings are equal.");
}