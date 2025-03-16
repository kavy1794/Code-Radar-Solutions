#include <stdio.h>

void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    sortArray(arr, N);

    if (N % 2 == 1) {
        printf("%d", arr[N / 2]);
    } else {
        int median = (arr[(N - 1) / 2] + arr[N / 2]) / 2;
        printf("%d", median);
    }

    return 0;
}
