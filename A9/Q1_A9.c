#include <stdio.h>

void main()
{
    char str1[100]; char str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    int i= 0; int flag= 0;
    while(str1[i]!='\0' || str2[i]!='\0')
    {
        if(str1[i]!=str2[i])
            flag= 1;
        
        i++;
    }

    if(flag)
        printf("Strings are not equal.");
    else
        printf("Strings are equal.");
}