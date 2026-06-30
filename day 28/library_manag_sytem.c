#include <stdio.h>

int main() {
    int choice;
    int bookID;
    char bookName[50];

    while (1) {
        printf("\n===== Library Management System =====\n");
        printf("1. Add Book\n");
        printf("2. Search Book\n");
        printf("3. Issue Book\n");
        printf("4. Return Book\n");
        printf("5. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &bookID);
                printf("Enter Book Name: ");
                scanf(" %[^\n]", bookName);
                printf("Book Added Successfully!\n");
                break;

            case 2:
                printf("Enter Book ID to Search: ");
                scanf("%d", &bookID);
                printf("Book Found (Demo).\n");
                break;

            case 3:
                printf("Enter Book ID to Issue: ");
                scanf("%d", &bookID);
                printf("Book Issued Successfully!\n");
                break;

            case 4:
                printf("Enter Book ID to Return: ");
                scanf("%d", &bookID);
                printf("Book Returned Successfully!\n");
                break;

            case 5:
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
}