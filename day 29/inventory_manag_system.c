#include <stdio.h>

int main() {
    int choice;
    int productID, quantity;
    char productName[50];

    while (1) {
        printf("\n===== Inventory Management System =====\n");
        printf("1. Add Product\n");
        printf("2. View Product\n");
        printf("3. Update Quantity\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Product ID: ");
                scanf("%d", &productID);

                printf("Enter Product Name: ");
                scanf(" %[^\n]", productName);

                printf("Enter Quantity: ");
                scanf("%d", &quantity);

                printf("Product Added Successfully!\n");
                break;

            case 2:
                printf("Product ID : %d\n", productID);
                printf("Product Name : %s\n", productName);
                printf("Quantity : %d\n", quantity);
                break;

            case 3:
                printf("Enter New Quantity: ");
                scanf("%d", &quantity);

                printf("Quantity Updated Successfully!\n");
                break;

            case 4:
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
}