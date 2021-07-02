#include <stdio.h>

void main()
{
    int count[5]= {0, 0, 0, 0, 0}; //a, e, i, o, u
    char str[100];
    printf("Enter string: ");
    gets(str);
    
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='a' || str[i]=='A')
            count[0]++;
        if(str[i]=='e' || str[i]=='E')
            count[1]++;
        if(str[i]=='i' || str[i]=='I')
            count[2]++;
        if(str[i]=='o' || str[i]=='O')
            count[3]++;
        if(str[i]=='u' || str[i]=='U')
            count[4]++;
    }

    printf("\nNumber of A: %d", count[0]);
    printf("\nNumber of E: %d", count[1]);
    printf("\nNumber of I: %d", count[2]);
    printf("\nNumber of O: %d", count[3]);
    printf("\nNumber of U: %d", count[4]);
}