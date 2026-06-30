#include <stdio.h>

int main() {
    int arr[100], n, i, choice, sum = 0;

    printf("Enter Number of Elements: ");
    scanf("%d", &n);

    printf("Enter Array Elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    while (1) {
        printf("\n===== Array Operations =====\n");
        printf("1. Display Array\n");
        printf("2. Sum of Elements\n");
        printf("3. Find Largest Element\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Array = ");
                for (i = 0; i < n; i++)
                    printf("%d ", arr[i]);
                printf("\n");
                break;

            case 2:
                sum = 0;
                for (i = 0; i < n; i++)
                    sum += arr[i];

                printf("Sum = %d\n", sum);
                break;

            case 3: {
                int max = arr[0];
                for (i = 1; i < n; i++)
                    if (arr[i] > max)
                        max = arr[i];

                printf("Largest = %d\n", max);
                break;
            }

            case 4:
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
}