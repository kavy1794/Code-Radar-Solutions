#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    int freq[100001] = {0}; 

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }

    int maxFreq = 0, result = 100001;

    for (int i = 0; i < 100001; i++) {
        if (freq[i] > maxFreq || (freq[i] == maxFreq && i < result)) {
            maxFreq = freq[i];
            result = i;
        }
    }

    printf("%d", result);
    return 0;
}
