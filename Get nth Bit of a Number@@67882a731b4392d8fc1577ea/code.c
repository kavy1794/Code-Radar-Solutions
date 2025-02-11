#include <stdio.h>

// Function to get the nth bit of a number
int get_nth_bit(int number, int n) {
    // Shift the nth bit to the least significant bit position and mask it with 1
    return (number >> n) & 1;
}

int main() {
    int number, n;
    
    // Prompt the user to enter the number and the bit position
    
    scanf("%d", &number);
    
    
    scanf("%d", &n);
    
    // Get the nth bit value
    int nth_bit = get_nth_bit(number, n);
    
    // Print the result
    printf("The value of the %dth bit of %d is: %d\n", n, number, nth_bit);
    
    return 0;
}
