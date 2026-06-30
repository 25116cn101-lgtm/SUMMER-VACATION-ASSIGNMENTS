#include <stdio.h>

int main() {
    char s1[100], s2[100];

    scanf("%s %s", s1, s2);

    for(int i=0; s1[i]; i++) {
        for(int j=0; s2[j]; j++) {
            if(s1[i] == s2[j]) {
                printf("%c ", s1[i]);
                break;
            }
        }
    }
    return 0;
}