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
    printf("Enter a number: ");
    scanf("%d", &num);

    // Find the position of the lowest set bit
    int position = getLowestSetBitPosition(num);

    // Print the result
    if (position == -1) {
        printf("No set bit found in %d\n", num);
    } else {
        printf("The position of the lowest set bit in %d is: %d\n", num, position);
    }

    return 0;
}
