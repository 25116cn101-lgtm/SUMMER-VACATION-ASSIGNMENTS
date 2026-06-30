#include <stdio.h>

int main() {
    int choice;
    int bookID;
    char bookName[50];

    while(1) {
        printf("\n===== Mini Library =====\n");
        printf("1. Add Book\n");
        printf("2. View Book\n");
        printf("3. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &bookID);

                printf("Enter Book Name: ");
                scanf(" %[^\n]", bookName);

                printf("Book Added Successfully!\n");
                break;

            case 2:
                printf("\nBook ID   : %d\n", bookID);
                printf("Book Name : %s\n", bookName);
                break;

            case 3:
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
}