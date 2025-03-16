#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N], count[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        count[i] = 0;
    }

    for (int i = 0; i < N; i++) {
        count[arr[i]]++;
        if (count[arr[i]] > 1) {
            printf("%d", arr[i]);
            break;
        }
    }

    return 0;
}
