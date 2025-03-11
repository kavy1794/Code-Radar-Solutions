#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int findLongestConseqSubseq(int arr[], int n) {
    // Sort the array
    qsort(arr, n, sizeof(int), compare);

    int longest_streak = 1;
    int current_streak = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i-1]) {
            if (arr[i] == arr[i-1] + 1) {
                current_streak++;
            } else {
                longest_streak = (longest_streak > current_streak) ? longest_streak : current_streak;
                current_streak = 1;
            }
        }
    }
    longest_streak = (longest_streak > current_streak) ? longest_streak : current_streak;

    return longest_streak;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = findLongestConseqSubseq(arr, n);
    printf("%d\n", result);

    return 0;
}
