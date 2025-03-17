#include <stdio.h>
#include <string.h>

void findLargestPalindrome(char *str, char *result) {
    int n = strlen(str);
    int start = 0, maxLength = 1;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int left = i, right = j;
            int isPalindrome = 1;

            while (left < right) {
                if (str[left] != str[right]) {
                    isPalindrome = 0;
                    break;
                }
                left++;
                right--;
            }

            if (isPalindrome && (j - i + 1) > maxLength) {
                start = i;
                maxLength = j - i + 1;
            }
        }
    }

    strncpy(result, str + start, maxLength);
    result[maxLength] = '\0';
}

int main() {
    char str[100];
    char result[100];

    scanf("%s", str);

    findLargestPalindrome(str, result);

    printf("%s\n", result);

    return 0;
}
