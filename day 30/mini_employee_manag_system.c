#include <stdio.h>

int main() {
    int empID;
    char name[50];
    float salary;
    int choice;

    while(1) {
        printf("\n===== Employee Management =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employee\n");
        printf("3. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &empID);

                printf("Enter Employee Name: ");
                scanf(" %[^\n]", name);

                printf("Enter Salary: ");
                scanf("%f", &salary);

                printf("Employee Added Successfully!\n");
                break;

            case 2:
                printf("\nEmployee ID : %d\n", empID);
                printf("Employee Name : %s\n", name);
                printf("Salary : %.2f\n", salary);
                break;

            case 3:
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
}