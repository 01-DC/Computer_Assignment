#include <stdio.h>

void main()
{
    int N;
    printf("Enter number of students: ");
    scanf("%d", &N);
    float M;
    while(N--)
    {
        printf("\nEnter marks: ");
        scanf("%f", &M);
        printf("Grade Assigned: ");
        if(M>=0 && M<50)
            printf("F");
        if(M>=50 && M<60)
            printf("C");
        if(M>=60 && M<70)
            printf("B");
        if(M>=70 && M<80)
            printf("B+");
        if(M>=80 && M<90)
            printf("A");
        if(M>=90 && M<=100)
            printf("A+");
        if(M<0 || M>100)
            printf("Invalid Marks.");
        printf("\n");
    }
}