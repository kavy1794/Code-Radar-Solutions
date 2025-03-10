#include <stdio.h>

void printIncreasingNumericPyramid(int n) {
    int num = 1;
    for (int i = 1; i <= n; i++) {
        // Print leading spaces for alignment
        for (int j = i; j < n; j++) {
            printf(" ");
        }

        // Print numbers for the current row
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }

        // Move to the next row
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printIncreasingNumericPyramid(n);
    return 0;
}
