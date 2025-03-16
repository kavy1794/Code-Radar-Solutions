#include <stdio.h>
#include <string.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int N;
    scanf("%d", &N);

    struct Student students[N];
    int allPassed = 1;

    for (int i = 0; i < N; i++) {
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
        if (students[i].marks < 50) {
            allPassed = 0;
        }
    }

    if (allPassed) {
        printf("All Passed");
    } else {
        printf("Not All Passed");
    }

    return 0;
}
