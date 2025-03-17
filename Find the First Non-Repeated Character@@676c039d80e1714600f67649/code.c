#include <stdio.h>
#include <string.h>

char firstNonRepeatedChar(char *str) {
    int charCount[256] = {0};
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        charCount[(unsigned char)str[i]]++;
    }
    for (i = 0; str[i] != '\0'; i++) {
        if (charCount[(unsigned char)str[i]] == 1) {
            return str[i];
        }
    }
    return '-';
}

int main() {
    char str[100];
    scanf("%s", str);
    char result = firstNonRepeatedChar(str);
    if (result != '-') {
        printf("%c\n", result);
    } else {
        printf("-\n");
    }
    return 0;
}
