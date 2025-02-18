#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    // Check for digit
    if (ch >= '0' && ch <= '9') {
        printf("Digit");
    }
    // Check for alphabet
    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        // Check for vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("Vowel");
        } else {
            printf("Consonant");
        }
    }
    // If not digit or alphabet, it's a special character
    else {
        printf("Special Character");
    }

return 0;
}
