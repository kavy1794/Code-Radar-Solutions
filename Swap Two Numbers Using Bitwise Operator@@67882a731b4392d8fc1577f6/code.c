#include <stdio.h>
void swap(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    swap(&a, &b);
    printf("%d %d", a, b);
    return 0;
}
