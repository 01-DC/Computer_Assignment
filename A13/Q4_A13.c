#include <stdio.h>

void main()
{
    FILE *f1, *f2;
    char f1Name[100];
    printf("Enter name of first file: ");
    scanf("%s", f1Name);
    f1= fopen(f1Name, "r");
    char f2Name[100];
    printf("Enter name of second file: ");
    scanf("%s", f2Name);
    f2= fopen(f2Name, "r");

    int flag= 1;
    char c1 = fgetc(f1); char c2 = fgetc(f2);
    while (c1 != EOF || c2 != EOF)
    {
        if(c1 != c2)
            flag= 0;

        c1 = fgetc(f1);
        c2 = fgetc(f2);
    }

    printf("%d", flag);

    fclose(f1); fclose(f2);
}