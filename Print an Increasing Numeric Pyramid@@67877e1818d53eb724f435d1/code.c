#include <stdio.h>
void printIncreasingNumericPyramid(int n) {
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
}
int main() {
    int n;
    scanf("%d", &n);
    printIncreasingNumericPyramid(n);
    return 0;
}
