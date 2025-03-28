#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    scanf("%[^\n]",str);
    for (int i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]); 
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || !isalpha(c)) {
            printf("%c", str[i]); 
        }
    }
    
    return 0;
}