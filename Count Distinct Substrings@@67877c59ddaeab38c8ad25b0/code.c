#include <stdio.h>
#include <string.h>

int countDistinctSubstrings(char *str) {
    int n = strlen(str), count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int isNew = 1;
            for (int k = i; k < j; k++) {
                if (str[k] == str[j]) {
                    isNew = 0;
                    break;
                }
            }
            count += isNew;
        }
    }
    return count;
}

int main() {
    char str[100];
    scanf("%s", str);

    printf("%d\n", countDistinctSubstrings(str));

    return 0;
}
