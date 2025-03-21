
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);
    int len = strlen(str);
    
    for (int i = 0; i < len; i++) {
        int isUnique = 1;
        for (int j = 0; j < len; j++) {
            if (i != j && str[i] == str[j]) { 
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            printf("%c\n", str[i]); 
            return 0;
        }
    }
    printf("-\n"); 
    return 0;
}
