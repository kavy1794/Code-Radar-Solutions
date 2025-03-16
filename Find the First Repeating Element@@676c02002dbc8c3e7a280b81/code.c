#include <stdio.h>
#include <limits.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N], index[100000];
    for (int i = 0; i < 100000; i++) {
        index[i] = -1;
    }

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int minIndex = INT_MAX;

    for (int i = 0; i < N; i++) {
        if (index[arr[i]] != -1) {
            if (index[arr[i]] < minIndex) {
                minIndex = index[arr[i]];
            }
        } else {
            index[arr[i]] = i;
        }
    }

    if (minIndex == INT_MAX) {
        printf("-1");
    } else {
        printf("%d", arr[minIndex]);
    }

    return 0;
}
