#include <stdio.h>

// Function to find the position of the lowest set bit (0-based)
int getLowestSetBitPosition(int n) {
    if (n == 0) {
        return -1; // No set bit found
    }

    int position = 0;
    while ((n & 1) == 0) {
        n >>= 1;
        position++;
    }

    return position;
}

int main() {
    int num;

    // Get the number from the user
    scanf("%d", &num);

    // Find the position of the lowest set bit
    int position = getLowestSetBitPosition(num);

    // Print the result
    printf("%d\n", position);

    return 0;
}
