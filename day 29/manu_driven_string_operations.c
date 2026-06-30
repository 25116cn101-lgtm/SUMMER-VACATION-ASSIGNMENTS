#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int choice;

    printf("Enter First String: ");
    scanf(" %[^\n]", str1);

    while (1) {
        printf("\n===== String Operations =====\n");
        printf("1. Length\n");
        printf("2. Copy\n");
        printf("3. Concatenate\n");
        printf("4. Compare\n");
        printf("5. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Length = %lu\n", strlen(str1));
                break;

            case 2:
                strcpy(str2, str1);
                printf("Copied String = %s\n", str2);
                break;

            case 3:
                printf("Enter Second String: ");
                scanf(" %[^\n]", str2);

                strcat(str1, str2);
                printf("After Concatenation = %s\n", str1);
                break;

            case 4:
                printf("Enter Second String: ");
                scanf(" %[^\n]", str2);

                if (strcmp(str1, str2) == 0)
                    printf("Strings are Equal\n");
                else
                    printf("Strings are Not Equal\n");
                break;

            case 5:
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
}