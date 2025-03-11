#include <stdio.h>

void findFrequencies(int arr[], int n) {
    int visited[1000] = {0};

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            int count = 1;
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    visited[j] = 1;
                }
            }
            printf("%d %d\n", arr[i], count);
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findFrequencies(arr, n);

    return 0;
}
