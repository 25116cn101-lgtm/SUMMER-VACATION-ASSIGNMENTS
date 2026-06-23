#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0}, max = 0;
    char ch;

    scanf("%s", str);

    for(int i = 0; str[i]; i++)
        freq[(unsigned char)str[i]]++;

    for(int i = 0; i < 256; i++) {
        if(freq[i] > max) {
            max = freq[i];
            ch = i;
        }
    }

    printf("%c", ch);
    return 0;
}