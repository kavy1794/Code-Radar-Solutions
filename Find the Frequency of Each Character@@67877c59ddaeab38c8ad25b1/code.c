#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%[^\n]", str);
    int n = strlen(str);

    for (int i = 0; i < n; i++) {
        int count = 1;
        int already_counted = 0;
        for (int k = 0; k < i; k++) {
            if (str[k] == str[i]) {
                already_counted = 1;
                break;
            }
        }
        if (already_counted) continue;
        for (int j = i + 1; j < n; j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }
        printf("%c: %d\n", str[i], count);
    }
}