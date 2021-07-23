#include <stdio.h>

void main()
{
    FILE *inp;
    char inpName[100];
    printf("Enter name of input file: ");
    scanf("%s", inpName);
    inp= fopen(inpName, "r");

    int size= 0;
    char c = fgetc(inp);
    while (c != EOF)
    {
        size++;   
        c = fgetc(inp);
    }

    printf("Size of file in bytes is: %d", size);
}