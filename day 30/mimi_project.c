#include <stdio.h>

// Function to add student
void addStudent(int roll[], char name[][30], int marks[], int n) {
    for(int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll No: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf(" %[^\n]", name[i]);

        printf("Enter Marks: ");
        scanf("%d", &marks[i]);
    }
}

// Function to display student
void displayStudent(int roll[], char name[][30], int marks[], int n) {
    printf("\n----- Student Records -----\n");

    for(int i = 0; i < n; i++) {
        printf("\nRoll No : %d", roll[i]);
        printf("\nName    : %s", name[i]);
        printf("\nMarks   : %d\n", marks[i]);
    }
}

int main() {
    int n;
    int roll[10], marks[10];
    char name[10][30];

    printf("Enter Number of Students: ");
    scanf("%d", &n);

    addStudent(roll, name, marks, n);

    displayStudent(roll, name, marks, n);

    return 0;
}