#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int count = 0, i;

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] != ' ' && str[i] != '\n') && 
            (str[i + 1] == ' ' || str[i + 1] == '\n' || str[i + 1] == '\0')) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
