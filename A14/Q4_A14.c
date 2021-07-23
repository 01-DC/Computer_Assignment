#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void main()
{
    FILE *src= fopen("student_rec.txt", "r");

    char names[10][300];

    char c; int i= 0;
    while(c != EOF)
    {   
        c= fgetc(src);
        int p= 0;
        while(!(isdigit(c)))
        {
            names[i][p]= c;
            c= fgetc(src);
            p++;
        }
        names[i][p]= '\0';
        while(c!='\n' && c!= EOF)
            c= fgetc(src);
        if(c == EOF)
            break;
        i++;
    }

    char* s1; char* s2; char* s= malloc(300);
    for(int i= 0; i< 10; i++)
    {
        for(int j=0; j < 9-i; j++)
        {
            s1= names[j]; s2= names[j+1];
            if(strcmp(s1, s2) > 0)
            {
                strcpy(s, s1);
                strcpy(s1, s2);
                strcpy(s2, s);
            }
        }
    }

    printf("\nSorted names are: \n");
    for(int i=0; i<10; i++)
        printf("%s\n", names[i]);
}