#include <stdio.h>

int main() {
    char str[1000], result[1000];
    int i, j = 0;

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            result[j] = str[i];
            j++;
        }
    }

    result[j] = '\0';

    printf("%s\n", result);

    return 0;
}
