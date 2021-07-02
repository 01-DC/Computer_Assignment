#include <stdio.h>

void main()
{
    int num;
    printf("Enter number to be converted: ");
    scanf("%d", &num); int d; int size=0; int temp= num;
    while(num)
    {
        size++;
        num = num/10;
    }
    int rnum[size];
    for(int i= 0; i< size; i++)
    {
        d= temp%10;
        rnum[i]= d;
        temp = temp/10;
    }
    for(int i= size-1; i>= 0; i--)
    {
        d = rnum[i];
        switch(d)
        {
            case 1: printf("One ");
                    break;
            case 2: printf("Two ");
                    break;
            case 3: printf("Three ");
                    break;
            case 4: printf("Four ");
                    break;
            case 5: printf("Five ");
                    break;
            case 6: printf("Six ");
                    break;
            case 7: printf("Seven ");
                    break;
            case 8: printf("Eight ");
                    break;
            case 9: printf("Nine ");
                    break;
            case 0: printf("Zero ");                
        }
    }
}