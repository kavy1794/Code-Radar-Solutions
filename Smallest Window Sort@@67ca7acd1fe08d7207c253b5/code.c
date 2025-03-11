#include <stdio.h>

int findUnsortedSubarray(int arr[], int n) {
    int start = -1, end = -1;

    // Find the first element out of order from the beginning
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            start = i;
            break;
        }
    }

    // If the array is already sorted
    if (start == -1) {
        return 0;
    }

    // Find the first element out of order from the end
    for (int i = n - 1; i > 0; i--) {
        if (arr[i] < arr[i - 1]) {
            end = i;
            break;
        }
    }

    // Find the minimum and maximum values in the subarray
    int min = arr[start], max = arr[start];
    for (int i = start; i <= end; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Extend the subarray to include any numbers that are out of place
    for (int i = 0; i < start; i++) {
        if (arr[i] > min) {
            start = i;
            break;
        }
    }
    for (int i = n - 1; i > end; i--) {
        if (arr[i] < max) {
            end = i;
            break;
        }
    }

    return end - start + 1;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int arr[1000];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        printf("%d\n", findUnsortedSubarray(arr, n));
    }

    return 0;
}
