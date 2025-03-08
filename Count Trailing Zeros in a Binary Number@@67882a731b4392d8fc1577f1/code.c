#include <stdio.h>

// Function to count the number of trailing zeros
int countTrailingZeros(int n) {
    if (n == 0) {
        return 32; // For a 32-bit integer, if the number is 0, all bits are zero.
    }

    int count = 0;
    while ((n & 1) == 0) {
        n >>= 1;
        count++;
    }

    return count;
}

int main() {
    int num;

    // Get the number from the user
    scanf("%d", &num);

    // Count the number of trailing zeros
    int trailingZeros = countTrailingZeros(num);

    // Print the result
    printf("%d\n", trailingZeros);

    return 0;
}
