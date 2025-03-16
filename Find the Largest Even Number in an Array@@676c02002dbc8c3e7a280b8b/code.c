#include <stdio.h>
#include <limits.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N], largestEven = INT_MIN;
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0 && arr[i] > largestEven) {
            largestEven = arr[i];
        }
    }

    if (largestEven == INT_MIN) {
        printf("-1");
    } else {
        printf("%d", largestEven);
    }

    return 0;
}
