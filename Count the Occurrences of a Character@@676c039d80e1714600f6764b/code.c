#include <stdio.h>

int main() {
    char str[1000], target;
    int count = 0, i;

    fgets(str, sizeof(str), stdin);
    scanf(" %c", &target);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
