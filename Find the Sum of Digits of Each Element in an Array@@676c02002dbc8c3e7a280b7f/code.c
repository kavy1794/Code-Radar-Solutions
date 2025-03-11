#include <stdio.h>
#include <stdlib.h>

int sumOfDigits(int num) {
    int sum = 0;
    num = abs(num); 
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int result[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        result[i] = sumOfDigits(arr[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
