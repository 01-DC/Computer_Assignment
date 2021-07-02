#include <stdio.h>
int stringLength(char src[])
{
    int sz= 0;
    for(int i= 0; src[i]!='\0'; i++)
        sz++;
    return sz-1; //-1 because fgets takes \n also in string as input
}

void main()
{
    char str[100];
    printf("Enter any string: ");
    fgets(str, 100, stdin);
    printf("Number of characters in string: %d", stringLength(str));
}