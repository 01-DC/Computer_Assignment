#include <stdio.h>

int isLeap(int y)
{
    if(y%4==0)
    {
        if(y%100==0)
            if(y%400==0)
                return 1;
            else
                return 0;
        else
            return 1;
    }
    else
        return 0;
}

void main()
{
    int Days[13]= {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int D, M, Y;
    printf("Enter Day: ");
    scanf("%d", &D);
    printf("Enter Month: ");
    scanf("%d", &M);
    printf("Enter Year: ");
    scanf("%d", &Y);
    int flag= 0;
    if(Y>=1 && M>=1 && M<=12 && D>=1 && D<=31)
    {
        if(isLeap(Y) && M==2)
        {
            if(D>=1 && D<=29)
                flag= 1;
        }
        else
        {
            if(D>=1 && D<=Days[M])
                flag= 1;
        }
    }
    if(flag)
        printf("Entered date is valid.");
    else
        printf("Entered date is not valid.");
}