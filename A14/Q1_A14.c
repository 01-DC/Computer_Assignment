#include <stdio.h>

void main()
{
    FILE *inp;
    char inpName[100];
    printf("Enter name of input file: ");
    scanf("%s", inpName);
    inp= fopen(inpName, "r");

    int line= 1;
    printf("%d. ", line);
    char c = fgetc(inp);
    while (c != EOF)
    {
        if(c=='\n')
            printf("\n%d. ", ++line);
        else
            printf("%c", c);
        
        c = fgetc(inp);
    }
}