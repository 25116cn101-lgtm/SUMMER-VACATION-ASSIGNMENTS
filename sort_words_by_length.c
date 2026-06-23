#include <stdio.h>
#include <string.h>

int main() {
    char words[5][50];
    char temp[50];

    for(int i=0;i<5;i++)
        scanf("%s", words[i]);

    for(int i=0;i<4;i++) {
        for(int j=i+1;j<5;j++) {
            if(strlen(words[i]) > strlen(words[j])) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    for(int i=0;i<5;i++)
        printf("%s\n", words[i]);

    return 0;
}