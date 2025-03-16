#include <stdio.h>
#include <limits.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int smallest = INT_MAX, secondSmallest = INT_MAX;

    for (int i = 0; i < N; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] > smallest && arr[i] < secondSmallest) {
            secondSmallest = arr[i];
        }
    }

    if (secondSmallest == INT_MAX) {
        printf("-1");
    } else {
        printf("%d", secondSmallest);
    }

    return 0;
}
