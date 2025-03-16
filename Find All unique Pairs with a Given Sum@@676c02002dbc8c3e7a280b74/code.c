#include <stdio.h>

void findUniquePairs(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                printf("%d %d\n", arr[i], arr[j]);

                arr[i] = arr[j] = -100000; 
                break;
            }
        }
    }
}

int main() {
    int N, T;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &T);

    findUniquePairs(arr, N, T);

    return 0;
}
