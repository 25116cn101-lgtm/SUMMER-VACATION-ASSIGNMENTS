#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};

    scanf("%s", str);

    for(int i = 0; str[i]; i++) {
        freq[(unsigned char)str[i]]++;
        if(freq[(unsigned char)str[i]] == 2) {
            printf("%c", str[i]);
            return 0;
        }
    }

    printf("No repeating character");
    return 0;
}