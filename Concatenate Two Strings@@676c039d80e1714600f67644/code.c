#include <stdio.h>

int main() {
    char str1[1000], str2[1000];
    char result[2000];
    int i = 0, j = 0;

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    while (str1[i] != '\0' && str1[i] != '\n') {
        result[i] = str1[i];
        i++;
    }

    while (str2[j] != '\0' && str2[j] != '\n') {
        result[i] = str2[j];
        i++;
        j++;
    }

    result[i] = '\0';

    printf("%s\n", result);

    return 0;
}
