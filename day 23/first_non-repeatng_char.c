#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    // Frequency array initialize
    int freq[256] = {0};

    // Input string
    scanf("%s", str);

    // Count frequency of each character
    for(int i = 0; str[i]; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Find first non-repeating character
    for(int i = 0; str[i]; i++) {
        if(freq[(unsigned char)str[i]] == 1) {
            printf("First non-repeating character: %c", str[i]);
            return 0;
        }
    }

    // If no non-repeating character exists
    printf("No non-repeating character found");

    return 0;
}