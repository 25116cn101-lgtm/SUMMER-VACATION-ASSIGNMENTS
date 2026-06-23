#include <stdio.h>
#include <string.h>

int main() {
    char str[200], longest[100];
    fgets(str, sizeof(str), stdin);

    char *token = strtok(str, " \n");

    while(token) {
        if(strlen(token) > strlen(longest))
            strcpy(longest, token);

        token = strtok(NULL, " \n");
    }

    printf("%s", longest);
    return 0;
}