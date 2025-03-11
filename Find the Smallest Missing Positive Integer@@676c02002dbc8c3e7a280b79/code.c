#include <stdio.h>
#include <stdlib.h>

int findSmallestMissingPositive(int arr[], int n) {
    int shift = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] <= 0) {
            int temp = arr[i];
            arr[i] = arr[shift];
            arr[shift] = temp;
            shift++;
        }
    }

    int posArrSize = n - shift;
    int *posArr = arr + shift;

    for (int i = 0; i < posArrSize; i++) {
        int num = abs(posArr[i]);
        if (num <= posArrSize && posArr[num - 1] > 0) {
            posArr[num - 1] = -posArr[num - 1];
        }
    }

    for (int i = 0; i < posArrSize; i++) {
        if (posArr[i] > 0) {
            return i + 1;
        }
    }

    return posArrSize + 1;
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = findSmallestMissingPositive(arr, n);
    printf("The smallest missing positive integer is: %d\n", result);

    return 0;
}
