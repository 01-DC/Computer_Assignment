#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int subs(char* s1, char* s2)
{
    int sz1= strlen(s1); int sz2= strlen(s2);
    if(sz1<sz2)
        return 0;
    int i=0, j=0; int flag= 0;
    while(s1[i]!='\0')
    {
        if(s1[i]!=s2[j])
            j=0;    

        if(s1[i]==s2[j])
            j++;
        
        if(j==sz2)
            return 1;
            
        i++;
    }
    return 0;
}
void main()
{
    char* s1= malloc(256); char* s2= malloc(256);
    printf("Enter String 1: ");
    scanf("%s", s1);
    printf("Enter String 2 to search in String 1: ");
    scanf("%s", s2);
    printf("\n");

    if(subs(s1, s2))
        printf("String 1 has substring String 2.");
    else
        printf("String 1 does not have substring String 2.");
}