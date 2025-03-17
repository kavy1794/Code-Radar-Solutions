#include <stdio.h>

void convertToUppercase(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');
        }
        i++;
    }
}

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin); 

    convertToUppercase(str);

    printf("%s", str); 

    return 0;
}
