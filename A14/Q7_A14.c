#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    char names[n][300];

    fflush(stdin);
    printf("Enter names in array: \n");
    for(int i= 0; i<n; i++)
        gets(names[i]);

    char* s1; char* s2; char* s= malloc(300);
    for(int i= 0; i< n-1; i++)
    {
        for(int j=0; j < n-1-i; j++)
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

    printf("\nSorted array is: \n");
    for(int i=0; i<n; i++)
        printf("%s\n", names[i]);

}