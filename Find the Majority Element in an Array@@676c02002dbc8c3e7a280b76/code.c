#include <stdio.h>

int findMajorityElement(int arr[], int n) {
    int count = 0, candidate = -1;

    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else {
            if (arr[i] == candidate) {
                count++;
            } else {
                count--;
            }
        }
    }

    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) {
            count++;
        }
    }

    return count > n / 2 ? candidate : -1;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int majorityElement = findMajorityElement(arr, n);
    printf("%d\n", majorityElement);

    return 0;
}
