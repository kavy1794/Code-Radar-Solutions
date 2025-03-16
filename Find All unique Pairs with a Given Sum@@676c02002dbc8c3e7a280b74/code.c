#include <stdio.h>
#include <stdbool.h>

void findUniquePairs(int arr[], int n, int target) {
    bool visited[100001] = {0}; 
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target && !visited[i] && !visited[j]) {
                printf("%d %d\n", arr[i], arr[j]);
                visited[i] = visited[j] = true; 
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
-