=#include <stdio.h>

// Function to toggle the nth bit of a number
int toggle_nth_bit(int number, int n) {
    return number ^ (1 << n);
}

int main() {
    int number, n;
    
    // Prompt the user to enter the number and the bit position
    printf("Enter a number: ");
    scanf("%d", &number);
    
    printf("Enter the bit position (0-based): ");
    scanf("%d", &n);
    
    // Toggle the nth bit of the number
    int updated_number = toggle_nth_bit(number, n);
    
    // Print the updated number
    printf("Output: %d\n", updated_number);
    
    return 0;
}
