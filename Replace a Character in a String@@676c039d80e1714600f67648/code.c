#include <stdio.h>

int main() {
    char str[1000], target, replacement;
    int i;

    fgets(str, sizeof(str), stdin);
    scanf(" %c", &target);
    scanf(" %c", &replacement);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            str[i] = replacement;
        }
    }

    printf("%s", str);

    return 0;
}
