#include <stdio.h>

void main()
{
    FILE *dest, *src;
    char destName[100];
    printf("Enter name of Destination file: ");
    scanf("%s", destName);
    dest= fopen(destName, "a");

    char srcName[100];
    printf("Enter name of Source file: ");
    scanf("%s", srcName);
    src= fopen(srcName, "r");

    fseek(dest, 0L, SEEK_END);

    char c = fgetc(src);
    while (c != EOF)
    {
        fputc(c, dest);
        c = fgetc(src);
    }

    printf("Files merged.");

}