#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

void printPrimesInRange(int a, int b) {
    int found = 0;
    for (int num = a; num <= b; num++) {
        if (isPrime(num)) {
            printf("%d ", num);
            found = 1;
        }
    }
    if (!found)
        printf("No prime numbers");
    printf("\n");
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printPrimesInRange(a, b);
    return 0;
}