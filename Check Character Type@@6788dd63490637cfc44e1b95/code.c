#include <stdio.h>

int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    // Check for digit
    if (c >= '0' && c <= '9')
        printf("%c is a digit.\n", c);
    // Check for alphabet
    else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        // Check for vowel
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            printf("%c is a vowel.\n", c);
        else
            printf("%c is a consonant.\n", c);
    }
    // If not digit or alphabet, it's a special character
    else
        printf("%c is a special character.\n", c);

return 0;
}
