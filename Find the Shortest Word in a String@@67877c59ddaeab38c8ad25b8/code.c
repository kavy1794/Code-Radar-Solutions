#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%[^\n]", str);

    char word1[30] = "", word2[30] = "", word3[30] = "", word4[30] = "";
    int count = sscanf(str, "%s %s %s %s", word1, word2, word3, word4);

    int minLen = strlen(word1);
    char *minWord = word1;

    if (count > 1 && strlen(word2) < minLen) {
        minLen = strlen(word2);
        minWord = word2;
    }
    if (count > 2 && strlen(word3) < minLen) {
        minLen = strlen(word3);
        minWord = word3;
    }
    if (count > 3 && strlen(word4) < minLen) {
        minLen = strlen(word4);
        minWord = word4;
    }

    printf("%s", minWord);
    return 0;
}