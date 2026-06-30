// Employee Management System

#include <stdio.h>

int main()
{
    int id;
    char name[30];
    float salary;

    printf("Enter Employee ID: ");
    scanf("%d", &id);

    printf("Enter Employee Name: ");
    scanf("%s", name);

    printf("Enter Salary: ");
    scanf("%f", &salary);

    printf("\n----- Employee Details -----\n");
    printf("ID     : %d\n", id);
    printf("Name   : %s\n", name);
    printf("Salary : %.2f\n", salary);

    return 0;
}