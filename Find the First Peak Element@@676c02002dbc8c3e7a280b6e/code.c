#include <stdio.h>

int findFirstPeakElement(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }

    if (arr[0] >= arr[1]) {
        return arr[0];
    }

    if (arr[n - 1] >= arr[n - 2]) {
        return arr[n - 1];
    }

    int allSame = 1;
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            return arr[i];
        }
        if (arr[i] != arr[0]) {
            allSame = 0;
        }
    }

    return allSame ? -1 : -1;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int peak = findFirstPeakElement(arr, n);
    printf("%d\n", peak);

    return 0;
}
