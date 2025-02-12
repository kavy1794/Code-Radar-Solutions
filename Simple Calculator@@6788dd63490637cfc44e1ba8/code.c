#include <stdio.h>
int main() {
    int a, b, c;
    char o;
    scanf("%d %d", &a, &b);
    scanf(" %c", &o);
    if (o == '+') {
        c = a + b;
        printf("%d", c);
    } else if (o == '-') {
        c = a - b;
        printf("%d", c);
    } else if (o == '*') {
        c = a * b;
        printf("%d", c);
    } else if (o == '/') {
        if (b != 0) {
            c = a / b;
            printf("%d", c);
        } else {
            printf("Error: Division by zero\n");
        }
    } else {
        printf("Invalid Operator\n");
    }

    return 0;
}
