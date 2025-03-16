#include <stdio.h>
#include <stdbool.h>

void findUniquePairs(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                // Print the pair and mark the numbers as processed
                printf("%d %d\n", arr[i], arr[j]);

                // Mark these numbers as used by assigning an invalid value
                arr[i] = arr[j] = -100000; // Assuming -100000 is not a valid input
                break; // Ensure no duplicates
            }
        }
    }
}

int main() {
    int N, T;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &T);

    findUniquePairs(arr, N, T);

    return 0;
}
