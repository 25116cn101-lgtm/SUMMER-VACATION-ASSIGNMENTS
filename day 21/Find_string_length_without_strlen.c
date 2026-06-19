#include <stdio.h>

int main()
{
    char str[100];
    int length = 0;

    // Input string from user
    printf("Enter a string: ");
    gets(str);

    // Calculate length of string
    while (str[length] != '\0')
    {
        length++;
    }

    // Display length
    printf("Length of the string = %d\n", length);

    return 0;
}