#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

double power(double X, int n)
{
    return pow(X, n);
}

void swap(int *a, int *b)
{
    *a= *a + *b;
    *b= *a - *b;
    *a= *a - *b;
}

int gcd(int a, int b)
{
    if(a==0)
        return b;
    return gcd(b%a, a);
}

int sumArray(int *A, int n)
{
    int sum= 0;
    for(int i=0; i<n; i++)
    {
        sum+= *A;
        A++;
    }
    return sum;
}

char* remWhiteSpace(char* str)
{
    int i= 0, j= 0; char* nstr= malloc(strlen(str)*sizeof(char));
        while(str[i] != '\0')
    {
        if(str[i] != ' ')
        {
            nstr[j]= str[i];
            j++;
        }
        i++;
    }

    nstr[j]= '\0';
    return nstr;
}

void main()
{
    int X= 7; int n= 4;

    printf("\nValue of X^n is: %lf\n", power(X, n));
    
    printf("X is: %d and n is: %d\n", X, n);
    swap(&X, &n);
    printf("X is: %d and n is: %d\n", X, n);
    swap(&X, &n);

    printf("GCD of X and n is: %d\n", gcd(X, n));
    
    int arr[]= {2, 3, 4, 56, 44, 9};
    int size= sizeof(arr)/sizeof(arr[0]);
    printf("Sum of all array elements: %d\n", sumArray(&arr[0], size));

    char* str= "Remove White Spaces";
    printf("String after removing white spaces: %s", remWhiteSpace(str));
}