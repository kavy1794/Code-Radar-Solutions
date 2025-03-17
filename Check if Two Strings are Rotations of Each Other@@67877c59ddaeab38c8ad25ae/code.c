#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isRotation(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len1 != len2) {
        return 0;
    }
    char *concatStr = (char *)malloc(2 * len1 + 1);
    if (concatStr == NULL) {
        return 0;
    }
    strcpy(concatStr, str1);
    strcat(concatStr, str1);
    int isSubstr = strstr(concatStr, str2) != NULL;
    free(concatStr);
    return isSubstr;
}

int main() {
    char str1[100], str2[100];
    scanf("%s", str1);
    scanf("%s", str2);
    if (isRotation(str1, str2)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}
