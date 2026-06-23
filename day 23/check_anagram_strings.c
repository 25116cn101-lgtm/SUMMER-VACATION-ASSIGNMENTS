#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    int count[256] = {0};

    scanf("%s %s", s1, s2);

    if(strlen(s1) != strlen(s2)) {
        printf("Not Anagram");
        return 0;
    }

    for(int i = 0; s1[i]; i++) {
        count[(unsigned char)s1[i]]++;
        count[(unsigned char)s2[i]]--;
    }

    for(int i = 0; i < 256; i++) {
        if(count[i] != 0) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");
    return 0;
}