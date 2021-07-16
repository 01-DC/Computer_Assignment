#include <stdio.h>

void main()
{
    FILE *inp, *out;
    char inpName[100];
    printf("Enter name of input file: ");
    scanf("%s", inpName);
    inp= fopen(inpName, "r");
    char outName[100];
    printf("Enter name of output file: ");
    scanf("%s", outName);
    out= fopen(outName, "w");

    char c = fgetc(inp);
    while (c != EOF)
    {
        fputc(c, out);
        c = fgetc(inp);
    }

    printf("File copied.");

    fclose(inp); fclose(out);
}