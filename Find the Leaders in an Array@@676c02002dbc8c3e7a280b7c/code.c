#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N], leaders[N], leaderIndex = 0;
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int maxRight = arr[N - 1];
    leaders[leaderIndex++] = maxRight;

    for (int i = N - 2; i >= 0; i--) {
        if (arr[i] >= maxRight) {
            maxRight = arr[i];
            leaders[leaderIndex++] = maxRight;
        }
    }

    for (int i = leaderIndex - 1; i >= 0; i--) {
        printf("%d ", leaders[i]);
    }

    return 0;
}
