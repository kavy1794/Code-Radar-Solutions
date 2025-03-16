#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int max = -1;
    for (int i = N - 1; i >= 0; i--) {
        int current = arr[i];
        arr[i] = max;
        if (current > max) {
            max = current;
        }
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
