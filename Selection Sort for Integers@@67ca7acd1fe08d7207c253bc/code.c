#include <stdio.h>

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    // Read the number of integers
    scanf("%d", &n);
    int arr[n];
    // Read the integers from input
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Call the selectionSort function
    selectionSort(arr, n);
    // Print the sorted array
    printArray(arr, n);

    return 0;
}
