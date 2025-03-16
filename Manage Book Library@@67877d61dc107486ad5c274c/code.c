#include <stdio.h>
#include <string.h>

struct Book {
    char title[100];
    char author[100];
    float price;
};

int main() {
    int N;
    scanf("%d", &N);

    struct Book books[N];

    for (int i = 0; i < N; i++) {
        scanf("%s %s %f", books[i].title, books[i].author, &books[i].price);
    }

    float threshold;
    scanf("%f", &threshold);

    printf("Books above price %.2f:\n", threshold);
    int found = 0;
    for (int i = 0; i < N; i++) {
        if (books[i].price > threshold) {
            printf("Title: %s, Author: %s, Price: %.2f\n", books[i].title, books[i].author, books[i].price);
            found = 1;
        }
    }

    if (!found) {
        printf("No books found above the threshold price.");
    }

    return 0;
}
