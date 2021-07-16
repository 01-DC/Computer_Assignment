#include <stdio.h>

struct college
{
    char name[100];
    char dep[100];
    char course[100];
    int roll;
    int year;
}student[20];

void printNames(int y)
{
    printf("Students who joined in year %d are: \n", y);
    for(int i= 0; i<20; i++)
    {
        if(student[i].year == y)
            printf("%s", student[i].name);
    }
}

void printData(int r)
{
    printf("Data of student with roll number %d is: \n", r);
    int i;
    for(i= 0; i<20; i++)
        if(student[i].roll == r)
            break;
    printf("Name: %s", student[i].name);
    printf("Department: %s", student[i].dep);
    printf("Course: %s", student[i].course);
    printf("Roll Number: %d\n", student[i].roll);
    printf("Year of Joining: %d\n", student[i].year);
}

void main()
{
    for(int i=0; i<20; i++)
    {
        fflush(stdin);
        printf("Enter name of student %d: ", i+1);
        fgets(student[i].name, 100, stdin);
        printf("Enter department of student %d: ", i+1);
        fgets(student[i].dep, 100, stdin);
        printf("Enter course of student %d: ", i+1);
        fgets(student[i].course, 100, stdin);
        printf("Enter roll number of student %d: ", i+1);
        scanf("%d", &student[i].roll);
        printf("Enter year of joining for student %d: ", i+1);
        scanf("%d", &student[i].year);
    }

    int y, r;
    printf("Enter year to check: ");
    scanf("%d", &y);
    printNames(y);
    printf("Enter roll number to search: ");
    scanf("%d", &r);
    printData(r);
}