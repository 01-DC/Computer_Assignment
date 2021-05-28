#include <stdio.h>

void main()
{
    int sum= 0;
    for(int i= 20; i<= 30; i++)
    {
        if(i%2==0 && i%3==0)
            sum+= i;
    }
    printf("The sum is: %d", sum);
}