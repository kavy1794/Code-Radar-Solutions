#include <stdio.h>

int isPalindrome(int num) {
    int original = num, reversed = 0;

    while (num > 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }

    return original == reversed;
}

int main() {
    int N;
    scanf("%d", &N);

    int arr[N], count = 0;
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        if (isPalindrome(arr[i])) {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}
