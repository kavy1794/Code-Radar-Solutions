#include <stdio.h>
#include <string.h>

void sortString(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char str1[1000], str2[1000];

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    if (strlen(str1) != strlen(str2)) {
        printf("No\n");
        return 0;
    }

    sortString(str1);
    sortString(str2);

    if (strcmp(str1, str2) == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
