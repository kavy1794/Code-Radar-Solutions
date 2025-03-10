#include <stdio.h>

void printTriangle(int n) {
    char letter;
    for (int i = 1; i <= n; i++) {
        letter = 'A';
        for (int j = 1; j <= i; j++) {
            printf("%c", letter);
            letter++;
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printTriangle(n);
    return 0;
}
