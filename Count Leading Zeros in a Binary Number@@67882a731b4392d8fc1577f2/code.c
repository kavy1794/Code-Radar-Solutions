#include <stdio.h>

// Function to count the number of leading zeros in a 32-bit number
int countLeadingZeros(int n) {
    if (n == 0) {
        return 32;
    }

    int count = 0;
    for (int i = 31; i >= 0; i--) {
        if ((n & (1 << i)) == 0) {
            count++;
        } else {
            break;
        }
    }

    return count;
}

int main() {
    int num;

    // Get the number from the user
    scanf("%d", &num);

    // Count the number of leading zeros
    int leadingZeros = countLeadingZeros(num);

    // Print the result
    printf("%d\n", leadingZeros);

    return 0;
}
