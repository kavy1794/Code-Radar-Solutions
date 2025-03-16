#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int N;
    scanf("%d", &N);

    if (N < 2) {
        printf("-1");
        return 0;
    }

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, N, sizeof(int), compare);

    int minDiff = abs(arr[1] - arr[0]);
    int element1 = arr[0], element2 = arr[1];

    for (int i = 1; i < N - 1; i++) {
        int diff = abs(arr[i + 1] - arr[i]);
        if (diff < minDiff) {
            minDiff = diff;
            element1 = arr[i];
            element2 = arr[i + 1];
        }
    }

    if (element1 > element2) {
        int temp = element1;
        element1 = element2;
        element2 = temp;
    }

    printf("%d %d", element1, element2);

    return 0;
}
