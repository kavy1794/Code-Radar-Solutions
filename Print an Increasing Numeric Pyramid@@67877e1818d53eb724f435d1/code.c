#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        // Print spaces for centering
        for (int j = 1; j <= N - i; j++) {
            printf("    "); // Four spaces for alignment
        }

        // Print numbers for the current row
        for (int j = 1; j <= i; j++) {
            printf("%d     ", j); // Add extra spaces between numbers
        }

        printf("\n"); // Move to the next line
    }

    return 0;
}
