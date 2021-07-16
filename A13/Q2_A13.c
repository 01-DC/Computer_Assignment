#include <stdio.h>

struct employeeInfo
{
    char name[100];
    int code;
    float salary;
    int depNum;
    struct
    {
        int day;
        int month;
        int year;
    }date;
};

void main()
{
    static struct employeeInfo employee[10];

    for(int i=0; i<10; i++)
    {
        printf("Enter Name of employee %d: ", i+1);
        fgets(employee[i].name, 100, stdin);
        printf("Enter Employee code of employee %d: ", i+1);
        scanf("%d", &employee[i].code);
        printf("Enter Salary of employee %d: ", i+1);
        scanf("%f", &employee[i].salary);
        printf("Enter Department number of employee %d: ", i+1);
        scanf("%d", &employee[i].depNum);
        printf("Enter Day Month Year of joining for employee %d in DD MM YYYY format: ", i+1);
        scanf("%d%d%d", &employee[i].date.day, &employee[i].date.month, &employee[i].date.year);
    }

    for(int i=0; i<10; i++)
    {
        if(employee[i].salary>=10000)
        {
        printf("\nName of employee %d is: %s", i+1, employee[i].name);
        printf("Employee code of employee %d is: %d\n", i+1, employee[i].code);
        printf("Salary of employee %d is: %f\n", i+1, employee[i].salary);
        printf("Department number of employee %d is: %d\n", i+1, employee[i].depNum);
        printf("Day Month Year of joining for employee %d is: %d/%d/%d\n", i+1, employee[i].date.day, employee[i].date.month, employee[i].date.year);
        }
    }
}