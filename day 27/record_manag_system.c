// Student Record Management System

#include <stdio.h>

int main()
{
    int roll;
    char name[30];
    float marks;

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Marks: ");
    scanf("%f", &marks);

    printf("\n----- Student Record -----\n");
    printf("Roll No : %d\n", roll);
    printf("Name    : %s\n", name);
    printf("Marks   : %.2f\n", marks);

    return 0;
}