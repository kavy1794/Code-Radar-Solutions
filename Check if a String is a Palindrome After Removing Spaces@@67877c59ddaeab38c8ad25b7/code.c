#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100], cleaned[100];
    scanf("%[^\n]", str); 
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            cleaned[j++] = tolower(str[i]);
        }
    }
    cleaned[j] = '\0'; 
    int left = 0, right = strlen(cleaned) - 1;
    int isPalindrome = 1;

    while (left < right) {
        if (cleaned[left] != cleaned[right]) {
            isPalindrome = 0;
            break;
        }
        left++;
        right--;
    }
    if (isPalindrome) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}