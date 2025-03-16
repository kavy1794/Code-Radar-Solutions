#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int isNonDecreasing = 1, isNonIncreasing = 1;

    for (int i = 1; i < N; i++) {
        if (arr[i] < arr[i - 1]) {
            isNonDecreasing = 0;
        }
        if (arr[i] > arr[i - 1]) {
            isNonIncreasing = 0;
        }
    }

    if (isNonDecreasing || isNonIncreasing) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
