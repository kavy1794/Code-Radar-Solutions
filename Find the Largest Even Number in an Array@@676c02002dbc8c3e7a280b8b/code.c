#include <stdio.h>
#include <limits.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N], largestEven = -1;
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0 && arr[i] > largestEven) {
            largestEven = arr[i];
        }
    }

    printf("%d", largestEven);
    return 0;
}
