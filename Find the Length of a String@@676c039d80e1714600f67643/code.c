#include <stdio.h>

int main() {
    char str[1000];
    int length = 0;

    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    if (length == 0) { 
        printf("0\n");
    } else {
        printf("%d\n", length);
    }

    return 0;
}
