#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* revWord(char* s)
{
    int size= strlen(s)-1;
    char* rstr= malloc(300); int i= 0;
    for(int j= size; j>=0; j--)
    {
        rstr[i++]= s[j];
    }
    rstr[i]= '\0';
    return rstr;
}

void revString(char str[])
{
    char* word= malloc(300); int j= 0; char rev[300]; memset(rev, 0, sizeof(rev));
    for(int i= 0; str[i]!='\0'; i++)
    {
        if(str[i]==' ')
        {
            word[j]= '\0';
            j= 0;
            word= revWord(word);
            strcat(rev, word);
            strcat(rev, " ");
            continue;
        }
        word[j]= str[i];
        j++;
    }
    printf("%s", rev);
}

void main()
{
    char str[300];
    printf("Enter string to reverse: ");
    gets(str);
    strcat(str, " ");
    revString(str);    
}