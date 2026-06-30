#include <stdio.h>

int main() {
    int choice;
    char name[50];
    char phone[15];

    while (1) {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. Search Contact\n");
        printf("3. Delete Contact\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Name: ");
                scanf(" %[^\n]", name);

                printf("Enter Phone Number: ");
                scanf("%s", phone);

                printf("Contact Saved Successfully!\n");
                break;

            case 2:
                printf("Enter Name to Search: ");
                scanf(" %[^\n]", name);

                printf("Contact Found (Demo).\n");
                break;

            case 3:
                printf("Enter Name to Delete: ");
                scanf(" %[^\n]", name);

                printf("Contact Deleted Successfully!\n");
                break;

            case 4:
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
}