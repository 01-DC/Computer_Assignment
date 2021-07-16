#include <stdio.h>

struct bank
{
    char name[100];
    long acno;
    float bal;
}customers[20];

void printNames()
{
    printf("Details of customers with balance below Rs.100 is: \n");
    for(int i= 0; i<20; i++)
    {
        if(customers[i].bal<100)
        {
            printf("\nCustomer number: %d\n", i+1);
            printf("Account number: %ld\n", customers[i].acno);
            printf("Name: %s\n", customers[i].name);
        }
    }
}

char* checkBal(long ac, float amt, int code)
{
    if(code==1)
        return "Balance is sufficient.";
    else
    {
        int i;
        for(i= 0; i<20; i++)
            if(customers[i].acno==ac)
                break;

        if(customers[i].bal<amt)
            return "The balance is insufficient for specified withdrawal.";
        else
            return "Balance is sufficient.";    
    }
}

void main()
{
    for(int i=0; i<20; i++)
    {
        fflush(stdin);
        printf("Enter name of customer %d: ", i+1);
        fgets(customers[i].name, 100, stdin);
        printf("Enter Account number of customer %d: ", i+1);
        scanf("%ld", &customers[i].acno);
        printf("Enter balance of customer %d: ", i+1);
        scanf("%f", &customers[i].bal);
    }

    printNames();

    long ac; float amt; int code;
    printf("Enter account number to make transaction: ");
    scanf("%ld", &ac);
    printf("Enter amount for transaction: ");
    scanf("%f", &amt);
    printf("Enter 1 for deposit and 0 for withdrawal: ");
    scanf("%d", &code);
    printf("\n%s", checkBal(ac, amt, code));
}