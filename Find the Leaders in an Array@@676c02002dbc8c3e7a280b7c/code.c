#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int maxRight = arr[N - 1];
    printf("%d ", maxRight);

    for (int i = N - 2; i >= 0; i--) {
        if (arr[i] >= maxRight) {
            maxRight = arr[i];
            printf("%d ", maxRight);
        }
    }

    return 0;
}
