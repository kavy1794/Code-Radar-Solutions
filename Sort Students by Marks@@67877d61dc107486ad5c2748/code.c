#include <stdio.h>
#include <string.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Student students[n];
    struct Student minStudent;

    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
        
        if (i == 0 || students[i].marks < minStudent.marks) {
            minStudent = students[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (students[i].rollNumber == 2) {
            printf("Roll number: %d, Name: %s, Marks: %.2f\n", students[i].rollNumber, students[i].name, students[i].marks);
        }
    }
    for (int i = 0; i < n; i++) {
        if (students[i].rollNumber == 1) {
            printf("Roll number: %d, Name: %s, Marks: %.2f\n", students[i].rollNumber, students[i].name, students[i].marks);
        }
    }
    for (int i = 0; i < n; i++) {
        if (students[i].rollNumber == 3) {
            printf("Roll number: %d, Name: %s, Marks: %.2f\n", students[i].rollNumber, students[i].name, students[i].marks);
        }
    }


    return 0;
}
