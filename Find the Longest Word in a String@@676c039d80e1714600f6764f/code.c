#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], word[100], longest[100];
    int i = 0, j = 0, maxLength = 0;

    fgets(str, sizeof(str), stdin);

    for (int k = 0; str[k] != '\0'; k++) {
        if (str[k] != ' ' && str[k] != '\n') {
            word[j++] = str[k];
        } else {
            word[j] = '\0';
            if (strlen(word) > maxLength) {
                maxLength = strlen(word);
                strcpy(longest, word);
            }
            j = 0;
        }
    }

    word[j] = '\0';
    if (strlen(word) > maxLength) {
        strcpy(longest, word);
    }

    printf("%s\n", longest);

    return 0;
}
