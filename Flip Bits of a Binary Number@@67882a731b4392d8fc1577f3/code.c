#include <stdio.h>

int flipBits(int n) {
    return ~n;
}

int main() {
    int num;

    scanf("%d", &num);

    int flippedNum = flipBits(num);

    printf("%d\n", flippedNum);

    return 0;
}
