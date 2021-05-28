#include <stdio.h>

void main()
{
    char ch; int n;
    printf("Select pattern to print: ");
    scanf("%c", &ch);
    printf("Enter number of rows: ");
    scanf("%d", &n);
    int num;
    switch (ch)
    {
        case 'a':
                for(int r= 1; r<=n; r++)
                {
                    for(int sp= n-r; sp>=1; sp--)
                        printf("  ");
                    for(int str= r; str>=1; str--)
                        printf("* ");
                    printf("\n");
                }
                break;
        case 'b':
                num= 0;
                for(int r=1; r<=n; r++)
                {
                    for(int c=1; c<=r; c++)
                    {
                        printf("%d ", num);
                        num++;
                    }
                    printf("\n");
                }
                break;
        case 'c':
                num= 1;
                for(int r=1; r<=n; r++)
                {
                    for(int sp= n-r; sp>=1; sp--)
                        printf("  ");
                    for(int c=1; c<=(2*r-1); c++)
                    {
                        printf("%d ", num);
                        num++;
                    }
                    printf("\n");
                }
                break;
        case 'd':
                num= 65;
                for(int r=1; r<=n; r++)
                {
                    for(int c=1; c<=r; c++)
                    {
                        printf("%c ", num);
                        num++;
                    }
                    printf("\n");
                }
                break;
        default:
                printf("Invalid Choice!");
                break;
    }
}