#include <stdio.h>

int main() {
    int roll[5], marks[5], n, i;
    char name[5][30];

    printf("Enter Number of Students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll No: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf(" %[^\n]", name[i]);

        printf("Enter Marks: ");
        scanf("%d", &marks[i]);
    }

    printf("\n----- Student Records -----\n");

    for(i = 0; i < n; i++) {
        printf("\nRoll No : %d", roll[i]);
        printf("\nName    : %s", name[i]);
        printf("\nMarks   : %d\n", marks[i]);
    }

    return 0;
}