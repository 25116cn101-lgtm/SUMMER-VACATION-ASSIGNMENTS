#include <stdio.h>

int main() {
    int choice;
    float a, b;

    while (1) {
        printf("\n===== Calculator =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        if (choice == 5)
            break;

        printf("Enter Two Numbers: ");
        scanf("%f%f", &a, &b);

        switch (choice) {
            case 1:
                printf("Result = %.2f\n", a + b);
                break;

            case 2:
                printf("Result = %.2f\n", a - b);
                break;

            case 3:
                printf("Result = %.2f\n", a * b);
                break;

            case 4:
                if (b != 0)
                    printf("Result = %.2f\n", a / b);
                else
                    printf("Division by Zero is Not Possible!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}