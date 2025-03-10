#include <stdio.h>
void printAlphabetPyramid(int n) {
    int i, j;
    char letter;
    for (i = 1; i <= n; i++) {
        for (j = i; j < n; j++) {
            printf(" ");
        }
        letter = 'A';
        for (j = 1; j <= i; j++) {
            printf("%c ", letter);
            letter++;
        }
        printf("\n");
    }
}
int main() {
    int n;
    scanf("%d", &n);
    printAlphabetPyramid(n);
    return 0;
}
