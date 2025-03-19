#include <stdio.h>

int findUnsortedSubarray(int arr[], int n) {
    int L = -1, R = -1;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            L = i;
            break;
        }
    }
    if (L == -1) return 0;
    for (int i = n - 1; i > 0; i--) {
        if (arr[i] < arr[i - 1]) {
            R = i;
            break;
        }
    }
    int minVal = arr[L], maxVal = arr[L];
    for (int i = L; i <= R; i++) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }
    for (int i = 0; i < L; i++) {
        if (arr[i] > minVal) {
            L = i;
            break;
        }
    }
    for (int i = n - 1; i > R; i--) {
        if (arr[i] < maxVal) {
            R = i;
            break;
        }
    }

    return R - L + 1;
}